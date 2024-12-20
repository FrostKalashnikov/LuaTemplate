// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "D:/LuaTemplate/Plugins/MetaXR/Source/OculusXRPassthrough/Public/OculusXRPassthroughColorLut.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusXRPassthroughColorLut() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut();
	OCULUSXRPASSTHROUGH_API UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister();
	OCULUSXRPASSTHROUGH_API UEnum* Z_Construct_UEnum_OculusXRPassthrough_EColorLutType();
	OCULUSXRPASSTHROUGH_API UScriptStruct* Z_Construct_UScriptStruct_FLutTextureData();
	UPackage* Z_Construct_UPackage__Script_OculusXRPassthrough();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LutTextureData;
class UScriptStruct* FLutTextureData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LutTextureData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LutTextureData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLutTextureData, (UObject*)Z_Construct_UPackage__Script_OculusXRPassthrough(), TEXT("LutTextureData"));
	}
	return Z_Registration_Info_UScriptStruct_LutTextureData.OuterSingleton;
}
template<> OCULUSXRPASSTHROUGH_API UScriptStruct* StaticStruct<FLutTextureData>()
{
	return FLutTextureData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLutTextureData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_Resolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLutTextureData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLutTextureData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLutTextureData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLutTextureData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data_MetaData), Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Resolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLutTextureData, Resolution), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Resolution_MetaData), Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Resolution_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLutTextureData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLutTextureData_Statics::NewProp_Resolution,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLutTextureData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
		nullptr,
		&NewStructOps,
		"LutTextureData",
		Z_Construct_UScriptStruct_FLutTextureData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLutTextureData_Statics::PropPointers),
		sizeof(FLutTextureData),
		alignof(FLutTextureData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLutTextureData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLutTextureData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLutTextureData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FLutTextureData()
	{
		if (!Z_Registration_Info_UScriptStruct_LutTextureData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LutTextureData.InnerSingleton, Z_Construct_UScriptStruct_FLutTextureData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LutTextureData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EColorLutType;
	static UEnum* EColorLutType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EColorLutType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EColorLutType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OculusXRPassthrough_EColorLutType, (UObject*)Z_Construct_UPackage__Script_OculusXRPassthrough(), TEXT("EColorLutType"));
		}
		return Z_Registration_Info_UEnum_EColorLutType.OuterSingleton;
	}
	template<> OCULUSXRPASSTHROUGH_API UEnum* StaticEnum<EColorLutType>()
	{
		return EColorLutType_StaticEnum();
	}
	struct Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::Enumerators[] = {
		{ "EColorLutType::None", (int64)EColorLutType::None },
		{ "EColorLutType::TextureLUT", (int64)EColorLutType::TextureLUT },
		{ "EColorLutType::Array", (int64)EColorLutType::Array },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::Enum_MetaDataParams[] = {
		{ "Array.Hidden", "" },
		{ "Array.Name", "EColorLutType::Array" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EColorLutType::None" },
		{ "TextureLUT.DisplayName", "Texture" },
		{ "TextureLUT.Name", "EColorLutType::TextureLUT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
		nullptr,
		"EColorLutType",
		"EColorLutType",
		Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_OculusXRPassthrough_EColorLutType()
	{
		if (!Z_Registration_Info_UEnum_EColorLutType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EColorLutType.InnerSingleton, Z_Construct_UEnum_OculusXRPassthrough_EColorLutType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EColorLutType.InnerSingleton;
	}
	DEFINE_FUNCTION(UOculusXRPassthroughColorLut::execSetLutFromArray)
	{
		P_GET_TARRAY_REF(FColor,Z_Param_Out_InColorArray);
		P_GET_UBOOL(Z_Param_InIgnoreAlphaChannel);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLutFromArray(Z_Param_Out_InColorArray,Z_Param_InIgnoreAlphaChannel);
		P_NATIVE_END;
	}
	void UOculusXRPassthroughColorLut::StaticRegisterNativesUOculusXRPassthroughColorLut()
	{
		UClass* Class = UOculusXRPassthroughColorLut::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLutFromArray", &UOculusXRPassthroughColorLut::execSetLutFromArray },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics
	{
		struct OculusXRPassthroughColorLut_eventSetLutFromArray_Parms
		{
			TArray<FColor> InColorArray;
			bool InIgnoreAlphaChannel;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InColorArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InColorArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InColorArray;
		static void NewProp_InIgnoreAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InIgnoreAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray_Inner = { "InColorArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray = { "InColorArray", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OculusXRPassthroughColorLut_eventSetLutFromArray_Parms, InColorArray), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray_MetaData), Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray_MetaData) };
	void Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InIgnoreAlphaChannel_SetBit(void* Obj)
	{
		((OculusXRPassthroughColorLut_eventSetLutFromArray_Parms*)Obj)->InIgnoreAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InIgnoreAlphaChannel = { "InIgnoreAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OculusXRPassthroughColorLut_eventSetLutFromArray_Parms), &Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InIgnoreAlphaChannel_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InColorArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::NewProp_InIgnoreAlphaChannel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generate color LUT from array. Array should have format of exploded cube. Its size should be power of 2. */" },
#endif
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generate color LUT from array. Array should have format of exploded cube. Its size should be power of 2." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusXRPassthroughColorLut, nullptr, "SetLutFromArray", nullptr, nullptr, Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::OculusXRPassthroughColorLut_eventSetLutFromArray_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::OculusXRPassthroughColorLut_eventSetLutFromArray_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusXRPassthroughColorLut);
	UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut_NoRegister()
	{
		return UOculusXRPassthroughColorLut::StaticClass();
	}
	struct Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ColorLutType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorLutType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ColorLutType;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LutTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LutTexture;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreAlphaChannel_MetaData[];
#endif
		static void NewProp_IgnoreAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IgnoreAlphaChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StoredTextureData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StoredTextureData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusXRPassthrough,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusXRPassthroughColorLut_SetLutFromArray, "SetLutFromArray" }, // 3608591684
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Passthrough Color LUT" },
		{ "IncludePath", "OculusXRPassthroughColorLut.h" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType = { "ColorLutType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughColorLut, ColorLutType), Z_Construct_UEnum_OculusXRPassthrough_EColorLutType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType_MetaData), Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType_MetaData) }; // 2778596143
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_LutTexture_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Color LUT texture.*/" },
#endif
		{ "EditCondition", "ColorLutType == EColorLutType::TextureLUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Color LUT texture." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_LutTexture = { "LutTexture", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughColorLut, LutTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_LutTexture_MetaData), Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_LutTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel_MetaData[] = {
		{ "Category", "Passthrough Color LUT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If alpha channel should be ignored.*/" },
#endif
		{ "EditCondition", "ColorLutType == EColorLutType::TextureLUT" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If alpha channel should be ignored." },
#endif
	};
#endif
	void Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel_SetBit(void* Obj)
	{
		((UOculusXRPassthroughColorLut*)Obj)->IgnoreAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel = { "IgnoreAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOculusXRPassthroughColorLut), &Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel_MetaData), Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_StoredTextureData_MetaData[] = {
		{ "ModuleRelativePath", "Public/OculusXRPassthroughColorLut.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_StoredTextureData = { "StoredTextureData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOculusXRPassthroughColorLut, StoredTextureData), Z_Construct_UScriptStruct_FLutTextureData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_StoredTextureData_MetaData), Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_StoredTextureData_MetaData) }; // 3622254250
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_ColorLutType,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_LutTexture,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_IgnoreAlphaChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::NewProp_StoredTextureData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusXRPassthroughColorLut>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::ClassParams = {
		&UOculusXRPassthroughColorLut::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::Class_MetaDataParams), Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UOculusXRPassthroughColorLut()
	{
		if (!Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.OuterSingleton, Z_Construct_UClass_UOculusXRPassthroughColorLut_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusXRPassthroughColorLut.OuterSingleton;
	}
	template<> OCULUSXRPASSTHROUGH_API UClass* StaticClass<UOculusXRPassthroughColorLut>()
	{
		return UOculusXRPassthroughColorLut::StaticClass();
	}
	UOculusXRPassthroughColorLut::UOculusXRPassthroughColorLut(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusXRPassthroughColorLut);
	UOculusXRPassthroughColorLut::~UOculusXRPassthroughColorLut() {}
	struct Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::EnumInfo[] = {
		{ EColorLutType_StaticEnum, TEXT("EColorLutType"), &Z_Registration_Info_UEnum_EColorLutType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2778596143U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::ScriptStructInfo[] = {
		{ FLutTextureData::StaticStruct, Z_Construct_UScriptStruct_FLutTextureData_Statics::NewStructOps, TEXT("LutTextureData"), &Z_Registration_Info_UScriptStruct_LutTextureData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLutTextureData), 3622254250U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusXRPassthroughColorLut, UOculusXRPassthroughColorLut::StaticClass, TEXT("UOculusXRPassthroughColorLut"), &Z_Registration_Info_UClass_UOculusXRPassthroughColorLut, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusXRPassthroughColorLut), 78839289U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_2207923275(TEXT("/Script/OculusXRPassthrough"),
		Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LuaTemplate_Plugins_MetaXR_Source_OculusXRPassthrough_Public_OculusXRPassthroughColorLut_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
