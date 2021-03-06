// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveActorComponent.h"
#include "TY_TestPawn.h" // 테스트 플레이어 참조
#include "MotionControllerComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/SphereComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "HandActorComponent.h"

UMoveActorComponent::UMoveActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UMoveActorComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<ATY_TestPawn>(GetOwner());

}


void UMoveActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// 라인을 그릴지 말지 결정
	if (bIsShowingLine)
	{
		DrawTrajectory();
	}
}

void UMoveActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis("VR_RightThumbstick_X", this, &UMoveActorComponent::MoveHorizontal);
	PlayerInputComponent->BindAxis("VR_RightThumbstick_Y", this, &UMoveActorComponent::MoveVertical);
	PlayerInputComponent->BindAxis("VR_LeftThumbstick_X", this, &UMoveActorComponent::RotateHorizontal);
	PlayerInputComponent->BindAction("VR_LeftGrip", IE_Pressed, this, &UMoveActorComponent::ShowLine);
	PlayerInputComponent->BindAction("VR_LeftGrip", IE_Released, this, &UMoveActorComponent::HideLine);
	//PlayerInputComponent->BindAction("LeftTrigger", IE_Pressed, this, &UMoveActorComponent::ShootBall);
	PlayerInputComponent->BindAction("VR_LeftTrigger", IE_Pressed, this, &UMoveActorComponent::TeleportMySelf);
}

void UMoveActorComponent::MoveHorizontal(float value)
{
	if(player == nullptr)
	{
		return;
	}

	FVector dir = player->GetActorRightVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UMoveActorComponent::MoveVertical(float value)
{
	if (player == nullptr)
	{
		return;
	}

	FVector dir = player->GetActorForwardVector() * value;
	player->SetActorLocation(player->GetActorLocation() + dir * moveSpeed * GetWorld()->DeltaTimeSeconds);
}

void UMoveActorComponent::RotateHorizontal(float value)
{
	if (player == nullptr)
	{
		return;
	}

	FRotator rot = FRotator(0, value* rotateSpeed* GetWorld()->DeltaTimeSeconds, 0);
	player->AddActorLocalRotation(rot);
}

void UMoveActorComponent::DrawTrajectory()
{
	// 1. 몇 초동안 시뮬레이션 할 것인가? 5초
	float simulationTime = 5.0f;

	// 2. 몇 번의 구획으로 예측을 구분할 것인가? 50번
	float interval = 50.0f;
	float timeSegment = simulationTime / interval;

	// 3. 시뮬레이션 결과 값을 담을 변수
	TArray<FVector> linePosition;

	FVector starPos = player->leftController->GetComponentLocation();
	FVector shootDirection = simulDirection * shootPower;

	// 발사 방향을 월드 좌표에서 왼손 모션 콘트롤러를 기준으로 하는 로컬 좌표로 환산한다.
	shootDirection = player->leftController->GetComponentTransform().TransformVectorNoScale(shootDirection);


	for (int i = 0; i < interval; i++)
	{
		float realTime = timeSegment * i;

		float xPos = shootDirection.X * realTime;
		float yPos = shootDirection.Y * realTime;
		float zPos = shootDirection.Z * realTime - 980.0f * realTime * realTime * 0.5f;

		FVector predictPosition = starPos + FVector(xPos, yPos,zPos);

		// 직전 위치 ~ 예측 지점 사이에 차폐물이 있는지를 검사한다.
		// 만일, 차폐물이 있다면 그 부딪힌 지점을 배열에 추가하고 반복문을 종료시킨다.
		if (i > 0)
		{
			FHitResult hitInfo;
			FCollisionObjectQueryParams objParams;
			objParams.AddObjectTypesToQuery(ECC_WorldStatic);

			FCollisionQueryParams params;
			params.AddIgnoredActor(player);

			// 라인 트레이스 발사!
			if (GetWorld()->LineTraceSingleByObjectType(hitInfo, linePosition[i - 1], predictPosition, objParams, params))
			{
				linePosition.Add(hitInfo.ImpactPoint);
				//player->leftLog->SetText(FText::FromString(hitInfo.GetActor()->GetName()));
				teleportLocation = hitInfo.ImpactPoint;
				teleportLocation.Z += player->capsuleComp->GetScaledCapsuleHalfHeight();
				break;
			}
		}

		// 예측 지점을 배열에 추가한다.
		linePosition.Add(predictPosition);

		

	}

	// 예측 배열에 맞춰 라인 그리기
	for (int i = 0; i < linePosition.Num() - 1; i++)
	{
		DrawDebugLine(GetWorld(), linePosition[i], linePosition[i+1], FColor::Red, false, -1, 0, 2.0f);
	}
}

void UMoveActorComponent::ShowLine()
{
	bIsShowingLine = true;

	// 손을 쥐는 애니메이션을 실행한다.
	player->handComp->targetGripValueLeft = 1.0f;
}

void UMoveActorComponent::HideLine()
{
	bIsShowingLine = false;

	// 손을 펴는 애니메이션을 실행한다.
    player->handComp->targetGripValueLeft = 0;
}

void UMoveActorComponent::TeleportMySelf()
{
	// 내가 그립 버튼을 눌러서 라인을 그리고 있는 상황이라면...
	if (bIsShowingLine)
	{
		// 카메라를 페이드 인 -> 페이드 아웃시킨다.
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraFade(0, 1, 0.5f, FLinearColor::Black);

		// 카메라 페이드가 끝나는 시점에 맞춰서 이동한다.
		if (teleportLocation != FVector::ZeroVector)
		{
			player->GetWorldTimerManager().SetTimer(teleportTimer, this, &UMoveActorComponent::MoveTeleportLocation, 0.5f, false);
		}
	}
}

void UMoveActorComponent::MoveTeleportLocation()
{
	player->SetActorLocation(teleportLocation, false);
}
