// Fill out your copyright notice in the Description page of Project Settings.


#include "HandActorComponent.h"
#include "TY_TestPawn.h" // 테스트 플레이어 참조
#include "VRHandAnimInstance.h"
#include "Animation/AnimInstance.h"

UHandActorComponent::UHandActorComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}


void UHandActorComponent::BeginPlay()
{
	Super::BeginPlay();

	player = Cast<ATY_TestPawn>(GetOwner());

	if (player)
	{
		l_handAnim = Cast<UVRHandAnimInstance>(player->leftHand->GetAnimInstance());
		r_handAnim = Cast<UVRHandAnimInstance>(player->rightHand->GetAnimInstance());
	}
}


void UHandActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	l_handAnim->gripValue = FMath::Lerp(l_handAnim->gripValue, targetGripValueLeft, gripSpeed * DeltaTime);
	r_handAnim->gripValue = FMath::Lerp(r_handAnim->gripValue, targetGripValueRight, gripSpeed * DeltaTime);
}

