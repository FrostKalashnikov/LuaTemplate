// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusXRMovement/Private/LiveLinkOculusXRMovementSourceFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkOculusXRMovementSourceFactory() {}
// Cross Module References
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSourceFactory();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory();
	OCULUSXRMOVEMENT_API UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusXRMovement();
// End Cross Module References
	void ULiveLinkOculusXRMovementSourceFactory::StaticRegisterNativesULiveLinkOculusXRMovementSourceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkOculusXRMovementSourceFactory);
	UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_NoRegister()
	{
		return ULiveLinkOculusXRMovementSourceFactory::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkSourceFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRMovement,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LiveLinkOculusXRMovementSourceFactory.h" },
		{ "ModuleRelativePath", "Private/LiveLinkOculusXRMovementSourceFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkOculusXRMovementSourceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::ClassParams = {
		&ULiveLinkOculusXRMovementSourceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton, Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory.OuterSingleton;
	}
	template<> OCULUSXRMOVEMENT_API UClass* StaticClass<ULiveLinkOculusXRMovementSourceFactory>()
	{
		return ULiveLinkOculusXRMovementSourceFactory::StaticClass();
	}
	ULiveLinkOculusXRMovementSourceFactory::ULiveLinkOculusXRMovementSourceFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkOculusXRMovementSourceFactory);
	ULiveLinkOculusXRMovementSourceFactory::~ULiveLinkOculusXRMovementSourceFactory() {}
	struct Z_CompiledInDeferFile_FID_Unreal_LuaTemplate_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_LuaTemplate_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkOculusXRMovementSourceFactory, ULiveLinkOculusXRMovementSourceFactory::StaticClass, TEXT("ULiveLinkOculusXRMovementSourceFactory"), &Z_Registration_Info_UClass_ULiveLinkOculusXRMovementSourceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkOculusXRMovementSourceFactory), 2211695571U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_LuaTemplate_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h_2583902338(TEXT("/Script/OculusXRMovement"),
		Z_CompiledInDeferFile_FID_Unreal_LuaTemplate_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_LuaTemplate_Plugins_MetaXR_Source_OculusXRMovement_Private_LiveLinkOculusXRMovementSourceFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
