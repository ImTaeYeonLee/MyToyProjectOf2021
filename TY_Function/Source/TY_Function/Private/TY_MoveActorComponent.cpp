// Fill out your copyright notice in the Description page of Project Settings.


#include "TY_MoveActorComponent.h"
#include "TY_TestPawn.h" // �׽�Ʈ �÷��̾� ����
//#include "CPP_ShootingGameModeBase.h" // ���� ��� ���̽� ����.

// Sets default values for this component's properties
UTY_MoveActorComponent::UTY_MoveActorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UTY_MoveActorComponent::BeginPlay()
{
	Super::BeginPlay();

	// �� ���� ������Ʈ�� ����� ��ü�� ����
	me = Cast<ATY_TestPawn>(GetOwner());
	MyRotate = me->GetActorRotation();
}


// Called every frame
void UTY_MoveActorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    /*
    //Zoom in if ZoomIn button is down, zoom back out if it's not
    {
        if (bZoomingIn)
        {
            ZoomFactor += DeltaTime / 0.5f;         //Zoom in over half a second
        }
        else
        {
            ZoomFactor -= DeltaTime / 0.25f;        //Zoom out over a quarter of a second
        }
        ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
        //Blend our camera's FOV and our SpringArm's length based on ZoomFactor
        OurCamera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor);
        OurCameraSpringArm->TargetArmLength = FMath::Lerp<float>(400.0f, 300.0f, ZoomFactor);
    }

    */

    //������ ��, ��ġ�� ȸ��, �پ��ִ� ī�޶� ���� ȸ���˴ϴ�
    {
        FRotator NewRotation = me->GetActorRotation();
        NewRotation.Yaw += CameraInput.X * moveSpeed;
        NewRotation.Pitch += CameraInput.Y * moveSpeed;
        me->SetActorRotation(NewRotation);
    }
    
    /*
    //ī�޶��� ��ġ�� ȸ��������, �׻� �Ʒ��� ������ ���ѽ�ŵ�ϴ�
    {
        FRotator NewRotation = OurCameraSpringArm->GetComponentRotation();
        NewRotation.Pitch = FMath::Clamp(NewRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
        OurCameraSpringArm->SetWorldRotation(NewRotation);
    }
    */

    //"MoveX" �� "MoveY" �࿡ ���� �̵��� ó���մϴ�
    {
        if (!MovementInput.IsZero())
        {
            //�̵� �Է� �� ���� �ʴ� 100 ���� �������� �����մϴ�
            MovementInput = MovementInput.GetSafeNormal() * 100.0f;
            FVector NewLocation = me->GetActorLocation();
            NewLocation += me->GetActorForwardVector() * (MovementInput.X * moveSpeed) * DeltaTime;
            NewLocation += me->GetActorRightVector() * (MovementInput.Y * moveSpeed) * DeltaTime;
            NewLocation += me->GetActorUpVector() * (MovementInput.Z * moveSpeed) * DeltaTime;
            me->SetActorLocation(NewLocation);
        }
    }

    //me->playerCamera->FieldOfView = 60.0f;
}

void UTY_MoveActorComponent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    PlayerInputComponent->BindAxis("PC_MoveForward", this, &UTY_MoveActorComponent::MoveForward);
    PlayerInputComponent->BindAxis("PC_MoveRight", this, &UTY_MoveActorComponent::MoveRight);
    PlayerInputComponent->BindAxis("PC_MoveVertical", this, &UTY_MoveActorComponent::MoveVertical);
    PlayerInputComponent->BindAxis("PC_CameraPitch", this, &UTY_MoveActorComponent::PitchCamera);
    PlayerInputComponent->BindAxis("PC_CameraYaw", this, &UTY_MoveActorComponent::YawCamera);
   
    PlayerInputComponent->BindAction("PC_RotateReset", IE_Pressed, this, &UTY_MoveActorComponent::RotatorReset);
}

void UTY_MoveActorComponent::MoveForward(float AxisValue)
{
    MovementInput.X = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void UTY_MoveActorComponent::MoveRight(float AxisValue)
{
    MovementInput.Y = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void UTY_MoveActorComponent::MoveVertical(float AxisValue)
{
    MovementInput.Z = FMath::Clamp<float>(AxisValue, -1.0f, 1.0f);
}

void UTY_MoveActorComponent::PitchCamera(float AxisValue)
{
    CameraInput.Y = AxisValue;
}

void UTY_MoveActorComponent::YawCamera(float AxisValue)
{
    CameraInput.X = AxisValue;
}

void UTY_MoveActorComponent::RotatorReset()
{
    me->SetActorRotation(MyRotate);
}

