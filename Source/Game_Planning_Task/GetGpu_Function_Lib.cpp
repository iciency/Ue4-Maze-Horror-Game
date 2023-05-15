// Fill out your copyright notice in the Description page of Project Settings.


#include "GetGpu_Function_Lib.h"
#include "RenderResource.h"

FString UGetGpu_Function_Lib::GetGPUBrandName()
{
	return FWindowsPlatformMisc::GetPrimaryGPUBrand();
}

FString UGetGpu_Function_Lib::GetCPUBrandName()
{
	return FWindowsPlatformMisc::GetCPUBrand();
}

bool UGetGpu_Function_Lib::GetRaytracingEnabled()
{
	bool IsRayTracingEnabled = IsRayTracingEnabled();
	return IsRayTracingEnabled;
}
