// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TY_CameraActorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TY_FUNCTION_API UTY_CameraActorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTY_CameraActorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	// �÷��̾� �Է� ���� �� �ִ� ���
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
		
	// X(Roll) ���� �������� ȸ��
	void CameraTurning(float Axisvalue);

	// ī�޶� �� ��, �� �ƿ�
	void ZoomIn();
	void ZoomOut();

	// ī�޶� ������Ʈ ����
	UPROPERTY(VisibleAnywhere, Category = "PlayerCamera")
	class UCameraComponent* playerCamera;

	// ī�޶� ���� �ܾƿ� ����� ����, SpringArm ������Ʈ ����
	UPROPERTY(VisibleAnywhere, Category = "PlayerCamera")
	class USpringArmComponent* playerCameraSpringArm;
	
	UPROPERTY()
	FVector cameraTurnInput; // CameraTurning ���� ����� Vector ���� ����

	// ī�޶� ȸ���� �ӵ��� ����, ����
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Setting")
	float camSpeed = 300;

	float ZoomFactor;
	bool bZoomingIn;
	
private:
	// �� ������Ʈ�� ������ ����� ����
	class ATY_TestPawn* me;
};
