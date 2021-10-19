// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootPlayer.h"
#include "TY_MoveActorComponent.h"
//#include "TY_MoveComponent.h"
//#include "TY_CameraActorComponent.h"
#include "TY_CameraWheelActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h>
//#include <Components/CapsuleComponent.h>
#include <Components/ArrowComponent.h>
#include <Components/BoxComponent.h>
#include <Components/StaticMeshComponent.h>

// Sets default values
AShootPlayer::AShootPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	//playerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// Box Collision ������Ʈ �߰�
	boxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	// Hit event �߻� ��ų�� �ִ�.
	RootComponent = boxCollision;
	// Block ���·� �浹 �ɼ��� ����
	boxCollision->SetCollisionProfileName(TEXT("BlockAll"));

	// Body Mesh ������Ʈ �߰�
	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(RootComponent);
	// �浹 �ȵǵ��� ó��
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// ���͸� ������ ������Ʈ�� �ٿ�����
	//playerMove = CreateDefaultSubobject<UPlayerMove>(TEXT("playerMove"));
	playerMove = CreateDefaultSubobject<UTY_MoveActorComponent>(TEXT("playerMove"));
	//playerCameraController = CreateDefaultSubobject<UTY_CameraActorComponent>(TEXT("playerCameraController"));
	playerCameraController = CreateDefaultSubobject<UTY_CameraWheelActorComponent>(TEXT("playerCameraController"));
	/*
	playerFire = CreateDefaultSubobject<UPlayerFire>(TEXT("PlayerFire"));
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePosition"));
	firePosition->SetupAttachment(RootComponent);
	*/

	// �ڵ����� ��Ʈ�ѷ� ��� ���� �� �ֵ��� ����
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void AShootPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	/*
	if (bZoomingIn)
	{
		ZoomFactor += DeltaTime / 0.5f;         //0.5 �ʿ� ���� ����
	}
	else
	{
		ZoomFactor -= DeltaTime / 0.25f;        //0.25 �ʿ� ���� �ܾƿ�
	}
	ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
	//ZoomFactor �� ���� ������ ���� ���̿� ī�޶��� �þ� ����
	playerCamera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor);
	playerCameraSpringArm->TargetArmLength = FMath::Lerp<float>(100.0f, 100.0f, ZoomFactor);
	*/
}

// Called to bind functionality to input
void AShootPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	/*
	PlayerInputComponent->BindAction(TEXT("ZoomIn"), IE_Pressed, this, &AShootPlayer::ZoomIn);
	PlayerInputComponent->BindAction(TEXT("ZoomOut"), IE_Released, this, &AShootPlayer::ZoomOut);
	*/

	// PlayerMove ������Ʈ�� SetupPlayer �Լ� ȣ�����ְ� �ʹ�.
	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	playerCameraController->SetupPlayerInputComponent(PlayerInputComponent);

}

void AShootPlayer::OnZoom(float Axis)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Zoom!!")));

	//playerCameraSpringArm->TargetArmLength -=(ZoomSpeed*Axis);

	//playerCameraSpringArm->TargetArmLength =FMath::Clamp(playerCameraSpringArm->TargetArmLength, 80.0f, 500.0f);
}

/*
void AShootPlayer::ZoomIn()
{
	bZoomingIn = true;
}

void AShootPlayer::ZoomOut()
{
	bZoomingIn = false;
}
*/
