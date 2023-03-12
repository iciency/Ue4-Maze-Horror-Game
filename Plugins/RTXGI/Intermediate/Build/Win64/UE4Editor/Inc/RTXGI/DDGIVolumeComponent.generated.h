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

#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProbeRelocation_Statics; \
	RTXGI_API static class UScriptStruct* StaticStruct();


template<> RTXGI_API UScriptStruct* StaticStruct<struct FProbeRelocation>();

#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_SPARSE_DATA
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLightMultiplier); \
	DECLARE_FUNCTION(execGetLightMultiplier); \
	DECLARE_FUNCTION(execSetEmissiveMultiplier); \
	DECLARE_FUNCTION(execGetEmissiveMultiplier); \
	DECLARE_FUNCTION(execSetIrradianceScalar); \
	DECLARE_FUNCTION(execGetIrradianceScalar); \
	DECLARE_FUNCTION(execToggleVolume); \
	DECLARE_FUNCTION(execClearProbeData); \
	DECLARE_FUNCTION(execDDGIClearVolumes);


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLightMultiplier); \
	DECLARE_FUNCTION(execGetLightMultiplier); \
	DECLARE_FUNCTION(execSetEmissiveMultiplier); \
	DECLARE_FUNCTION(execGetEmissiveMultiplier); \
	DECLARE_FUNCTION(execSetIrradianceScalar); \
	DECLARE_FUNCTION(execGetIrradianceScalar); \
	DECLARE_FUNCTION(execToggleVolume); \
	DECLARE_FUNCTION(execClearProbeData); \
	DECLARE_FUNCTION(execDDGIClearVolumes);


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDDGIVolumeComponent, NO_API)


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDDGIVolumeComponent(); \
	friend struct Z_Construct_UClass_UDDGIVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UDDGIVolumeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTXGI"), NO_API) \
	DECLARE_SERIALIZER(UDDGIVolumeComponent) \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_ARCHIVESERIALIZER


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_INCLASS \
private: \
	static void StaticRegisterNativesUDDGIVolumeComponent(); \
	friend struct Z_Construct_UClass_UDDGIVolumeComponent_Statics; \
public: \
	DECLARE_CLASS(UDDGIVolumeComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTXGI"), NO_API) \
	DECLARE_SERIALIZER(UDDGIVolumeComponent) \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_ARCHIVESERIALIZER


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_STANDARD_CONSTRUCTORS \
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


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_ENHANCED_CONSTRUCTORS \
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


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_PRIVATE_PROPERTY_OFFSET
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_247_PROLOG
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_PRIVATE_PROPERTY_OFFSET \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_SPARSE_DATA \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_RPC_WRAPPERS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_INCLASS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_PRIVATE_PROPERTY_OFFSET \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_SPARSE_DATA \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_INCLASS_NO_PURE_DECLS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h_250_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class DDGIVolumeComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTXGI_API UClass* StaticClass<class UDDGIVolumeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Public_DDGIVolumeComponent_h


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
