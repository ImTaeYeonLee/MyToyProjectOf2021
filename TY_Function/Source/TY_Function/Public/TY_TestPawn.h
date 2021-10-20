// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TY_TestPawn.generated.h"

UCLASS()
class TY_FUNCTION_API ATY_TestPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATY_TestPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
		
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerMove")
		class UTY_MoveActorComponent* playerMove;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = "PlayerCameraController")
		class UTY_CameraWheelActorComponent* playerCameraController;

	// Box
	//UPROPERTY(VisibleAnywhere, Category = "Collision")
	//	class UBoxComponent* boxCollision;
	// StaticMesh
	//UPROPERTY(VisibleAnywhere, Category = "BodyMesh")
	//	class UStaticMeshComponent* bodyMesh;

	// ī�޶� ������Ʈ ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
		class UCameraComponent* playerCamera_pc;

	// ī�޶� ���� �ܾƿ� ����� ����, SpringArm ������Ʈ ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
		class USpringArmComponent* playerCameraSpringArm_pc;

	void OnZoom(float Axisvalue);

	float ZoomFactor;
	bool bZoomingIn;

	//----------------------------------------------------

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UCapsuleComponent* capsuleComp;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UStaticMeshComponent* bodyComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class USceneComponent* cameraRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UCameraComponent* playerCam_vr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class USpringArmComponent* playerCameraSpringArm_vr;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UMotionControllerComponent* leftController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UMotionControllerComponent* rightController;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class USkeletalMeshComponent* leftHand;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class USkeletalMeshComponent* rightHand;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UTextRenderComponent* leftLog;

	UPROPERTY(EditAnywhere, Category = PlayerSettings)
		class UTextRenderComponent* rightLog;

	// ���� ������Ʈ�� �߰��ϱ�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UMoveActorComponent* moveComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UHandActorComponent* handComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = PlayerSettings)
		class UGrabActorComponent* grabComp;


	void ResetHMD();

	FRotator hmdRotate;
	FVector hmdLocation;
	bool isHMDEnabled = false;









};
