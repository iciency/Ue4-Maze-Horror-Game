// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetGpu_Function_Lib.generated.h"

/**
 * 
 */
UCLASS()
class GAME_PLANNING_TASK_API UGetGpu_Function_Lib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get GPU Name"), Category = "Hardware")
	static FString GetGPUBrandName();
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get CPU Name"), Category = "Hardware")
	static FString GetCPUBrandName();
	/*UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Raytracing"), Category = "Hardware")
	static bool GetRaytracingEnabled();*/
};
