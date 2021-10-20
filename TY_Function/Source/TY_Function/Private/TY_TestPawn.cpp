// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_TestPawn.h"
#include "TY_MoveActorComponent.h"
#include "TY_CameraWheelActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h> // 줌인 스프링암 사용
//#include <Components/BoxComponent.h>
//#include <Components/StaticMeshComponent.h>
#include "Components/CapsuleComponent.h"
#include "Components/SceneComponent.h"
#include "MotionControllerComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "MoveActorComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "HandActorComponent.h"
#include "GrabActorComponent.h"

// Sets default values
ATY_TestPawn::ATY_TestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	capsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleCollider"));
	SetRootComponent(capsuleComp);
	capsuleComp->SetCapsuleHalfHeight(65.0f);
	capsuleComp->SetCapsuleRadius(40.0f);
	capsuleComp->SetCollisionProfileName(TEXT("VR_Player"));

	bodyComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyComp->SetupAttachment(RootComponent);
	bodyComp->SetRelativeScale3D(FVector(0.8f, 0.8f, 1.2f));

	//cameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	//cameraRoot->SetupAttachment(RootComponent);
	//cameraRoot->SetRelativeLocation(FVector(0, 0, 30.0f));

	playerCameraSpringArm_vr = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmVr"));
	playerCameraSpringArm_vr->SetupAttachment(capsuleComp);
	playerCameraSpringArm_vr->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 20.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm_vr->TargetArmLength = 100.f;

	playerCam_vr = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCameraVR"));
	playerCam_vr->SetupAttachment(playerCameraSpringArm_vr, USpringArmComponent::SocketName);
	playerCam_vr->SetRelativeLocationAndRotation(FVector(-20.0f, .0f, 70.f), FRotator(-20.f, .0f, .0f));
	//playerCam_vr->SetupAttachment(cameraRoot);

	leftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftMotionController"));
	leftController->SetupAttachment(cameraRoot);
	leftController->MotionSource = "Left";

	rightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightMotionController"));
	rightController->SetupAttachment(cameraRoot);
	rightController->MotionSource = "Right";

	leftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Left Hand"));
	leftHand->SetupAttachment(leftController);
	leftHand->SetRelativeRotation(FRotator(0, 0, -90.0f));
	leftHand->SetRelativeScale3D(FVector(1.0f, -1.f, 1.f));

	rightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Right Hand"));
	rightHand->SetupAttachment(rightController);
	rightHand->SetRelativeRotation(FRotator(0, 0, 90.0f));

	// 액터 컴포넌트들
	moveComp = CreateDefaultSubobject<UMoveActorComponent>(TEXT("MoveComponent"));
	handComp = CreateDefaultSubobject<UHandActorComponent>(TEXT("HandComponent"));
	grabComp = CreateDefaultSubobject<UGrabActorComponent>(TEXT("GrabComponent"));

	//-------------------------------------------------------------
	
	playerMove = CreateDefaultSubobject<UTY_MoveActorComponent>(TEXT("playerMove"));
	playerCameraController = CreateDefaultSubobject<UTY_CameraWheelActorComponent>(TEXT("playerCameraController"));

	//-------------------------------------------------------------

	playerCameraSpringArm_pc = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmPC"));
	playerCameraSpringArm_pc->SetupAttachment(capsuleComp);
	playerCameraSpringArm_pc->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 20.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm_pc->TargetArmLength = 100.f;

	playerCamera_pc = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCameraPC"));
	playerCamera_pc->SetupAttachment(playerCameraSpringArm_pc, USpringArmComponent::SocketName);
	playerCamera_pc->SetRelativeLocationAndRotation(FVector(-50.0f, .0f, 70.f), FRotator(-20.f, .0f, .0f));

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	//AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void ATY_TestPawn::BeginPlay()
{
	Super::BeginPlay();

	if (ATY_TestPawn::isHMDEnabled == true)
	{
	// 헤드 마운트 디스플레이 장치의 초기 위치값을 설정하기
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(hmdRotate, hmdLocation);

	// HMD 장치의 기준점을 바닥으로 설정하기
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);

	// HMD 장치의 위치를 초기화하기
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
	}
}

// Called every frame
void ATY_TestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ATY_TestPawn::isHMDEnabled == true)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("OMG HMD OUT!")));
	}
	
	//playerCam_vr->FieldOfView = FMath::Lerp<float>(150.0f, 2000.0f, playerCameraSpringArm_vr->TargetArmLength);
	
}

// Called to bind functionality to input
void ATY_TestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//-------------------------------------------------------------

	moveComp->SetupPlayerInputComponent(PlayerInputComponent);
	grabComp->SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("HMDReset", IE_Pressed, this, &ATY_TestPawn::ResetHMD);

	PlayerInputComponent->BindAxis("VR_OnZoom", this, & ATY_TestPawn::OnZoom);
	
	//-------------------------------------------------------------

	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	playerCameraController->SetupPlayerInputComponent(PlayerInputComponent);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I'm Tick!!! XD")));

}

void ATY_TestPawn::OnZoom(float Axis)
{
	// Axis * 20 만큼 스프링암 길이 조절시켜줌
	playerCameraSpringArm_vr->TargetArmLength = playerCameraSpringArm_vr->TargetArmLength + Axis * 20.0f;
	// 범위 고정
	playerCameraSpringArm_vr->TargetArmLength = FMath::Clamp(playerCameraSpringArm_vr->TargetArmLength, 150.0f, 2000.0f);
	UE_LOG(LogTemp, Warning, TEXT("VR taretlength : %f"), playerCameraSpringArm_vr->TargetArmLength);
	//playerCam_vr->FieldOfView = FMath::Lerp<float>(150.0f, 2000.0f, playerCameraSpringArm_vr->TargetArmLength);

}

void ATY_TestPawn::ResetHMD()
{
	if (ATY_TestPawn::isHMDEnabled == true)
	{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
	}
	else
	{
	return;
	}
}

