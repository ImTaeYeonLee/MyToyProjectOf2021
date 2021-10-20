// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerFire.generated.h"

// ����ڰ� �߻��ư�� ������ �Ѿ��� �߻��ϰ� �ʹ�.
// �ʿ�Ӽ� : �Ѿ˰���
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class NN_API UPlayerFire : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayerFire();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void InitializeComponent() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);

	void Fire();

	UFUNCTION(Server, Reliable, WithValidation)
	void Server_OnFire(FVector Location, FRotator Rotation);
	bool Server_OnFire_Validate(FVector Location, FRotator Rotation);
	void Server_OnFire_Implementation(FVector Location, FRotator Rotation);

	//UPROPERTY(EditDefaultsOnly, Category = CameraShake)
	//TSubclassOf<class UCameraShakeBase> cameraShake;

public:
	// �ʿ�Ӽ� : �Ѿ˰���
	UPROPERTY(EditDefaultsOnly, Category=BulletFactory)
	TSubclassOf<class ABullet> bulletFactory;

	// �ʿ�Ӽ�:��������
	UPROPERTY()
	class AFPSPlayer* me;

	UPROPERTY(EditAnywhere, Category=FireDistance)
	float fireDistance = 1000;

	UPROPERTY(EditDefaultsOnly, Category=BulletEffect)
	class UParticleSystem* bulletEffect;

	// ���� ���� �� �ε��� ��ü�� ���� ��
	UPROPERTY(EditDefaultsOnly, Category = BulletPower)
	float bulletPower = 100;

	UPROPERTY()
	class UArrowComponent* firePosition;

};
