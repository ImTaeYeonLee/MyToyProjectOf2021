// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_TestPawn.h"
#include "TY_MoveActorComponent.h"
#include "TY_CameraWheelActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h> // ���� �������� ���
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

	cameraRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Camera Root"));
	cameraRoot->SetupAttachment(RootComponent);
	cameraRoot->SetRelativeLocation(FVector(0, 0, 30.0f));

	playerCam_vr = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCameraVR"));
	playerCam_vr->SetupAttachment(cameraRoot);

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

	// ���� ������Ʈ��
	moveComp = CreateDefaultSubobject<UMoveActorComponent>(TEXT("MoveComponent"));
	handComp = CreateDefaultSubobject<UHandActorComponent>(TEXT("HandComponent"));
	grabComp = CreateDefaultSubobject<UGrabActorComponent>(TEXT("GrabComponent"));

	//-------------------------------------------------------------
	
	playerMove = CreateDefaultSubobject<UTY_MoveActorComponent>(TEXT("playerMove"));
	playerCameraController = CreateDefaultSubobject<UTY_CameraWheelActorComponent>(TEXT("playerCameraController"));

	//-------------------------------------------------------------

	playerCamera_pc = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCameraPC"));
	playerCamera_pc->SetupAttachment(playerCameraSpringArm, USpringArmComponent::SocketName);
	playerCamera_pc->SetRelativeLocationAndRotation(FVector(-50.0f, .0f, 70.f), FRotator(-20.f, .0f, .0f));

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	playerCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	playerCameraSpringArm->SetupAttachment(playerCamera_pc);
	playerCameraSpringArm->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 20.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm->TargetArmLength = 1000.f;

	//AutoPossessPlayer = EAutoReceiveInput::Player0;

}

// Called when the game starts or when spawned
void ATY_TestPawn::BeginPlay()
{
	Super::BeginPlay();

	if (ATY_TestPawn::isHMDEnabled == true)
	{
	// ��� ����Ʈ ���÷��� ��ġ�� �ʱ� ��ġ���� �����ϱ�
	UHeadMountedDisplayFunctionLibrary::GetOrientationAndPosition(hmdRotate, hmdLocation);

	// HMD ��ġ�� �������� �ٴ����� �����ϱ�
	UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Eye);

	// HMD ��ġ�� ��ġ�� �ʱ�ȭ�ϱ�
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

}

// Called to bind functionality to input
void ATY_TestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//-------------------------------------------------------------

	moveComp->SetupPlayerInputComponent(PlayerInputComponent);
	grabComp->SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("HMDReset", IE_Pressed, this, &ATY_TestPawn::ResetHMD);
	
	//-------------------------------------------------------------

	playerMove->SetupPlayerInputComponent(PlayerInputComponent);
	playerCameraController->SetupPlayerInputComponent(PlayerInputComponent);

	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I'm Tick!!! XD")));

}

void ATY_TestPawn::OnZoom(float Axis)
{
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
