// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LoLProjHUD.generated.h"

UCLASS()
class ALoLProjHUD : public AHUD {
	GENERATED_BODY()

public:

	ALoLProjHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:

	/** Crosshair asset pointer */
	UPROPERTY(EditDefaultsOnly)
	class UTexture2D* CrosshairTex;

};

