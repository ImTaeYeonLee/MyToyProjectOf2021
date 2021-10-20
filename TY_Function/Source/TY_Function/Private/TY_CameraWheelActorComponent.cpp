// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_CameraWheelActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h>
#include "TY_TestPawn.h" // 테스트 플레이어 참조

// Sets default values for this component's properties
UTY_CameraWheelActorComponent::UTY_CameraWheelActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	
	/*
	// 카메라컴포넌트를 플레이어에게로 이동
	
	playerCamera_pc = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCameraPC"));
	playerCamera_pc->SetupAttachment(playerCameraSpringArm, USpringArmComponent::SocketName);
	playerCamera_pc->SetRelativeLocationAndRotation(FVector(-50.0f, .0f, 70.f), FRotator(-20.f, .0f, .0f));

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	playerCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	playerCameraSpringArm->SetupAttachment(playerCamera_pc);
	playerCameraSpringArm->SetRelativeLocationAndRotation(FVector(-30.0f, .0f, 20.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm->TargetArmLength = 300.f;
	//playerCameraSpringArm->bEnableCameraLag = true;
	//playerCameraSpringArm->CameraLagSpeed = 3.0f;

	*/
}


// Called when the game starts
void UTY_CameraWheelActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// 이 컴포넌트를 소유할 대상을 정의
	me = Cast<ATY_TestPawn>(GetOwner());
	
}


// Called every frame
void UTY_CameraWheelActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (me)
	{
		FRotator NewRotation = me->playerCamera_pc->GetComponentRotation();
		NewRotation.Roll += cameraTurnInput.X * camSpeed * DeltaTime;
		me->playerCamera_pc->AddLocalRotation(NewRotation);

		if (!cameraTurnInput.IsZero())
		{
			cameraTurnInput = cameraTurnInput.GetSafeNormal() * 100.0f;
		}
	}
}

void UTY_CameraWheelActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis(TEXT("PC_CameraTurning"), this, &UTY_CameraWheelActorComponent::CameraTurning);

	PlayerInputComponent->BindAxis(TEXT("PC_ZoomInWheel"), this, &UTY_CameraWheelActorComponent::ZoomInWheel);
}

void UTY_CameraWheelActorComponent::CameraTurning(float Axisvalue)
{
	cameraTurnInput.X = Axisvalue;
}

void UTY_CameraWheelActorComponent::ZoomInWheel(float Axisvalue)
{
	me->playerCameraSpringArm_pc->TargetArmLength = me->playerCameraSpringArm_pc->TargetArmLength + Axisvalue * 20.0f;
	me->playerCameraSpringArm_pc->TargetArmLength = FMath::Clamp(me->playerCameraSpringArm_pc->TargetArmLength, 150.0f, 2000.0f);;
	
	UE_LOG(LogTemp, Warning, TEXT("PC taretlength : %f"), me->playerCameraSpringArm_pc->TargetArmLength);
}