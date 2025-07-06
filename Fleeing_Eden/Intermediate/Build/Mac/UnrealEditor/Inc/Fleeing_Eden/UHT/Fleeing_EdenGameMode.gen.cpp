// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fleeing_Eden/Fleeing_EdenGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFleeing_EdenGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
FLEEING_EDEN_API UClass* Z_Construct_UClass_AFleeing_EdenGameMode();
FLEEING_EDEN_API UClass* Z_Construct_UClass_AFleeing_EdenGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Fleeing_Eden();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFleeing_EdenGameMode ****************************************************
void AFleeing_EdenGameMode::StaticRegisterNativesAFleeing_EdenGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFleeing_EdenGameMode;
UClass* AFleeing_EdenGameMode::GetPrivateStaticClass()
{
	using TClass = AFleeing_EdenGameMode;
	if (!Z_Registration_Info_UClass_AFleeing_EdenGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Fleeing_EdenGameMode"),
			Z_Registration_Info_UClass_AFleeing_EdenGameMode.InnerSingleton,
			StaticRegisterNativesAFleeing_EdenGameMode,
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
	return Z_Registration_Info_UClass_AFleeing_EdenGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFleeing_EdenGameMode_NoRegister()
{
	return AFleeing_EdenGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFleeing_EdenGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Fleeing_EdenGameMode.h" },
		{ "ModuleRelativePath", "Fleeing_EdenGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFleeing_EdenGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFleeing_EdenGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Fleeing_Eden,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFleeing_EdenGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFleeing_EdenGameMode_Statics::ClassParams = {
	&AFleeing_EdenGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFleeing_EdenGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFleeing_EdenGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFleeing_EdenGameMode()
{
	if (!Z_Registration_Info_UClass_AFleeing_EdenGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFleeing_EdenGameMode.OuterSingleton, Z_Construct_UClass_AFleeing_EdenGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFleeing_EdenGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFleeing_EdenGameMode);
AFleeing_EdenGameMode::~AFleeing_EdenGameMode() {}
// ********** End Class AFleeing_EdenGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenGameMode_h__Script_Fleeing_Eden_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFleeing_EdenGameMode, AFleeing_EdenGameMode::StaticClass, TEXT("AFleeing_EdenGameMode"), &Z_Registration_Info_UClass_AFleeing_EdenGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFleeing_EdenGameMode), 3970281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenGameMode_h__Script_Fleeing_Eden_3992889674(TEXT("/Script/Fleeing_Eden"),
	Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenGameMode_h__Script_Fleeing_Eden_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_kim_Documents_GitHub_kht9544_Fleeing_Eden_Fleeing_Eden_Source_Fleeing_Eden_Fleeing_EdenGameMode_h__Script_Fleeing_Eden_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
