#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Engine/GameViewportClient.h"
#include "Engine/Texture2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "ImageUtils.h"
#include "Slate/SceneViewport.h"
#include "Framework/Application/SlateApplication.h"
#include "Application/SlateApplicationBase.h"
#include "Kismet/KismetRenderingLibrary.h"
#include "Editor.h"
#include "D3DTextureCapturerActorComponent.h"
#include "HAL/FileManagerGeneric.h"
#include "AVIFrameAnalyzer.generated.h"

// ����� ��� ������� ��������������� ������

UCLASS()
class AAVIFrameAnalyzer : public AActor
{
    GENERATED_BODY()

public:
    AAVIFrameAnalyzer();

    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    FVector2D AVISize = FVector2D(1920, 1080);

    /*UPROPERTY(EditAnywhere, BlueprintReadWrite)
    USceneCaptureComponent2D* CaptureComponent;*/

    UPROPERTY()
    UTextureRenderTarget2D* RenderTarget;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "D3DCapturer")
    UD3DTextureCapturerActorComponent* D3DTextureCapturerActorComponent;

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY()
    uint32 PrevFrameNumber = 0;

    // �������� �� ������ ����
    UPROPERTY()
    bool isDetalizedMode;
    UPROPERTY()
    UTexture2D* LastCapturedTexture = nullptr;

    UPROPERTY()
    uint8 PrevDecodedMS = 0;

    UPROPERTY()
    uint8 LastTickTime = 0;

    UPROPERTY()
    UTextureRenderTarget2D* CaptureFrameTexture;

    UPROPERTY()
    UMaterialInstanceDynamic* MaterialInstanceDynamic;

    // ����� ��� ������� ����� � ������� ������ �������� �� Viewport (!!! �������� �� ��������� ����, � ���� 3D �����)
    void CaptureViewport(); 

    void DecodeTexture(UTexture2D* CapturedTexture);

    void SaveDataToFile(int FrameNumber, int Milliseconds);

    void SaveDataToFile(int FrameNumber);

    // ����� ��� ������� ����� � ������� �������� ��������� (!!! �������� ������ 3D �����)
    void Screenshot(); 

    // ����� ��� ������� ����� � ������� SceneCaptureComponent (!!! �� �������)
    //void CaptureScene(); 

    // ����� ��� ���������� ��������, � ������� ������������ ��������� ����������� ����
    void UpdateTexture(TArray<FColor>* PixelData, int32 TextureWidth, int32 TextureHeight);

    //void CreateCaptureComponent();

    // ����� ��� ������������ �������� ��������, � ������� ������������ ��������� ����������� ����
    void DeleteLastCapturedTexture();

    FString FilePath;
};