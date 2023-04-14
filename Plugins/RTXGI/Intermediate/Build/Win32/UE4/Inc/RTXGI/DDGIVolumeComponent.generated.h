// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTXGI_DDGIVolumeComponent_generated_h
#error "DDGIVolumeComponent.generated.h already included, missing '#pragma once' in DDGIVolumeComponent.h"
#endif
#define RTXGI_DDGIVolumeComponent_generated_h

#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_275_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProbeRelocation_Statics; \
	RTXGI_API static class UScriptStruct* StaticStruct();


template<> RTXGI_API UScriptStruct* StaticStruct<struct FProbeRelocation>();

#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_SPARSE_DATA
#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProbesVisualization); \
	DECLARE_FUNCTION(execSetLightMultiplier); \
	DECLARE_FUNCTION(execGetLightMultiplier); \
	DECLARE_FUNCTION(execSetEmissiveMultiplier); \
	DECLARE_FUNCTION(execGetEmissiveMultiplier); \
	DECLARE_FUNCTION(execSetIrradianceScalar); \
	DECLARE_FUNCTION(execGetIrradianceScalar); \
	DECLARE_FUNCTION(execSetNormalBias); \
	DECLARE_FUNCTION(execGetNormalBias); \
	DECLARE_FUNCTION(execSetViewBias); \
	DECLARE_FUNCTION(execGetViewBias); \
	DECLARE_FUNCTION(execSetBlendingCutoffDistance); \
	DECLARE_FUNCTION(execGetBlendingCutoffDistance); \
	DECLARE_FUNCTION(execSetBlendingDistance); \
	DECLARE_FUNCTION(execGetBlendingDistance); \
	DECLARE_FUNCTION(execSetLightingPriority); \
	DECLARE_FUNCTION(execGetLightingPriority); \
	DECLARE_FUNCTION(execSetUpdatePriority); \
	DECLARE_FUNCTION(execGetUpdatePriority); \
	DECLARE_FUNCTION(execToggleVolume); \
	DECLARE_FUNCTION(execClearProbeData); \
	DECLARE_FUNCTION(execDDGIClearVolumes);


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetProbesVisualization); \
	DECLARE_FUNCTION(execSetLightMultiplier); \
	DECLARE_FUNCTION(execGetLightMultiplier); \
	DECLARE_FUNCTION(execSetEmissiveMultiplier); \
	DECLARE_FUNCTION(execGetEmissiveMultiplier); \
	DECLARE_FUNCTION(execSetIrradianceScalar); \
	DECLARE_FUNCTION(execGetIrradianceScalar); \
	DECLARE_FUNCTION(execSetNormalBias); \
	DECLARE_FUNCTION(execGetNormalBias); \
	DECLARE_FUNCTION(execSetViewBias); \
	DECLARE_FUNCTION(execGetViewBias); \
	DECLARE_FUNCTION(execSetBlendingCutoffDistance); \
	DECLARE_FUNCTION(execGetBlendingCutoffDistance); \
	DECLARE_FUNCTION(execSetBlendingDistance); \
	DECLARE_FUNCTION(execGetBlendingDistance); \
	DECLARE_FUNCTION(execSetLightingPriority); \
	DECLARE_FUNCTION(execGetLightingPriority); \
	DECLARE_FUNCTION(execSetUpdatePriority); \
	DECLARE_FUNCTION(execGetUpdatePriority); \
	DECLARE_FUNCTION(execToggleVolume); \
	DECLARE_FUNCTION(execClearProbeData); \
	DECLARE_FUNCTION(execDDGIClearVolumes);


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDDGIVolumeComponent, NO_API)


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDGIVolumeComponent(); \
	friend struct Z_Construct_UClass_UDDGIVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UDDGIVolumeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTXGI"), NO_API) \
	DECLARE_SERIALIZER(UDDGIVolumeComponent) \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_ARCHIVESERIALIZER


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_INCLASS \
private: \
	static void StaticRegisterNativesUDDGIVolumeComponent(); \
	friend struct Z_Construct_UClass_UDDGIVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UDDGIVolumeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTXGI"), NO_API) \
	DECLARE_SERIALIZER(UDDGIVolumeComponent) \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_ARCHIVESERIALIZER


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDGIVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDGIVolumeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDGIVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDGIVolumeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDGIVolumeComponent(UDDGIVolumeComponent&&); \
	NO_API UDDGIVolumeComponent(const UDDGIVolumeComponent&); \
public:


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDDGIVolumeComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDDGIVolumeComponent(UDDGIVolumeComponent&&); \
	NO_API UDDGIVolumeComponent(const UDDGIVolumeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDDGIVolumeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDDGIVolumeComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDDGIVolumeComponent)


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_290_PROLOG
#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_SPARSE_DATA \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_RPC_WRAPPERS \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_INCLASS \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_SPARSE_DATA \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_293_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DDGIVolumeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTXGI_API UClass* StaticClass<class UDDGIVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h


#define FOREACH_ENUM_EDDGISKYLIGHTTYPE(op) \
	op(EDDGISkyLightType::None) \
	op(EDDGISkyLightType::Raster) \
	op(EDDGISkyLightType::RayTracing) 

enum class EDDGISkyLightType;
template<> RTXGI_API UEnum* StaticEnum<EDDGISkyLightType>();

#define FOREACH_ENUM_EDDGIRAYSPERPROBE(op) \
	op(EDDGIRaysPerProbe::n144) \
	op(EDDGIRaysPerProbe::n288) \
	op(EDDGIRaysPerProbe::n432) \
	op(EDDGIRaysPerProbe::n576) \
	op(EDDGIRaysPerProbe::n720) \
	op(EDDGIRaysPerProbe::n864) \
	op(EDDGIRaysPerProbe::n1008) 

enum class EDDGIRaysPerProbe;
template<> RTXGI_API UEnum* StaticEnum<EDDGIRaysPerProbe>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
