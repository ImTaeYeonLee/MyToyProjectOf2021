// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerFire.h"
#include "FPSPlayer.h"
#include <Components/ArrowComponent.h>
#include "Bullet.h"
#include <Kismet/GameplayStatics.h>
#include <Camera/CameraComponent.h>
#include <DrawDebugHelpers.h>
//#include "Enemy.h"
//#include "EnemyFSM.h"

// Sets default values for this component's properties
UPlayerFire::UPlayerFire()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	bWantsInitializeComponent = true;
}


// Called when the game starts
void UPlayerFire::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UPlayerFire::InitializeComponent()
{
	Super::InitializeComponent();

	me = Cast<AFPSPlayer>(GetOwner());
	// player �� �ִ� OnInputDelegate �� ó�� �Լ��� ����ϰ� �ʹ�.
	me->OnInputDelegate.AddUObject(this, &UPlayerFire::SetupPlayerInputComponent);

	// �ѱ� ������Ʈ ��������
	firePosition = Cast<UArrowComponent>(me->GetDefaultSubobjectByName(TEXT("FireComponent")));
}

// Called every frame
void UPlayerFire::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UPlayerFire::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAction(TEXT("Fire"), IE_Pressed, this, &UPlayerFire::Fire);
}

// ����ڰ� �߻��ư�� ������ �Ѿ��� �߻��ϰ� �ʹ�.
void UPlayerFire::Fire()
{
	// ����� ����
	UE_LOG(LogTemp, Warning, TEXT("Hit"));
	
	auto bullet = GetWorld()->SpawnActor<ABullet>(bulletFactory, firePosition->GetComponentLocation(), firePosition->GetComponentRotation());

	//auto bullet = GetWorld()->SpawnActor<ABullet>(bulletFactory);
	//// 2. �Ѿ��� ��ġ�ϰ� �ʹ�.
	//if (bullet)
	//{
	//	// ��ġ �� ����
	//	bullet->SetActorLocation(me->fpsCamera->GetComponentLocation());
	//	bullet->SetActorRotation(me->fpsCamera->GetComponentRotation());
	//}
	/*
	// ī�޶� ��鸮���� ó��
	//GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(cameraShake);
	
	// Line Trace �� �̿��Ͽ� �浹ó��
	FHitResult hitInfo;

	// ī�޶��� ��ġ���� -> ī�޶� �ٶ󺸴� ��������
	auto fpsCam = Cast<UCameraComponent>(me->GetDefaultSubobjectByName(TEXT("FPSCamera")));

	FVector start = fpsCam->GetComponentLocation();
	FVector end = fpsCam->GetComponentLocation() + fpsCam->GetForwardVector() * fireDistance;

	// Ư�� ���͸� �浹 ���⿡�� ���ܽ�Ű�� ���� ��
	FCollisionQueryParams param;
	param.AddIgnoredActor(me);
	bool bHit = GetWorld()->LineTraceSingleByChannel(hitInfo, start, end, ECC_Pawn, param);
	
	DrawDebugLine(GetWorld(), start, end, FColor::Blue, false, 1.f, 0.f, 1.f);

	{
		if (hitInfo.GetComponent()->GetAttachmentRootActor() != NULL)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, hitInfo.GetActor()->GetName());
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString(TEXT("Not Hit~ ( ~ =3=)~")));
		}
	}
	
	// Line �� �ε����� �� �ε��� ������ ��ƼŬȿ�� ���
	if (bHit)
	{
		FTransform trans;
		trans.SetLocation(hitInfo.ImpactPoint);
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), bulletEffect, trans);

		// ���� �ε��� �༮�� Cube ��� ���������� �ʹ�.
		if (hitInfo.GetActor()->GetName().Contains(TEXT("Cube")))
		{
			auto comp = hitInfo.GetComponent();
			comp->AddForceAtLocation(-hitInfo.ImpactNormal * bulletPower * comp->GetMass(), hitInfo.ImpactPoint);
		}

		// ���� �ε��� �༮�� Enemy ���
		//auto enemy = Cast<AEnemy>(hitInfo.GetActor());
		//if(enemy)
		//{
			// -> ���¸� Damage �� ��ȯ
			//enemy->enemyFSM->m_state = EEnemyState::Damage;
		//	enemy->enemyFSM->OnDamageProcess(fpsCam->GetForwardVector());
		//}
	}
	
	
	{// �Ѿ��� �߻��ϰ� �ʹ�.
	// 1. �Ѿ��� �ʿ��ϴ�.(�Ѿ��� �����.)
	// -> Spawn Actor
//	auto bullet = GetWorld()->SpawnActor<ABullet>(bulletFactory);
	// 2. �Ѿ��� ��ġ�ϰ� �ʹ�.
	//if (bullet)
	//{
		// ��ġ �� ����
	//	bullet->SetActorLocation(start);
	//	bullet->SetActorRotation(me->firePosition->GetComponentRotation());
	//}
	}
	*/
	Server_OnFire(firePosition->GetComponentLocation(), firePosition->GetComponentRotation());
}

bool UPlayerFire::Server_OnFire_Validate(FVector Location, FRotator Rotation)
{
	return true;
}

void UPlayerFire::Server_OnFire_Implementation(FVector Location, FRotator Rotation)
{
UE_LOG(LogTemp, Warning, TEXT("Server_OnFire_Implementation HAS BEEN CALLED"));
}
