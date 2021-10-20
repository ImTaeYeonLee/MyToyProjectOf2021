// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MyNetworkStudyHUD.generated.h"

UCLASS()
class AMyNetworkStudyHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMyNetworkStudyHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

