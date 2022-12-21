// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Game_Planning_TaskHUD.generated.h"

UCLASS()
class AGame_Planning_TaskHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGame_Planning_TaskHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

