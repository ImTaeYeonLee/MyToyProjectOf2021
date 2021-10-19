// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HandActorComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TY_FUNCTION_API UHandActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UHandActorComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	class UVRHandAnimInstance* l_handAnim;
	class UVRHandAnimInstance* r_handAnim;
	class ATY_TestPawn* player;

	float targetGripValueLeft = 0;
	float targetGripValueRight = 0;

	UPROPERTY(EditAnywhere, Category = HandAnimSettings)
	float gripSpeed = 50.f;
};
