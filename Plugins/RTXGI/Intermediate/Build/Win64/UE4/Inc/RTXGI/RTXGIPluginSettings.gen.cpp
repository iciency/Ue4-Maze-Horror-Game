// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTXGI/Private/RTXGIPluginSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTXGIPluginSettings() {}
// Cross Module References
	RTXGI_API UEnum* Z_Construct_UEnum_RTXGI_EDDGIProbesVisulizationMode();
	UPackage* Z_Construct_UPackage__Script_RTXGI();
	RTXGI_API UEnum* Z_Construct_UEnum_RTXGI_EDDGIDistanceBits();
	RTXGI_API UEnum* Z_Construct_UEnum_RTXGI_EDDGIIrradianceBits();
	RTXGI_API UClass* Z_Construct_UClass_URTXGIPluginSettings_NoRegister();
	RTXGI_API UClass* Z_Construct_UClass_URTXGIPluginSettings();
	DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
	static UEnum* EDDGIProbesVisulizationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTXGI_EDDGIProbesVisulizationMode, Z_Construct_UPackage__Script_RTXGI(), TEXT("EDDGIProbesVisulizationMode"));
		}
		return Singleton;
	}
	template<> RTXGI_API UEnum* StaticEnum<EDDGIProbesVisulizationMode>()
	{
		return EDDGIProbesVisulizationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDDGIProbesVisulizationMode(EDDGIProbesVisulizationMode_StaticEnum, TEXT("/Script/RTXGI"), TEXT("EDDGIProbesVisulizationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTXGI_EDDGIProbesVisulizationMode_Hash() { return 3725417574U; }
	UEnum* Z_Construct_UEnum_RTXGI_EDDGIProbesVisulizationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTXGI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDDGIProbesVisulizationMode"), 0, Get_Z_Construct_UEnum_RTXGI_EDDGIProbesVisulizationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDDGIProbesVisulizationMode::off", (int64)EDDGIProbesVisulizationMode::off },
				{ "EDDGIProbesVisulizationMode::irrad", (int64)EDDGIProbesVisulizationMode::irrad },
				{ "EDDGIProbesVisulizationMode::distr", (int64)EDDGIProbesVisulizationMode::distr },
				{ "EDDGIProbesVisulizationMode::distg", (int64)EDDGIProbesVisulizationMode::distg },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "distg.DisplayName", "Hit Distance" },
				{ "distg.Name", "EDDGIProbesVisulizationMode::distg" },
				{ "distr.DisplayName", "Squared Hit Distance" },
				{ "distr.Name", "EDDGIProbesVisulizationMode::distr" },
				{ "irrad.DisplayName", "Irradiance" },
				{ "irrad.Name", "EDDGIProbesVisulizationMode::irrad" },
				{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
				{ "off.DisplayName", "Off" },
				{ "off.Name", "EDDGIProbesVisulizationMode::off" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTXGI,
				nullptr,
				"EDDGIProbesVisulizationMode",
				"EDDGIProbesVisulizationMode",
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
	static UEnum* EDDGIDistanceBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTXGI_EDDGIDistanceBits, Z_Construct_UPackage__Script_RTXGI(), TEXT("EDDGIDistanceBits"));
		}
		return Singleton;
	}
	template<> RTXGI_API UEnum* StaticEnum<EDDGIDistanceBits>()
	{
		return EDDGIDistanceBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDDGIDistanceBits(EDDGIDistanceBits_StaticEnum, TEXT("/Script/RTXGI"), TEXT("EDDGIDistanceBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTXGI_EDDGIDistanceBits_Hash() { return 4283035241U; }
	UEnum* Z_Construct_UEnum_RTXGI_EDDGIDistanceBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTXGI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDDGIDistanceBits"), 0, Get_Z_Construct_UEnum_RTXGI_EDDGIDistanceBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDDGIDistanceBits::n16", (int64)EDDGIDistanceBits::n16 },
				{ "EDDGIDistanceBits::n32", (int64)EDDGIDistanceBits::n32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
				{ "n16.DisplayName", "16 bit" },
				{ "n16.Name", "EDDGIDistanceBits::n16" },
				{ "n32.DisplayName", "32 bit (for larger distances)" },
				{ "n32.Name", "EDDGIDistanceBits::n32" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTXGI,
				nullptr,
				"EDDGIDistanceBits",
				"EDDGIDistanceBits",
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
	static UEnum* EDDGIIrradianceBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RTXGI_EDDGIIrradianceBits, Z_Construct_UPackage__Script_RTXGI(), TEXT("EDDGIIrradianceBits"));
		}
		return Singleton;
	}
	template<> RTXGI_API UEnum* StaticEnum<EDDGIIrradianceBits>()
	{
		return EDDGIIrradianceBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDDGIIrradianceBits(EDDGIIrradianceBits_StaticEnum, TEXT("/Script/RTXGI"), TEXT("EDDGIIrradianceBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RTXGI_EDDGIIrradianceBits_Hash() { return 4022529897U; }
	UEnum* Z_Construct_UEnum_RTXGI_EDDGIIrradianceBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RTXGI();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDDGIIrradianceBits"), 0, Get_Z_Construct_UEnum_RTXGI_EDDGIIrradianceBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDDGIIrradianceBits::n10", (int64)EDDGIIrradianceBits::n10 },
				{ "EDDGIIrradianceBits::n32", (int64)EDDGIIrradianceBits::n32 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
				{ "n10.DisplayName", "10 bit" },
				{ "n10.Name", "EDDGIIrradianceBits::n10" },
				{ "n32.DisplayName", "32 bit (for bright lighting and extended luminance range rendering)" },
				{ "n32.Name", "EDDGIIrradianceBits::n32" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RTXGI,
				nullptr,
				"EDDGIIrradianceBits",
				"EDDGIIrradianceBits",
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
	void URTXGIPluginSettings::StaticRegisterNativesURTXGIPluginSettings()
	{
	}
	UClass* Z_Construct_UClass_URTXGIPluginSettings_NoRegister()
	{
		return URTXGIPluginSettings::StaticClass();
	}
	struct Z_Construct_UClass_URTXGIPluginSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_IrradianceBits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_IrradianceBits;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DistanceBits_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceBits_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DistanceBits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugProbeRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DebugProbeRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbeUpdateRayBudget_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ProbeUpdateRayBudget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProbesVisualization_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbesVisualization_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProbesVisualization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProbesDepthScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProbesDepthScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SerializeProbes_MetaData[];
#endif
		static void NewProp_SerializeProbes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SerializeProbes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URTXGIPluginSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_RTXGI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Configure the RTXGI plug-in.\n */" },
		{ "IncludePath", "RTXGIPluginSettings.h" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "Configure the RTXGI plug-in." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits_MetaData[] = {
		{ "Category", "DDGI" },
		{ "Comment", "/** Light clipping can occur when lighting values are too large due to bright lights or extended radiance.\n\x09* With 10-bits texture format, clipping can be componsated through the irradiance scalar parameter on the DDGI volume.\n\x09* 32-bit texture format shows no clipping but with higher memory cost and slower updates.\n\x09*/" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "Light clipping can occur when lighting values are too large due to bright lights or extended radiance.\nWith 10-bits texture format, clipping can be componsated through the irradiance scalar parameter on the DDGI volume.\n32-bit texture format shows no clipping but with higher memory cost and slower updates." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits = { "IrradianceBits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTXGIPluginSettings, IrradianceBits), Z_Construct_UEnum_RTXGI_EDDGIIrradianceBits, METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits_MetaData[] = {
		{ "Category", "DDGI" },
		{ "Comment", "/** Same story, but for probe distances and squared distances, used to prevent leaks.\n\x09*/" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "Same story, but for probe distances and squared distances, used to prevent leaks." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits = { "DistanceBits", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTXGIPluginSettings, DistanceBits), Z_Construct_UEnum_RTXGI_EDDGIDistanceBits, METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DebugProbeRadius_MetaData[] = {
		{ "Category", "DDGI" },
		{ "Comment", "/** The radius of the spheres that visualize the ddgi probes */" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "The radius of the spheres that visualize the ddgi probes" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DebugProbeRadius = { "DebugProbeRadius", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTXGIPluginSettings, DebugProbeRadius), METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DebugProbeRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DebugProbeRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbeUpdateRayBudget_MetaData[] = {
		{ "Category", "DDGI" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of rays per frame DDGI is allowed to use to update volumes at max. One volume is updated per frame\n\x09* in a weighted round robin fashion, based on each volume's update priority. It will use this many rays maximum\n\x09* when updating a volume.  A budget value of 0 means there is no budget, and all probes will be updated each time.\n\x09* A default volume has 8x8x8 probes, and uses 288 rays per probe for updates. That means it takes 147,456 rays\n\x09* to update all probes. If you set the budget to 50,000 rays, it would take 3 frames to update all the probes which\n\x09* means the probes will be less responsive to lighting changes, but will take less processing time each frame to update.\n\x09*/" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "The number of rays per frame DDGI is allowed to use to update volumes at max. One volume is updated per frame\nin a weighted round robin fashion, based on each volume's update priority. It will use this many rays maximum\nwhen updating a volume.  A budget value of 0 means there is no budget, and all probes will be updated each time.\nA default volume has 8x8x8 probes, and uses 288 rays per probe for updates. That means it takes 147,456 rays\nto update all probes. If you set the budget to 50,000 rays, it would take 3 frames to update all the probes which\nmeans the probes will be less responsive to lighting changes, but will take less processing time each frame to update." },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbeUpdateRayBudget = { "ProbeUpdateRayBudget", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTXGIPluginSettings, ProbeUpdateRayBudget), METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbeUpdateRayBudget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbeUpdateRayBudget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization_MetaData[] = {
		{ "Category", "DDGI" },
		{ "Comment", "/** Probes visualization mode for all volumes.\x09*/" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "Probes visualization mode for all volumes." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization = { "ProbesVisualization", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTXGIPluginSettings, ProbesVisualization), Z_Construct_UEnum_RTXGI_EDDGIProbesVisulizationMode, METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesDepthScale_MetaData[] = {
		{ "Category", "DDGI" },
		{ "Comment", "/** The depth value is divided by this scale before being shown on the sphere. */" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "The depth value is divided by this scale before being shown on the sphere." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesDepthScale = { "ProbesDepthScale", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URTXGIPluginSettings, ProbesDepthScale), METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesDepthScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesDepthScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes_MetaData[] = {
		{ "Category", "DDGI" },
		{ "Comment", "/** Save probes data to map file. Disabling it will clear existing saved data */" },
		{ "ModuleRelativePath", "Private/RTXGIPluginSettings.h" },
		{ "ToolTip", "Save probes data to map file. Disabling it will clear existing saved data" },
	};
#endif
	void Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes_SetBit(void* Obj)
	{
		((URTXGIPluginSettings*)Obj)->SerializeProbes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes = { "SerializeProbes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URTXGIPluginSettings), &Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes_SetBit, METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTXGIPluginSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_IrradianceBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DistanceBits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_DebugProbeRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbeUpdateRayBudget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesVisualization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_ProbesDepthScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTXGIPluginSettings_Statics::NewProp_SerializeProbes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URTXGIPluginSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTXGIPluginSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URTXGIPluginSettings_Statics::ClassParams = {
		&URTXGIPluginSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URTXGIPluginSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_URTXGIPluginSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URTXGIPluginSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URTXGIPluginSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URTXGIPluginSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URTXGIPluginSettings, 251012778);
	template<> RTXGI_API UClass* StaticClass<URTXGIPluginSettings>()
	{
		return URTXGIPluginSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URTXGIPluginSettings(Z_Construct_UClass_URTXGIPluginSettings, &URTXGIPluginSettings::StaticClass, TEXT("/Script/RTXGI"), TEXT("URTXGIPluginSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URTXGIPluginSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
