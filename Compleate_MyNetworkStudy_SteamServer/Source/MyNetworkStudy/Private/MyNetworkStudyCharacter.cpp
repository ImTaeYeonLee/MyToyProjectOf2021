// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyNetworkStudyCharacter.h"
#include "MyNetworkStudyProjectile.h"
#include <Engine/Engine.h>
//#include "AudioDeviceManager.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"
#include "Kismet/GameplayStatics.h"
#include "MotionControllerComponent.h"

DEFINE_LOG_CATEGORY_STATIC(LogFPChar, Warning, All);

//////////////////////////////////////////////////////////////////////////
// AMyNetworkStudyCharacter

AMyNetworkStudyCharacter::AMyNetworkStudyCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(false);			// otherwise won't be visible in the multiplayer
	FP_Gun->bCastDynamicShadow = false;
	FP_Gun->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	FP_Gun->SetupAttachment(RootComponent);

	FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	FP_MuzzleLocation->SetupAttachment(FP_Gun);
	FP_MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 0.0f, 10.0f);
}

void AMyNetworkStudyCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

	//Attach gun mesh component to Skeleton, doing it here because the skeleton is not yet created in the constructor
	FP_Gun->AttachToComponent(Mesh1P, FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));

	// 내가 서버라면
	// 디바이스의 오디오 소리를 받아와서
	// 엔진에서 들리게 하고 싶다
	//GEngine->GetMainAudioDevice();
	// 오디오 디바이스 받아오기
	//UE_LOG(LogTemp, Warning, TEXT("Main Audio Device Is %d"), Device); // 디버그 로그

}

//////////////////////////////////////////////////////////////////////////
// Input

void AMyNetworkStudyCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyNetworkStudyCharacter::OnFire);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyNetworkStudyCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyNetworkStudyCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for s that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &AMyNetworkStudyCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &AMyNetworkStudyCharacter::LookUpAtRate);
}

void AMyNetworkStudyCharacter::OnFire()
{
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{			
			const FRotator SpawnRotation = GetControlRotation();
			// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			const FVector SpawnLocation = ((FP_MuzzleLocation != nullptr) ? FP_MuzzleLocation->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(GunOffset);

			if (!HasAuthority()) // Fire 를 실행하는 개체가 권한이 없다면 아래를 실행합니다. 
			{
			// 클라이언트일 경우
			Server_OnFire(SpawnLocation, SpawnRotation);
			}
			else 
			{
				// 실행하는 개체가 Server 일 경우
				FActorSpawnParameters ActorSpawnParams;
				ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;

				World->SpawnActor<AMyNetworkStudyProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
				Multi_OnFire(SpawnLocation, SpawnRotation); // 사운드 기능
			}
		}
	}

	// try and play the sound if specified
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// try and play a firing animation if specified
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
		}
	}
}

bool AMyNetworkStudyCharacter::Server_OnFire_Validate(FVector Location, FRotator Rotation)
{
	return true; // return true; 로 변경
}

void AMyNetworkStudyCharacter::Server_OnFire_Implementation(FVector Location, FRotator Rotation)
{
	UE_LOG(LogTemp, Warning, TEXT("Server_OnFire_Implementation HAS BEEN CALLED"));

	Multi_OnFire(Location, Rotation); // Multicast 함수 호출
}

bool AMyNetworkStudyCharacter::Multi_OnFire_Validate(FVector Location, FRotator Rotation)
{
	return true; // true 로 변경
}

void AMyNetworkStudyCharacter::Multi_OnFire_Implementation(FVector Location, FRotator Rotation)
{
	// try and play the sound if specified
	//Set Spawn Collision Handling Override (스폰 시 다른 개체와 충돌할 경우 무시할지 말지 재정의하여 설정)
	FActorSpawnParameters ActorSpawnParams; // 액터 스폰 설정에 대한 값 파라미터 ActorSpawnParams 라는 이름의 변수를 선언했습니다.
	ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding; //(가능한 경우 조정하지만 충돌하는 경우 생성하지 마십시오.)

	GetWorld()->SpawnActor<AMyNetworkStudyProjectile>(ProjectileClass, Location, Rotation, ActorSpawnParams);
	
	UE_LOG(LogTemp, Warning, TEXT("Multi_OnFire_Implementation HAS BEEN CALLED"));
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation()); // OnFire 하단부의 if (FireSound != nullptr) 를 카피&페이스트
		UE_LOG(LogTemp, Warning, TEXT("Sound HAS BEEN CALLED"));

	}
	if (FireAnimation != nullptr)
	{
		// Get the animation object for the arms mesh
		UAnimInstance* AnimInstance = Mesh1P->GetAnimInstance();
		if (AnimInstance != nullptr)
		{
			AnimInstance->Montage_Play(FireAnimation, 1.f);
			UE_LOG(LogTemp, Warning, TEXT("Animation HAS BEEN CALLED"));

		}
	}
}

void AMyNetworkStudyCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void AMyNetworkStudyCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void AMyNetworkStudyCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void AMyNetworkStudyCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}
