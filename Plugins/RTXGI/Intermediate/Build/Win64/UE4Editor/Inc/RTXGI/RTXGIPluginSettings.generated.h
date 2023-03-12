// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTXGI_RTXGIPluginSettings_generated_h
#error "RTXGIPluginSettings.generated.h already included, missing '#pragma once' in RTXGIPluginSettings.h"
#endif
#define RTXGI_RTXGIPluginSettings_generated_h

#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_SPARSE_DATA
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_RPC_WRAPPERS
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTXGIPluginSettings(); \
	friend struct Z_Construct_UClass_URTXGIPluginSettings_Statics; \
public: \
	DECLARE_CLASS(URTXGIPluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTXGI"), NO_API) \
	DECLARE_SERIALIZER(URTXGIPluginSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_INCLASS \
private: \
	static void StaticRegisterNativesURTXGIPluginSettings(); \
	friend struct Z_Construct_UClass_URTXGIPluginSettings_Statics; \
public: \
	DECLARE_CLASS(URTXGIPluginSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/RTXGI"), NO_API) \
	DECLARE_SERIALIZER(URTXGIPluginSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTXGIPluginSettings(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTXGIPluginSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTXGIPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTXGIPluginSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTXGIPluginSettings(URTXGIPluginSettings&&); \
	NO_API URTXGIPluginSettings(const URTXGIPluginSettings&); \
public:


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URTXGIPluginSettings(URTXGIPluginSettings&&); \
	NO_API URTXGIPluginSettings(const URTXGIPluginSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTXGIPluginSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTXGIPluginSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URTXGIPluginSettings)


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_PRIVATE_PROPERTY_OFFSET
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_44_PROLOG
#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_SPARSE_DATA \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_RPC_WRAPPERS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_INCLASS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_PRIVATE_PROPERTY_OFFSET \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_SPARSE_DATA \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_INCLASS_NO_PURE_DECLS \
	Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTXGI_API UClass* StaticClass<class URTXGIPluginSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Game_Planning_Task_Plugins_RTXGI_Source_RTXGI_Private_RTXGIPluginSettings_h


#define FOREACH_ENUM_EDDGIPROBESVISULIZATIONMODE(op) \
	op(EDDGIProbesVisulizationMode::off) \
	op(EDDGIProbesVisulizationMode::irrad) \
	op(EDDGIProbesVisulizationMode::distr) \
	op(EDDGIProbesVisulizationMode::distg) 

enum class EDDGIProbesVisulizationMode : uint8;
template<> RTXGI_API UEnum* StaticEnum<EDDGIProbesVisulizationMode>();

#define FOREACH_ENUM_EDDGIDISTANCEBITS(op) \
	op(EDDGIDistanceBits::n16) \
	op(EDDGIDistanceBits::n32) 

enum class EDDGIDistanceBits : uint8;
template<> RTXGI_API UEnum* StaticEnum<EDDGIDistanceBits>();

#define FOREACH_ENUM_EDDGIIRRADIANCEBITS(op) \
	op(EDDGIIrradianceBits::n10) \
	op(EDDGIIrradianceBits::n32) 

enum class EDDGIIrradianceBits : uint8;
template<> RTXGI_API UEnum* StaticEnum<EDDGIIrradianceBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
