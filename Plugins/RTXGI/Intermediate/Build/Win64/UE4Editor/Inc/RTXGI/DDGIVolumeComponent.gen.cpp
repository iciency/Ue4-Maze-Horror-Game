// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTXGI/Public/DDGIVolumeComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDGIVolumeComponent() {}
// Cross Module References
	RTXGI_API UEnum* Z_Construct_UEnum_RTXGI_EDDGISkyLightType();
	UPackage* Z_Construct_UPackage__Script_RTXGI();
	RTXGI_API UEnum* Z_Construct_UEnum_RTXGI_EDDGIRaysPerProbe();
	RTXGI_API UScriptStruct* Z_Construct_UScriptStruct_FProbeRelocation();
	RTXGI_API UClass* Z_Construct_UClass_UDDGIVolumeComponent_NoRegister();
	RTXGI_API UClass* Z_Construct_UClass_UDDGIVolumeComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
// End Cross Module References
	static UEnum* EDDGISkyLightType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTXGI_EDDGISkyLightType, Z_Construct_UPackage__Script_RTXGI(), TEXT("EDDGISkyLightType"));
		}
		return Singleton;
	}
	template<> RTXGI_API UEnum* StaticEnum<EDDGISkyLightType>()
	{
		return EDDGISkyLightType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDDGISkyLightType(EDDGISkyLightType_StaticEnum, TEXT("/Script/RTXGI"), TEXT("EDDGISkyLightType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTXGI_EDDGISkyLightType_Hash() { return 1511136209U; }
	UEnum* Z_Construct_UEnum_RTXGI_EDDGISkyLightType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTXGI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDDGISkyLightType"), 0, Get_Z_Construct_UEnum_RTXGI_EDDGISkyLightType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDDGISkyLightType::None", (int64)EDDGISkyLightType::None },
				{ "EDDGISkyLightType::Raster", (int64)EDDGISkyLightType::Raster },
				{ "EDDGISkyLightType::RayTracing", (int64)EDDGISkyLightType::RayTracing },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
				{ "None.DisplayName", "None" },
				{ "None.Name", "EDDGISkyLightType::None" },
				{ "Raster.DisplayName", "Raster" },
				{ "Raster.Name", "EDDGISkyLightType::Raster" },
				{ "RayTracing.DisplayName", "Ray Tracing" },
				{ "RayTracing.Name", "EDDGISkyLightType::RayTracing" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTXGI,
				nullptr,
				"EDDGISkyLightType",
				"EDDGISkyLightType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDDGIRaysPerProbe_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTXGI_EDDGIRaysPerProbe, Z_Construct_UPackage__Script_RTXGI(), TEXT("EDDGIRaysPerProbe"));
		}
		return Singleton;
	}
	template<> RTXGI_API UEnum* StaticEnum<EDDGIRaysPerProbe>()
	{
		return EDDGIRaysPerProbe_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDDGIRaysPerProbe(EDDGIRaysPerProbe_StaticEnum, TEXT("/Script/RTXGI"), TEXT("EDDGIRaysPerProbe"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTXGI_EDDGIRaysPerProbe_Hash() { return 603601737U; }
	UEnum* Z_Construct_UEnum_RTXGI_EDDGIRaysPerProbe()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTXGI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDDGIRaysPerProbe"), 0, Get_Z_Construct_UEnum_RTXGI_EDDGIRaysPerProbe_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDDGIRaysPerProbe::n144", (int64)EDDGIRaysPerProbe::n144 },
				{ "EDDGIRaysPerProbe::n288", (int64)EDDGIRaysPerProbe::n288 },
				{ "EDDGIRaysPerProbe::n432", (int64)EDDGIRaysPerProbe::n432 },
				{ "EDDGIRaysPerProbe::n576", (int64)EDDGIRaysPerProbe::n576 },
				{ "EDDGIRaysPerProbe::n720", (int64)EDDGIRaysPerProbe::n720 },
				{ "EDDGIRaysPerProbe::n864", (int64)EDDGIRaysPerProbe::n864 },
				{ "EDDGIRaysPerProbe::n1008", (int64)EDDGIRaysPerProbe::n1008 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// This needs to match the shader code in ProbeBlendingCS.usf\n" },
				{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
				{ "n1008.DisplayName", "1008" },
				{ "n1008.Name", "EDDGIRaysPerProbe::n1008" },
				{ "n144.DisplayName", "144" },
				{ "n144.Name", "EDDGIRaysPerProbe::n144" },
				{ "n288.DisplayName", "288" },
				{ "n288.Name", "EDDGIRaysPerProbe::n288" },
				{ "n432.DisplayName", "432" },
				{ "n432.Name", "EDDGIRaysPerProbe::n432" },
				{ "n576.DisplayName", "576" },
				{ "n576.Name", "EDDGIRaysPerProbe::n576" },
				{ "n720.DisplayName", "720" },
				{ "n720.Name", "EDDGIRaysPerProbe::n720" },
				{ "n864.DisplayName", "864" },
				{ "n864.Name", "EDDGIRaysPerProbe::n864" },
				{ "ToolTip", "This needs to match the shader code in ProbeBlendingCS.usf" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTXGI,
				nullptr,
				"EDDGIRaysPerProbe",
				"EDDGIRaysPerProbe",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FProbeRelocation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RTXGI_API uint32 Get_Z_Construct_UScriptStruct_FProbeRelocation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProbeRelocation, Z_Construct_UPackage__Script_RTXGI(), TEXT("ProbeRelocation"), sizeof(FProbeRelocation), Get_Z_Construct_UScriptStruct_FProbeRelocation_Hash());
	}
	return Singleton;
}
template<> RTXGI_API UScriptStruct* StaticStruct<FProbeRelocation>()
{
	return FProbeRelocation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProbeRelocation(FProbeRelocation::StaticStruct, TEXT("/Script/RTXGI"), TEXT("ProbeRelocation"), false, nullptr, nullptr);
static struct FScriptStruct_RTXGI_StaticRegisterNativesFProbeRelocation
{
	FScriptStruct_RTXGI_StaticRegisterNativesFProbeRelocation()
	{
		UScriptStruct::DeferCppStructOps<FProbeRelocation>(FName(TEXT("ProbeRelocation")));
	}
} ScriptStruct_RTXGI_StaticRegisterNativesFProbeRelocation;
	struct Z_Construct_UScriptStruct_FProbeRelocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutomaticProbeRelocation_MetaData[];
#endif
		static void NewProp_AutomaticProbeRelocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutomaticProbeRelocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeMinFrontfaceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbeMinFrontfaceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeBackfaceThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbeBackfaceThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProbeRelocation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProbeRelocation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// If true, probes will attempt to relocate within their cell to leave geometry.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "If true, probes will attempt to relocate within their cell to leave geometry." },
	};
#endif
	void Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation_SetBit(void* Obj)
	{
		((FProbeRelocation*)Obj)->AutomaticProbeRelocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation = { "AutomaticProbeRelocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProbeRelocation), &Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeMinFrontfaceDistance_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "ClampMin", "0" },
		{ "Comment", "// Probe relocation moves probes that see front facing triangles closer than this value.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Probe relocation moves probes that see front facing triangles closer than this value." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeMinFrontfaceDistance = { "ProbeMinFrontfaceDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProbeRelocation, ProbeMinFrontfaceDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeMinFrontfaceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeMinFrontfaceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeBackfaceThreshold_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Probe relocation and state classifier assume probes with more than this ratio of backface hits are inside of geometry.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Probe relocation and state classifier assume probes with more than this ratio of backface hits are inside of geometry." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeBackfaceThreshold = { "ProbeBackfaceThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProbeRelocation, ProbeBackfaceThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeBackfaceThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeBackfaceThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProbeRelocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_AutomaticProbeRelocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeMinFrontfaceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProbeRelocation_Statics::NewProp_ProbeBackfaceThreshold,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProbeRelocation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RTXGI,
		nullptr,
		&NewStructOps,
		"ProbeRelocation",
		sizeof(FProbeRelocation),
		alignof(FProbeRelocation),
		Z_Construct_UScriptStruct_FProbeRelocation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProbeRelocation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProbeRelocation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProbeRelocation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProbeRelocation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProbeRelocation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RTXGI();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProbeRelocation"), sizeof(FProbeRelocation), Get_Z_Construct_UScriptStruct_FProbeRelocation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProbeRelocation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProbeRelocation_Hash() { return 3781252977U; }
	DEFINE_FUNCTION(UDDGIVolumeComponent::execSetLightMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightMultiplier(Z_Param_NewLightMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execGetLightMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLightMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execSetEmissiveMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewEmissiveMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEmissiveMultiplier(Z_Param_NewEmissiveMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execGetEmissiveMultiplier)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEmissiveMultiplier();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execSetIrradianceScalar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewIrradianceScalar);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIrradianceScalar(Z_Param_NewIrradianceScalar);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execGetIrradianceScalar)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetIrradianceScalar();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execToggleVolume)
	{
		P_GET_UBOOL(Z_Param_IsVolumeEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleVolume(Z_Param_IsVolumeEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execClearProbeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearProbeData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDDGIVolumeComponent::execDDGIClearVolumes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DDGIClearVolumes();
		P_NATIVE_END;
	}
	void UDDGIVolumeComponent::StaticRegisterNativesUDDGIVolumeComponent()
	{
		UClass* Class = UDDGIVolumeComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearProbeData", &UDDGIVolumeComponent::execClearProbeData },
			{ "DDGIClearVolumes", &UDDGIVolumeComponent::execDDGIClearVolumes },
			{ "GetEmissiveMultiplier", &UDDGIVolumeComponent::execGetEmissiveMultiplier },
			{ "GetIrradianceScalar", &UDDGIVolumeComponent::execGetIrradianceScalar },
			{ "GetLightMultiplier", &UDDGIVolumeComponent::execGetLightMultiplier },
			{ "SetEmissiveMultiplier", &UDDGIVolumeComponent::execSetEmissiveMultiplier },
			{ "SetIrradianceScalar", &UDDGIVolumeComponent::execSetIrradianceScalar },
			{ "SetLightMultiplier", &UDDGIVolumeComponent::execSetLightMultiplier },
			{ "ToggleVolume", &UDDGIVolumeComponent::execToggleVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "Comment", "// Blueprint Nodes\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Blueprint Nodes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "ClearProbeData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Clears the probe textures on all volumes\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Clears the probe textures on all volumes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "DDGIClearVolumes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics
	{
		struct DDGIVolumeComponent_eventGetEmissiveMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDGIVolumeComponent_eventGetEmissiveMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "GetEmissiveMultiplier", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventGetEmissiveMultiplier_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics
	{
		struct DDGIVolumeComponent_eventGetIrradianceScalar_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDGIVolumeComponent_eventGetIrradianceScalar_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "GetIrradianceScalar", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventGetIrradianceScalar_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics
	{
		struct DDGIVolumeComponent_eventGetLightMultiplier_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDGIVolumeComponent_eventGetLightMultiplier_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "GetLightMultiplier", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventGetLightMultiplier_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics
	{
		struct DDGIVolumeComponent_eventSetEmissiveMultiplier_Parms
		{
			float NewEmissiveMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewEmissiveMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::NewProp_NewEmissiveMultiplier = { "NewEmissiveMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDGIVolumeComponent_eventSetEmissiveMultiplier_Parms, NewEmissiveMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::NewProp_NewEmissiveMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "SetEmissiveMultiplier", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventSetEmissiveMultiplier_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics
	{
		struct DDGIVolumeComponent_eventSetIrradianceScalar_Parms
		{
			float NewIrradianceScalar;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewIrradianceScalar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::NewProp_NewIrradianceScalar = { "NewIrradianceScalar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDGIVolumeComponent_eventSetIrradianceScalar_Parms, NewIrradianceScalar), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::NewProp_NewIrradianceScalar,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "SetIrradianceScalar", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventSetIrradianceScalar_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics
	{
		struct DDGIVolumeComponent_eventSetLightMultiplier_Parms
		{
			float NewLightMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::NewProp_NewLightMultiplier = { "NewLightMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DDGIVolumeComponent_eventSetLightMultiplier_Parms, NewLightMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::NewProp_NewLightMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "SetLightMultiplier", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventSetLightMultiplier_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics
	{
		struct DDGIVolumeComponent_eventToggleVolume_Parms
		{
			bool IsVolumeEnabled;
		};
		static void NewProp_IsVolumeEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsVolumeEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::NewProp_IsVolumeEnabled_SetBit(void* Obj)
	{
		((DDGIVolumeComponent_eventToggleVolume_Parms*)Obj)->IsVolumeEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::NewProp_IsVolumeEnabled = { "IsVolumeEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DDGIVolumeComponent_eventToggleVolume_Parms), &Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::NewProp_IsVolumeEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::NewProp_IsVolumeEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "DDGI" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDDGIVolumeComponent, nullptr, "ToggleVolume", nullptr, nullptr, sizeof(DDGIVolumeComponent_eventToggleVolume_Parms), Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDDGIVolumeComponent_NoRegister()
	{
		return UDDGIVolumeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDDGIVolumeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableVolume_MetaData[];
#endif
		static void NewProp_EnableVolume_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdatePriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdatePriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LightingPriority;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendingDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendingDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendingCutoffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendingCutoffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeStatic_MetaData[];
#endif
		static void NewProp_RuntimeStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RuntimeStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastOrigin;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RaysPerProbe_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RaysPerProbe_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RaysPerProbe;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProbeCounts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeMaxRayDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbeMaxRayDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeHistoryWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbeHistoryWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeRelocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProbeRelocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollProbesInfinitely_MetaData[];
#endif
		static void NewProp_ScrollProbesInfinitely_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ScrollProbesInfinitely;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualizeProbes_MetaData[];
#endif
		static void NewProp_VisualizeProbes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_VisualizeProbes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeScrollOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProbeScrollOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_probeDistanceExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probeDistanceExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_probeIrradianceEncodingGamma_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probeIrradianceEncodingGamma;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_probeChangeThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probeChangeThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_probeBrightnessThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_probeBrightnessThreshold;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SkyLightTypeOnRayMiss_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLightTypeOnRayMiss_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkyLightTypeOnRayMiss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ViewBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ViewBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NormalBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceScalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_IrradianceScalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDDGIVolumeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RTXGI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDDGIVolumeComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_ClearProbeData, "ClearProbeData" }, // 2371545718
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_DDGIClearVolumes, "DDGIClearVolumes" }, // 189337068
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_GetEmissiveMultiplier, "GetEmissiveMultiplier" }, // 582698209
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_GetIrradianceScalar, "GetIrradianceScalar" }, // 3481598640
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_GetLightMultiplier, "GetLightMultiplier" }, // 615928876
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_SetEmissiveMultiplier, "SetEmissiveMultiplier" }, // 3870701765
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_SetIrradianceScalar, "SetIrradianceScalar" }, // 1232453427
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_SetLightMultiplier, "SetLightMultiplier" }, // 389137345
		{ &Z_Construct_UFunction_UDDGIVolumeComponent_ToggleVolume, "ToggleVolume" }, // 727174760
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Tags AssetUserData Collision Cooking Transform Rendering Mobility LOD Trigger PhysicsVolume" },
		{ "IncludePath", "DDGIVolumeComponent.h" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "Comment", "// If true, the volume will be a candidate to be updated and render indirect light into the scene (if also in the view frustum).\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "If true, the volume will be a candidate to be updated and render indirect light into the scene (if also in the view frustum)." },
	};
#endif
	void Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume_SetBit(void* Obj)
	{
		((UDDGIVolumeComponent*)Obj)->EnableVolume = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume = { "EnableVolume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDDGIVolumeComponent), &Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_UpdatePriority_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "// A priority value for scheduling updates to this volume's probes. Volumes with higher priority values get updated more often. Weighted round robin updating.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "A priority value for scheduling updates to this volume's probes. Volumes with higher priority values get updated more often. Weighted round robin updating." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_UpdatePriority = { "UpdatePriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, UpdatePriority), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_UpdatePriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_UpdatePriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingPriority_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "// A priority value used to select volumes when applying lighting. The volume with the lowest priority value is selected.\n// If volumes have the same priority, then volumes are selected based on probe density. The highest density volume is selected.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "A priority value used to select volumes when applying lighting. The volume with the lowest priority value is selected.\nIf volumes have the same priority, then volumes are selected based on probe density. The highest density volume is selected." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingPriority = { "LightingPriority", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, LightingPriority), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingPriority_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingDistance_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "Comment", "// The distance in world units that this volume blends to a volume it overlaps, or fades out.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "The distance in world units that this volume blends to a volume it overlaps, or fades out." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingDistance = { "BlendingDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, BlendingDistance), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingCutoffDistance_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "Comment", "// The distance from the edge of a volume at which it has zero weighting (turns black or yields to an encompassing volume). Useful if you don't want a linear fade all the way to the edge, which can be useful for scrolling volumes, hiding probes that haven't converged yet.\n// Volume Blend Distance begins at this distance from the edge.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "The distance from the edge of a volume at which it has zero weighting (turns black or yields to an encompassing volume). Useful if you don't want a linear fade all the way to the edge, which can be useful for scrolling volumes, hiding probes that haven't converged yet.\nVolume Blend Distance begins at this distance from the edge." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingCutoffDistance = { "BlendingCutoffDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, BlendingCutoffDistance), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingCutoffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingCutoffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "Comment", "// If true, the volume will not update at runtime, and will keep the lighting values seen when the level is saved.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "If true, the volume will not update at runtime, and will keep the lighting values seen when the level is saved." },
	};
#endif
	void Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic_SetBit(void* Obj)
	{
		((UDDGIVolumeComponent*)Obj)->RuntimeStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic = { "RuntimeStatic", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDDGIVolumeComponent), &Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LastOrigin_MetaData[] = {
		{ "Category", "GI Volume" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LastOrigin = { "LastOrigin", nullptr, (EPropertyFlags)0x0010040000030001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, LastOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LastOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LastOrigin_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// Number of rays shot for each probe when updating probe data.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Number of rays shot for each probe when updating probe data." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe = { "RaysPerProbe", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, RaysPerProbe), Z_Construct_UEnum_RTXGI_EDDGIRaysPerProbe, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeCounts_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "ClampMin", "1" },
		{ "Comment", "// Number of probes on each axis.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Number of probes on each axis." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeCounts = { "ProbeCounts", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, ProbeCounts), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeCounts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeMaxRayDistance_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "ClampMin", "0" },
		{ "Comment", "// Maximum distance a probe ray may travel. Shortening this can increase performance. If you shorten it too much, it can miss geometry.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Maximum distance a probe ray may travel. Shortening this can increase performance. If you shorten it too much, it can miss geometry." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeMaxRayDistance = { "ProbeMaxRayDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, ProbeMaxRayDistance), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeMaxRayDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeMaxRayDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeHistoryWeight_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Controls the influence of new rays when updating each probe. Values towards 1 will keep history longer, while values towards 0 will be more responsive to current values.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Controls the influence of new rays when updating each probe. Values towards 1 will keep history longer, while values towards 0 will be more responsive to current values." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeHistoryWeight = { "ProbeHistoryWeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, ProbeHistoryWeight), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeHistoryWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeHistoryWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeRelocation_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// Probes relocation.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Probes relocation." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeRelocation = { "ProbeRelocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, ProbeRelocation), Z_Construct_UScriptStruct_FProbeRelocation, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeRelocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeRelocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// If true, probes will keep their same position in world space as the volume moves around. Useful for moving volumes to have more temporally stable probes.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "If true, probes will keep their same position in world space as the volume moves around. Useful for moving volumes to have more temporally stable probes." },
	};
#endif
	void Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely_SetBit(void* Obj)
	{
		((UDDGIVolumeComponent*)Obj)->ScrollProbesInfinitely = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely = { "ScrollProbesInfinitely", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDDGIVolumeComponent), &Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// Toggle probes visualization, Probes visualization modes can be changed from Project Settings\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Toggle probes visualization, Probes visualization modes can be changed from Project Settings" },
	};
#endif
	void Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes_SetBit(void* Obj)
	{
		((UDDGIVolumeComponent*)Obj)->VisualizeProbes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes = { "VisualizeProbes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDDGIVolumeComponent), &Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeScrollOffset_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeScrollOffset = { "ProbeScrollOffset", nullptr, (EPropertyFlags)0x0010040000030001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, ProbeScrollOffset), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeScrollOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeScrollOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeDistanceExponent_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// Exponent for depth testing. A high value will rapidly react to depth discontinuities, but risks causing banding.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Exponent for depth testing. A high value will rapidly react to depth discontinuities, but risks causing banding." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeDistanceExponent = { "probeDistanceExponent", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, probeDistanceExponent), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeDistanceExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeDistanceExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeIrradianceEncodingGamma_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// Irradiance blending happens in post-tonemap space\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Irradiance blending happens in post-tonemap space" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeIrradianceEncodingGamma = { "probeIrradianceEncodingGamma", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, probeIrradianceEncodingGamma), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeIrradianceEncodingGamma_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeIrradianceEncodingGamma_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeChangeThreshold_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// A threshold ratio used during probe radiance blending that determines if a large lighting change has happened.\n// If the max color component difference is larger than this threshold, the hysteresis will be reduced.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "A threshold ratio used during probe radiance blending that determines if a large lighting change has happened.\nIf the max color component difference is larger than this threshold, the hysteresis will be reduced." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeChangeThreshold = { "probeChangeThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, probeChangeThreshold), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeChangeThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeChangeThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeBrightnessThreshold_MetaData[] = {
		{ "Category", "GI Probes" },
		{ "Comment", "// A threshold value used during probe radiance blending that determines the maximum allowed difference in brightness\n// between the previous and current irradiance values. This prevents impulses from drastically changing a\n// texel's irradiance in a single update cycle.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "A threshold value used during probe radiance blending that determines the maximum allowed difference in brightness\nbetween the previous and current irradiance values. This prevents impulses from drastically changing a\ntexel's irradiance in a single update cycle." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeBrightnessThreshold = { "probeBrightnessThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, probeBrightnessThreshold), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeBrightnessThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeBrightnessThreshold_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "Comment", "// What type of skylight should contribute to GI\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "What type of skylight should contribute to GI" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss = { "SkyLightTypeOnRayMiss", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, SkyLightTypeOnRayMiss), Z_Construct_UEnum_RTXGI_EDDGISkyLightType, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ViewBias_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "ClampMin", "0" },
		{ "Comment", "// Bias values for Indirect Lighting\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Bias values for Indirect Lighting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ViewBias = { "ViewBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, ViewBias), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ViewBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ViewBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_NormalBias_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "ClampMin", "0" },
		{ "Comment", "// Bias values for Indirect Lighting\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Bias values for Indirect Lighting" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_NormalBias = { "NormalBias", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, NormalBias), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_NormalBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_NormalBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightMultiplier_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "ClampMin", "0" },
		{ "Comment", "// If you want to artificially increase the amount of lighting given by this volume, you can modify this lighting multiplier to do so.\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "If you want to artificially increase the amount of lighting given by this volume, you can modify this lighting multiplier to do so." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightMultiplier = { "LightMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, LightMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EmissiveMultiplier_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "ClampMin", "0" },
		{ "Comment", "// Use this to artificially modify how much emissive lighting contributes to GI\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Use this to artificially modify how much emissive lighting contributes to GI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EmissiveMultiplier = { "EmissiveMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, EmissiveMultiplier), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EmissiveMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EmissiveMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_IrradianceScalar_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0.001" },
		{ "Comment", "// Multiplier to compensate for irradiance clipping that might happen in 10-bit mode (use smaller values for higher irradiance).\n// 32 - bit irradiance textures can be set from project settings to avoid clipping but will have higher memory cost and slower to update.\n" },
		{ "DisplayName", "10-Bit Irradiance Scalar" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Multiplier to compensate for irradiance clipping that might happen in 10-bit mode (use smaller values for higher irradiance).\n32 - bit irradiance textures can be set from project settings to avoid clipping but will have higher memory cost and slower to update." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_IrradianceScalar = { "IrradianceScalar", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, IrradianceScalar), METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_IrradianceScalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_IrradianceScalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingChannels_MetaData[] = {
		{ "Category", "GI Lighting" },
		{ "Comment", "// Objects with overlapping channel flags will receive lighting from this volume\n" },
		{ "ModuleRelativePath", "Public/DDGIVolumeComponent.h" },
		{ "ToolTip", "Objects with overlapping channel flags will receive lighting from this volume" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDDGIVolumeComponent, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingChannels_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDDGIVolumeComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EnableVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_UpdatePriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingPriority,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_BlendingCutoffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RuntimeStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LastOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_RaysPerProbe,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeMaxRayDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeHistoryWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeRelocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ScrollProbesInfinitely,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_VisualizeProbes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ProbeScrollOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeDistanceExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeIrradianceEncodingGamma,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeChangeThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_probeBrightnessThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_SkyLightTypeOnRayMiss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_ViewBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_NormalBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_EmissiveMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_IrradianceScalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDDGIVolumeComponent_Statics::NewProp_LightingChannels,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDDGIVolumeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDDGIVolumeComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDDGIVolumeComponent_Statics::ClassParams = {
		&UDDGIVolumeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDDGIVolumeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDDGIVolumeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDDGIVolumeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDDGIVolumeComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDDGIVolumeComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDDGIVolumeComponent, 1985591979);
	template<> RTXGI_API UClass* StaticClass<UDDGIVolumeComponent>()
	{
		return UDDGIVolumeComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDDGIVolumeComponent(Z_Construct_UClass_UDDGIVolumeComponent, &UDDGIVolumeComponent::StaticClass, TEXT("/Script/RTXGI"), TEXT("UDDGIVolumeComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDDGIVolumeComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDDGIVolumeComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
