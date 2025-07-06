// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fleeing_Eden/Fleeing_EdenPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFleeing_EdenPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
FLEEING_EDEN_API UClass* Z_Construct_UClass_AFleeing_EdenPlayerController();
FLEEING_EDEN_API UClass* Z_Construct_UClass_AFleeing_EdenPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Fleeing_Eden();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFleeing_EdenPlayerController ********************************************
void AFleeing_EdenPlayerController::StaticRegisterNativesAFleeing_EdenPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFleeing_EdenPlayerController;
UClass* AFleeing_EdenPlayerController::GetPrivateStaticClass()
{
	using TClass = AFleeing_EdenPlayerController;
	if (!Z_Registration_Info_UClass_AFleeing_EdenPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Fleeing_EdenPlayerController"),
			Z_Registration_Info_UClass_AFleeing_EdenPlayerController.InnerSingleton,
			StaticRegisterNativesAFleeing_EdenPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AFleeing_EdenPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AFleeing_EdenPlayerController_NoRegister()
{
	return AFleeing_EdenPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFleeing_EdenPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Fleeing_EdenPlayerController.h" },
		{ "ModuleRelativePath", "Fleeing_EdenPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Fleeing_EdenPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFleeing_EdenPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFleeing_EdenPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Fleeing_Eden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::ClassParams = {
	&AFleeing_EdenPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFleeing_EdenPlayerController()
{
	if (!Z_Registration_Info_UClass_AFleeing_EdenPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFleeing_EdenPlayerController.OuterSingleton, Z_Construct_UClass_AFleeing_EdenPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFleeing_EdenPlayerController.OuterSingleton;
}
AFleeing_EdenPlayerController::AFleeing_EdenPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFleeing_EdenPlayerController);
AFleeing_EdenPlayerController::~AFleeing_EdenPlayerController() {}
// ********** End Class AFleeing_EdenPlayerController **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenPlayerController_h__Script_Fleeing_Eden_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFleeing_EdenPlayerController, AFleeing_EdenPlayerController::StaticClass, TEXT("AFleeing_EdenPlayerController"), &Z_Registration_Info_UClass_AFleeing_EdenPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFleeing_EdenPlayerController), 3042634699U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenPlayerController_h__Script_Fleeing_Eden_3179329110(TEXT("/Script/Fleeing_Eden"),
	Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenPlayerController_h__Script_Fleeing_Eden_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenPlayerController_h__Script_Fleeing_Eden_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
