// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFleeing_Eden_init() {}
	FLEEING_EDEN_API UFunction* Z_Construct_UDelegateFunction_Fleeing_Eden_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Fleeing_Eden;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Fleeing_Eden()
	{
		if (!Z_Registration_Info_UPackage__Script_Fleeing_Eden.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Fleeing_Eden_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Fleeing_Eden",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x32747F45,
				0x020AAF4E,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Fleeing_Eden.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Fleeing_Eden.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Fleeing_Eden(Z_Construct_UPackage__Script_Fleeing_Eden, TEXT("/Script/Fleeing_Eden"), Z_Registration_Info_UPackage__Script_Fleeing_Eden, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x32747F45, 0x020AAF4E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
