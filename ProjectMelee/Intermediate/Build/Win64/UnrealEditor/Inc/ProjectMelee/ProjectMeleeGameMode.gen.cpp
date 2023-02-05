// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectMelee/ProjectMeleeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectMeleeGameMode() {}
// Cross Module References
	PROJECTMELEE_API UClass* Z_Construct_UClass_AProjectMeleeGameMode_NoRegister();
	PROJECTMELEE_API UClass* Z_Construct_UClass_AProjectMeleeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectMelee();
// End Cross Module References
	void AProjectMeleeGameMode::StaticRegisterNativesAProjectMeleeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectMeleeGameMode);
	UClass* Z_Construct_UClass_AProjectMeleeGameMode_NoRegister()
	{
		return AProjectMeleeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProjectMeleeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectMeleeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectMelee,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectMeleeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectMeleeGameMode.h" },
		{ "ModuleRelativePath", "ProjectMeleeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectMeleeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectMeleeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectMeleeGameMode_Statics::ClassParams = {
		&AProjectMeleeGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProjectMeleeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectMeleeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectMeleeGameMode()
	{
		if (!Z_Registration_Info_UClass_AProjectMeleeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectMeleeGameMode.OuterSingleton, Z_Construct_UClass_AProjectMeleeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectMeleeGameMode.OuterSingleton;
	}
	template<> PROJECTMELEE_API UClass* StaticClass<AProjectMeleeGameMode>()
	{
		return AProjectMeleeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectMeleeGameMode);
	struct Z_CompiledInDeferFile_FID_ProjectMelee_Source_ProjectMelee_ProjectMeleeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMelee_Source_ProjectMelee_ProjectMeleeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectMeleeGameMode, AProjectMeleeGameMode::StaticClass, TEXT("AProjectMeleeGameMode"), &Z_Registration_Info_UClass_AProjectMeleeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectMeleeGameMode), 2776467057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectMelee_Source_ProjectMelee_ProjectMeleeGameMode_h_2833752346(TEXT("/Script/ProjectMelee"),
		Z_CompiledInDeferFile_FID_ProjectMelee_Source_ProjectMelee_ProjectMeleeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectMelee_Source_ProjectMelee_ProjectMeleeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
