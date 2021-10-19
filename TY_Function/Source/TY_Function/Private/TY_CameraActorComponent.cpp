// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_CameraActorComponent.h"
#include <Camera/CameraComponent.h>
#include <Runtime/Engine/Classes/GameFramework/SpringArmComponent.h>
#include "TY_TestPawn.h" // 테스트 플레이어 참조

// Sets default values for this component's properties
UTY_CameraActorComponent::UTY_CameraActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	playerCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PlayerCamera"));
	playerCamera->SetupAttachment(playerCameraSpringArm, USpringArmComponent::SocketName);

	//RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	playerCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	playerCameraSpringArm->SetupAttachment(playerCamera);
	playerCameraSpringArm->SetRelativeLocationAndRotation(FVector(.0f, .0f, 10.f), FRotator(-10.f, .0f, .0f));
	playerCameraSpringArm->TargetArmLength = 100.f;
	playerCameraSpringArm->bEnableCameraLag = true;
	playerCameraSpringArm->CameraLagSpeed = 3.0f;
}


// Called when the game starts
void UTY_CameraActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// 이 컴포넌트를 소유할 대상을 정의
	me = Cast<ATY_TestPawn>(GetOwner());
	
}


// Called every frame
void UTY_CameraActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (me)
	{		
		FRotator NewRotation = me->GetActorRotation();
		NewRotation.Roll += cameraTurnInput.X * camSpeed * DeltaTime;
		me->SetActorRotation(NewRotation);
		
		if (!cameraTurnInput.IsZero())
		{
			cameraTurnInput = cameraTurnInput.GetSafeNormal() * 100.0f;
		}
	}
	
	if (bZoomingIn)
	{
		ZoomFactor += DeltaTime / 0.5f;
	}
	else
	{
		ZoomFactor -= DeltaTime / 0.25f;
	}
	ZoomFactor = FMath::Clamp<float>(ZoomFactor, 150.0f, 1800.0f);
	playerCamera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor);
	playerCameraSpringArm->TargetArmLength = FMath::Lerp<float>(150.0f, 1800.0f, ZoomFactor);
}

void UTY_CameraActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	PlayerInputComponent->BindAxis(TEXT("PC_CameraTurning"), this, &UTY_CameraActorComponent::CameraTurning);

	PlayerInputComponent->BindAction(TEXT("PC_ZoomIn"), IE_Pressed, this, &UTY_CameraActorComponent::ZoomIn);
	PlayerInputComponent->BindAction(TEXT("PC_ZoomOut"), IE_Released, this, &UTY_CameraActorComponent::ZoomOut);
}

void UTY_CameraActorComponent::CameraTurning(float Axisvalue)
{
	cameraTurnInput.X = Axisvalue;
}

void UTY_CameraActorComponent::ZoomIn()
{
	bZoomingIn = true;
}

void UTY_CameraActorComponent::ZoomOut()
{
	bZoomingIn = false;
}

