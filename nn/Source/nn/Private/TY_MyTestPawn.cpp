// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_MyTestPawn.h"

// Sets default values
ATY_MyTestPawn::ATY_MyTestPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATY_MyTestPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATY_MyTestPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATY_MyTestPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

