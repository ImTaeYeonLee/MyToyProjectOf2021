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

	// Box Collision 컴포넌트 추가
	boxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	// Hit event 발생 시킬수 있다.
	RootComponent = boxCollision;
	// Block 형태로 충돌 옵션이 설정
	boxCollision->SetCollisionProfileName(TEXT("BlockAll"));

	// Body Mesh 컴포넌트 추가
	bodyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BodyMesh"));
	bodyMesh->SetupAttachment(RootComponent);
	// 충돌 안되도록 처리
	bodyMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	// 액터를 구성할 컴포넌트를 붙여주자
	//playerMove = CreateDefaultSubobject<UPlayerMove>(TEXT("playerMove"));
	playerMove = CreateDefaultSubobject<UTY_MoveActorComponent>(TEXT("playerMove"));
	//playerCameraController = CreateDefaultSubobject<UTY_CameraActorComponent>(TEXT("playerCameraController"));
	playerCameraController = CreateDefaultSubobject<UTY_CameraWheelActorComponent>(TEXT("playerCameraController"));
	/*
	playerFire = CreateDefaultSubobject<UPlayerFire>(TEXT("PlayerFire"));
	firePosition = CreateDefaultSubobject<UArrowComponent>(TEXT("FirePosition"));
	firePosition->SetupAttachment(RootComponent);
	*/

	// 자동으로 컨트롤러 제어를 받을 수 있도록 설정
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
		ZoomFactor += DeltaTime / 0.5f;         //0.5 초에 걸쳐 줌인
	}
	else
	{
		ZoomFactor -= DeltaTime / 0.25f;        //0.25 초에 걸쳐 줌아웃
	}
	ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
	//ZoomFactor 에 따라 스프링 암의 길이와 카메라의 시야 블렌딩
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

	// PlayerMove 컴포넌트의 SetupPlayer 함수 호출해주고 싶다.
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
