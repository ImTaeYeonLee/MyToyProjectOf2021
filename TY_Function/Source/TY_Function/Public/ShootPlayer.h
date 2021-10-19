// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
//#include "GameFramework/Character.h"
#include "ShootPlayer.generated.h"

UCLASS()
class TY_FUNCTION_API AShootPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShootPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// 카메라 컴포넌트 선언
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "PlayerCamera")
	class UCameraComponent* playerCamera;

	// 카메라 줌인 줌아웃 기능을 위해, SpringArm 컴포넌트 선언
	//(VisibleAnywhere, Category = "PlayerCamera")
	//class USpringArmComponent* playerCameraSpringArm;
	
	/*
	UPROPERTY(VisibleAnywhere, Category = "PlayerMove")
	class UPlayerMove* playerMove;
	
	UPROPERTY(VisibleAnywhere, Category = "PlayerFire")
	class UPlayerFire* playerFire;

	UPROPERTY(VisibleAnywhere, Category = "FirePosition")
	class UArrowComponent* firePosition;
	*/

	
	UPROPERTY(VisibleAnywhere, Category = "PlayerMove")
	class UTY_MoveActorComponent* playerMove;

	//UPROPERTY(VisibleAnywhere, category = "PlayerCameraController")
	//class UTY_CameraActorComponent* playerCameraController;

	UPROPERTY(VisibleAnywhere, category = "PlayerCameraController")
	class UTY_CameraWheelActorComponent* playerCameraController;
	
	// Box
	UPROPERTY(VisibleAnywhere, Category = "Collision")
	class UBoxComponent* boxCollision;
	// StaticMesh
	UPROPERTY(VisibleAnywhere, Category = "BodyMesh")
	class UStaticMeshComponent* bodyMesh;

	void OnZoom(float Axis);

	float ZoomFactor;
	bool bZoomingIn;
/*
	void ZoomIn();
	void ZoomOut();

*/
};
