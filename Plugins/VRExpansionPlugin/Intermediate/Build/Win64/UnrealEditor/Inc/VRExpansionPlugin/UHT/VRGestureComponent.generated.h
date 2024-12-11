// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRGestureComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGesturesDatabase;
class UMaterial;
class UObject;
class USplineComponent;
class UStaticMesh;
enum class EVRGestureFlattenAxis : uint8;
struct FColor;
struct FVRGesture;
#ifdef VREXPANSIONPLUGIN_VRGestureComponent_generated_h
#error "VRGestureComponent.generated.h already included, missing '#pragma once' in VRGestureComponent.h"
#endif
#define VREXPANSIONPLUGIN_VRGestureComponent_generated_h

#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGestureSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGestureSettings>();

#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGesture_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGesture>();

#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_SPARSE_DATA
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execImportSplineAsGesture); \
	DECLARE_FUNCTION(execFillSplineWithGesture); \
	DECLARE_FUNCTION(execRecalculateGestures);


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_ACCESSORS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGesturesDatabase(); \
	friend struct Z_Construct_UClass_UGesturesDatabase_Statics; \
public: \
	DECLARE_CLASS(UGesturesDatabase, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UGesturesDatabase)


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGesturesDatabase(UGesturesDatabase&&); \
	NO_API UGesturesDatabase(const UGesturesDatabase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGesturesDatabase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGesturesDatabase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGesturesDatabase) \
	NO_API virtual ~UGesturesDatabase();


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_155_PROLOG
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_SPARSE_DATA \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_ACCESSORS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_INCLASS_NO_PURE_DECLS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_158_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UGesturesDatabase>();

#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_191_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVRGestureSplineDraw_Statics; \
	static class UScriptStruct* StaticStruct();


template<> VREXPANSIONPLUGIN_API UScriptStruct* StaticStruct<struct FVRGestureSplineDraw>();

#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_217_DELEGATE \
VREXPANSIONPLUGIN_API void FVRGestureDetectedSignature_DelegateWrapper(const FMulticastScriptDelegate& VRGestureDetectedSignature, uint8 GestureType, const FString& DetectedGestureName, int32 DetectedGestureIndex, UGesturesDatabase* GestureDataBase, FVector OriginalUnscaledGestureSize);


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_SPARSE_DATA
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveRecording); \
	DECLARE_FUNCTION(execClearRecording); \
	DECLARE_FUNCTION(execEndRecording); \
	DECLARE_FUNCTION(execBeginRecording); \
	DECLARE_FUNCTION(execDrawDebugGesture); \
	DECLARE_FUNCTION(execRecalculateGestureSize);


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_ACCESSORS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_CALLBACK_WRAPPERS
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRGestureComponent(); \
	friend struct Z_Construct_UClass_UVRGestureComponent_Statics; \
public: \
	DECLARE_CLASS(UVRGestureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VRExpansionPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVRGestureComponent)


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRGestureComponent(UVRGestureComponent&&); \
	NO_API UVRGestureComponent(const UVRGestureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRGestureComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRGestureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRGestureComponent) \
	NO_API virtual ~UVRGestureComponent();


#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_226_PROLOG
#define FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_SPARSE_DATA \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_ACCESSORS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_CALLBACK_WRAPPERS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_INCLASS_NO_PURE_DECLS \
	FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h_229_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VREXPANSIONPLUGIN_API UClass* StaticClass<class UVRGestureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LuaTemplate_Plugins_VRExpansionPlugin_Source_VRExpansionPlugin_Public_VRGestureComponent_h


#define FOREACH_ENUM_EVRGESTURESTATE(op) \
	op(EVRGestureState::GES_None) \
	op(EVRGestureState::GES_Recording) \
	op(EVRGestureState::GES_Detecting) 

enum class EVRGestureState : uint8;
template<> struct TIsUEnumClass<EVRGestureState> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureState>();

#define FOREACH_ENUM_EVRGESTUREMIRRORMODE(op) \
	op(EVRGestureMirrorMode::GES_NoMirror) \
	op(EVRGestureMirrorMode::GES_MirrorLeft) \
	op(EVRGestureMirrorMode::GES_MirrorRight) \
	op(EVRGestureMirrorMode::GES_MirrorBoth) 

enum class EVRGestureMirrorMode : uint8;
template<> struct TIsUEnumClass<EVRGestureMirrorMode> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureMirrorMode>();

#define FOREACH_ENUM_EVRGESTUREFLATTENAXIS(op) \
	op(EVRGestureFlattenAxis::GES_FlattenX) \
	op(EVRGestureFlattenAxis::GES_FlattenY) \
	op(EVRGestureFlattenAxis::GES_FlattenZ) \
	op(EVRGestureFlattenAxis::GES_DontFlatten) 

enum class EVRGestureFlattenAxis : uint8;
template<> struct TIsUEnumClass<EVRGestureFlattenAxis> { enum { Value = true }; };
template<> VREXPANSIONPLUGIN_API UEnum* StaticEnum<EVRGestureFlattenAxis>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
