// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoCheckersAnalyzer/AVIFrameAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAVIFrameAnalyzer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	D3DCAPTURER_API UClass* Z_Construct_UClass_UD3DTextureCapturerActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VideoCheckersAnalyzer();
	VIDEOCHECKERSANALYZER_API UClass* Z_Construct_UClass_AAVIFrameAnalyzer();
	VIDEOCHECKERSANALYZER_API UClass* Z_Construct_UClass_AAVIFrameAnalyzer_NoRegister();
// End Cross Module References
	void AAVIFrameAnalyzer::StaticRegisterNativesAAVIFrameAnalyzer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAVIFrameAnalyzer);
	UClass* Z_Construct_UClass_AAVIFrameAnalyzer_NoRegister()
	{
		return AAVIFrameAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_AAVIFrameAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AVISize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AVISize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_D3DTextureCapturerActorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_D3DTextureCapturerActorComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevFrameNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PrevFrameNumber;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDetalizedMode_MetaData[];
#endif
		static void NewProp_isDetalizedMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDetalizedMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCapturedTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LastCapturedTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrevDecodedMS_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PrevDecodedMS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastTickTime_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastTickTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureFrameTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureFrameTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstanceDynamic_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstanceDynamic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAVIFrameAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VideoCheckersAnalyzer,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "IncludePath", "AVIFrameAnalyzer.h" },
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_AVISize_MetaData[] = {
		{ "Category", "AVIFrameAnalyzer" },
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_AVISize = { "AVISize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, AVISize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_AVISize_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_AVISize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_RenderTarget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*UPROPERTY(EditAnywhere, BlueprintReadWrite)\n    USceneCaptureComponent2D* CaptureComponent;*/" },
#endif
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n    USceneCaptureComponent2D* CaptureComponent;" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_RenderTarget_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_RenderTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_D3DTextureCapturerActorComponent_MetaData[] = {
		{ "Category", "D3DCapturer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_D3DTextureCapturerActorComponent = { "D3DTextureCapturerActorComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, D3DTextureCapturerActorComponent), Z_Construct_UClass_UD3DTextureCapturerActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_D3DTextureCapturerActorComponent_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_D3DTextureCapturerActorComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevFrameNumber_MetaData[] = {
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevFrameNumber = { "PrevFrameNumber", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, PrevFrameNumber), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevFrameNumber_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevFrameNumber_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif
	void Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode_SetBit(void* Obj)
	{
		((AAVIFrameAnalyzer*)Obj)->isDetalizedMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode = { "isDetalizedMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAVIFrameAnalyzer), &Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastCapturedTexture_MetaData[] = {
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastCapturedTexture = { "LastCapturedTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, LastCapturedTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastCapturedTexture_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastCapturedTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevDecodedMS_MetaData[] = {
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevDecodedMS = { "PrevDecodedMS", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, PrevDecodedMS), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevDecodedMS_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevDecodedMS_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastTickTime_MetaData[] = {
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastTickTime = { "LastTickTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, LastTickTime), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastTickTime_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastTickTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_CaptureFrameTexture_MetaData[] = {
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_CaptureFrameTexture = { "CaptureFrameTexture", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, CaptureFrameTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_CaptureFrameTexture_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_CaptureFrameTexture_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_MaterialInstanceDynamic_MetaData[] = {
		{ "ModuleRelativePath", "AVIFrameAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_MaterialInstanceDynamic = { "MaterialInstanceDynamic", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAVIFrameAnalyzer, MaterialInstanceDynamic), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_MaterialInstanceDynamic_MetaData), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_MaterialInstanceDynamic_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAVIFrameAnalyzer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_AVISize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_D3DTextureCapturerActorComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevFrameNumber,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_isDetalizedMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastCapturedTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_PrevDecodedMS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_LastTickTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_CaptureFrameTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAVIFrameAnalyzer_Statics::NewProp_MaterialInstanceDynamic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAVIFrameAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAVIFrameAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAVIFrameAnalyzer_Statics::ClassParams = {
		&AAVIFrameAnalyzer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAVIFrameAnalyzer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_AAVIFrameAnalyzer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAVIFrameAnalyzer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAVIFrameAnalyzer()
	{
		if (!Z_Registration_Info_UClass_AAVIFrameAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAVIFrameAnalyzer.OuterSingleton, Z_Construct_UClass_AAVIFrameAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAVIFrameAnalyzer.OuterSingleton;
	}
	template<> VIDEOCHECKERSANALYZER_API UClass* StaticClass<AAVIFrameAnalyzer>()
	{
		return AAVIFrameAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAVIFrameAnalyzer);
	AAVIFrameAnalyzer::~AAVIFrameAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckersAnalyzer_Source_VideoCheckersAnalyzer_AVIFrameAnalyzer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckersAnalyzer_Source_VideoCheckersAnalyzer_AVIFrameAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAVIFrameAnalyzer, AAVIFrameAnalyzer::StaticClass, TEXT("AAVIFrameAnalyzer"), &Z_Registration_Info_UClass_AAVIFrameAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAVIFrameAnalyzer), 3790602112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckersAnalyzer_Source_VideoCheckersAnalyzer_AVIFrameAnalyzer_h_495650983(TEXT("/Script/VideoCheckersAnalyzer"),
		Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckersAnalyzer_Source_VideoCheckersAnalyzer_AVIFrameAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_leovb_Documents_Unreal_Projects_Sandbox_Plugins_VideoCheckersAnalyzer_Source_VideoCheckersAnalyzer_AVIFrameAnalyzer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
