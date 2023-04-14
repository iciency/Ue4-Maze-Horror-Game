// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTXGI/Public/DDGIVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDDGIVolume() {}
// Cross Module References
	RTXGI_API UClass* Z_Construct_UClass_ADDGIVolume_NoRegister();
	RTXGI_API UClass* Z_Construct_UClass_ADDGIVolume();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RTXGI();
	RTXGI_API UClass* Z_Construct_UClass_UDDGIVolumeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ADDGIVolume::StaticRegisterNativesADDGIVolume()
	{
	}
	UClass* Z_Construct_UClass_ADDGIVolume_NoRegister()
	{
		return ADDGIVolume::StaticClass();
	}
	struct Z_Construct_UClass_ADDGIVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DDGIVolumeComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DDGIVolumeComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADDGIVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RTXGI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGIVolume_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "RTXGI DDGI Volume" },
		{ "HideCategories", "Navigation Physics Collision Rendering Tags Cooking Replication Input Actor HLOD Mobile LOD" },
		{ "IncludePath", "DDGIVolume.h" },
		{ "ModuleRelativePath", "Public/DDGIVolume.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGIVolume_Statics::NewProp_DDGIVolumeComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDGIVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADDGIVolume_Statics::NewProp_DDGIVolumeComponent = { "DDGIVolumeComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDGIVolume, DDGIVolumeComponent), Z_Construct_UClass_UDDGIVolumeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADDGIVolume_Statics::NewProp_DDGIVolumeComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDGIVolume_Statics::NewProp_DDGIVolumeComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADDGIVolume_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DDGIVolume.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADDGIVolume_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0010000800082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADDGIVolume, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADDGIVolume_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADDGIVolume_Statics::NewProp_BoxComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADDGIVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDGIVolume_Statics::NewProp_DDGIVolumeComponent,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADDGIVolume_Statics::NewProp_BoxComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADDGIVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADDGIVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADDGIVolume_Statics::ClassParams = {
		&ADDGIVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADDGIVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADDGIVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADDGIVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADDGIVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADDGIVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADDGIVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADDGIVolume, 2495736056);
	template<> RTXGI_API UClass* StaticClass<ADDGIVolume>()
	{
		return ADDGIVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADDGIVolume(Z_Construct_UClass_ADDGIVolume, &ADDGIVolume::StaticClass, TEXT("/Script/RTXGI"), TEXT("ADDGIVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADDGIVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
