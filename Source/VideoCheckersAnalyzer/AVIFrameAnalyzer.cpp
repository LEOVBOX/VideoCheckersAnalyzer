#include "AVIFrameAnalyzer.h"

AAVIFrameAnalyzer::AAVIFrameAnalyzer()
{
    PrimaryActorTick.bCanEverTick = true;

    // Создаем и добавляем компонент
    D3DTextureCapturerActorComponent = CreateDefaultSubobject<UD3DTextureCapturerActorComponent>(TEXT("D3DTextureCapturer"));
    if (!D3DTextureCapturerActorComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("AVerticalLineCheckerAnalyzer::AVerticalLineCheckerAnalyzer() D3DTextureCapturer failed to create"));
    }
}

void AAVIFrameAnalyzer::BeginPlay()
{
    Super::BeginPlay();



    UE_LOG(LogTemp, Warning, TEXT("AAVIFrameAnalyzer started"));

    // Указываем путь для записи результатов
    FilePath = FPaths::ProjectDir() / TEXT("FrameData.csv");

    // Создаём заголовок файла
    FFileHelper::SaveStringToFile(TEXT("FrameNumber, PrevFrameNumber, Time\n"), *FilePath);
}

void AAVIFrameAnalyzer::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    /*CaptureViewport();
    DecodeTexture(LastCapturedTexture);*/

    if (D3DTextureCapturerActorComponent->GetCapturedTexture(LastCapturedTexture) == true)
    {
        DecodeTexture(LastCapturedTexture);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("AVerticalLineCheckerAnalyzer::Tick(float DeltaTime): Fail to get Texture from D3DCapturer"));
    }

    FDateTime Now = FDateTime::Now();
    uint8 NowMS = Now.GetMillisecond();

    uint8 TickDeltaTime = NowMS - LastTickTime;

    //UE_LOG(LogTemp, Log, TEXT("TickDeltaTime: %03d\n"), TickDeltaTime);
    LastTickTime = NowMS;
}

void AAVIFrameAnalyzer::Screenshot()
{
    FDateTime Start = FDateTime::Now();
    uint8 StartMS = Start.GetMillisecond();

    if (!GEngine || !GEngine->GameViewport)
    {
        return;
    }

    FViewport* Viewport = GEngine->GameViewport->Viewport;
    if (!Viewport)
    {
        return;
    }

    // Определяем размер вьюпорта
    FIntPoint ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();

    // Создаём новую текстуру
    UTexture2D* CapturedTexture = UTexture2D::CreateTransient(ViewportSize.X, ViewportSize.Y, PF_B8G8R8A8);
    if (!CapturedTexture)
    {
        return;
    }

    DeleteLastCapturedTexture();

    // Настраиваем текстуру
    CapturedTexture->MipGenSettings = TMGS_NoMipmaps;
    CapturedTexture->CompressionSettings = TC_Default;
    CapturedTexture->SRGB = false;
    CapturedTexture->AddToRoot(); // Чтобы не удалялась сборщиком мусора

    // Копируем пиксели из рендертаргета
    TArray<FColor> PixelData;
    GetViewportScreenShot(Viewport, PixelData);
    
    //FReadSurfaceDataFlags ReadPixelFlags(RCM_UNorm);
    //Viewport->ReadPixels(PixelData, ReadPixelFlags);

    // Записываем пиксели в текстуру
    void* TextureData = CapturedTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(TextureData, PixelData.GetData(), PixelData.Num() * sizeof(FColor));
    CapturedTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
    CapturedTexture->UpdateResource();

    LastCapturedTexture = CapturedTexture;

    FDateTime End = FDateTime::Now();
    uint8 EndMS = End.GetMillisecond();

    uint8 CaptureTime = EndMS - StartMS;

    //UE_LOG(LogTemp, Log, TEXT("CaptureTime: %03d\n"), CaptureTime);
}

//void AAVIFrameAnalyzer::CaptureScene()
//{
//    if (RenderTarget == nullptr)
//    {
//        RenderTarget = NewObject<UTextureRenderTarget2D>();
//        // Устанавливаем формат текстуры в RenderTarget
//        RenderTarget->InitCustomFormat(AVISize.X, AVISize.Y, EPixelFormat::PF_B8G8R8A8, true);
//        RenderTarget->UpdateResourceImmediate();
//    }
//
//    CaptureComponent->TextureTarget = RenderTarget;
//    CaptureComponent->CaptureScene();
//
//    TArray<FColor> PixelData;
//    FTextureRenderTargetResource* RenderTartgetResource = RenderTarget->GameThread_GetRenderTargetResource();
//    if (RenderTartgetResource)
//    {
//        RenderTartgetResource->ReadPixels(PixelData);
//        if (!PixelData.IsEmpty())
//        {
//            UpdateTexture(&PixelData, RenderTarget->SizeX, RenderTarget->SizeY);
//        }
//    }
//    else
//    {
//        UE_LOG(LogTemp, Error, TEXT("AAVIFrameAnalyzer::CaptureScene NO RENDER TARGET RESOURCE"));
//    }
//
//    
//}

void AAVIFrameAnalyzer::UpdateTexture(TArray<FColor>* PixelData, int32 TextureWidth, int32 TextureHeight)
{
    // Создаём новую текстуру
    UTexture2D* CapturedTexture = UTexture2D::CreateTransient(TextureWidth, TextureHeight, PF_B8G8R8A8);
    if (!CapturedTexture)
    {
        return;
    }

    DeleteLastCapturedTexture();

    // Настраиваем текстуру
    CapturedTexture->MipGenSettings = TMGS_NoMipmaps;
    CapturedTexture->CompressionSettings = TC_Default;
    CapturedTexture->SRGB = false;
    CapturedTexture->AddToRoot(); // Чтобы не удалялась сборщиком мусора

    // Записываем пиксели в текстуру
    void* TextureData = CapturedTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(TextureData, PixelData->GetData(), PixelData->Num() * sizeof(FColor));
    CapturedTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
    CapturedTexture->UpdateResource();

    // Обновляем указатель на последнюю захваченную текстуру
    LastCapturedTexture = CapturedTexture;
}

//void AAVIFrameAnalyzer::CreateCaptureComponent()
//{
//    RenderTarget = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTarget"));
//    // Устанавливаем формат текстуры в RenderTarget
//    RenderTarget->InitCustomFormat(AVISize.X, AVISize.Y, EPixelFormat::PF_R8G8B8A8, true);
//    RenderTarget->UpdateResourceImmediate();
//    CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaputreComponent"));
//    CaptureComponent->CaptureSource = SCS_FinalColorLDR;
//    CaptureComponent->TextureTarget = RenderTarget;
//    CaptureComponent->SetupAttachment(RootComponent);
//}

void AAVIFrameAnalyzer::CaptureViewport()
{
    FDateTime Start = FDateTime::Now();
    uint8 StartMS = Start.GetMillisecond();
    if (!GEngine || !GEngine->GameViewport)
    {
        return;
    }

    // Получаем текущий рендертаргет Viewport'а
    FViewport* Viewport = GEngine->GameViewport->Viewport;
    if (!Viewport)
    {
        return;
    }

    // Определяем размер вьюпорта
    FIntPoint ViewportSize = GEngine->GameViewport->Viewport->GetSizeXY();

    // Создаём новую текстуру
    UTexture2D* CapturedTexture = UTexture2D::CreateTransient(ViewportSize.X, ViewportSize.Y, PF_B8G8R8A8);
    if (!CapturedTexture)
    {
        return;
    }

    DeleteLastCapturedTexture();

    // Настраиваем текстуру
    CapturedTexture->MipGenSettings = TMGS_NoMipmaps;
    CapturedTexture->CompressionSettings = TC_Default;
    CapturedTexture->SRGB = false;
    CapturedTexture->AddToRoot(); // Чтобы не удалялась сборщиком мусора

    // Копируем пиксели из рендертаргета
    TArray<FColor> PixelData;
    FReadSurfaceDataFlags ReadPixelFlags(RCM_UNorm);
    Viewport->ReadPixels(PixelData, ReadPixelFlags);

    // Записываем пиксели в текстуру
    void* TextureData = CapturedTexture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
    FMemory::Memcpy(TextureData, PixelData.GetData(), PixelData.Num() * sizeof(FColor));
    CapturedTexture->GetPlatformData()->Mips[0].BulkData.Unlock();
    CapturedTexture->UpdateResource();

    LastCapturedTexture = CapturedTexture;

    FDateTime End = FDateTime::Now();
    uint8 EndMS = End.GetMillisecond();

    uint8 CaptureTime = EndMS - StartMS;

    UE_LOG(LogTemp, Log, TEXT("CaptureTime: %03d\n"), CaptureTime);
}


void AAVIFrameAnalyzer::DecodeTexture(UTexture2D* CapturedTexture)
{
    if (!CapturedTexture || !CapturedTexture->GetPlatformData())
    {
        UE_LOG(LogTemp, Error, TEXT("CapturedTexture is invalid or has no platform data"));
        return;
    }

    FTexture2DMipMap& Mip = CapturedTexture->GetPlatformData()->Mips[0];
    FByteBulkData* RawImageData = &Mip.BulkData;

    if (!RawImageData)
    {
        UE_LOG(LogTemp, Error, TEXT("RawImageData is null"));
        return;
    }

    uint8* PixelData = (uint8*)RawImageData->Lock(LOCK_READ_ONLY);
    if (!PixelData)
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to lock texture data"));
        return;
    }

    const int32 Width = CapturedTexture->GetSizeX();
    const int32 Height = CapturedTexture->GetSizeY();

    if (Width != 1920 || Height != 1080)
    {
        FString Line = FString::Printf(TEXT("Captured Texture = %d x %d\n"), Width, Height);
        FFileHelper::SaveStringToFile(Line, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
        RawImageData->Unlock();
        return;
    }
    

    constexpr int32 LeftGrayWidth = 32;
    constexpr int32 RightGrayWidth = 32;
    constexpr int32 CodeBits = 12;
    constexpr int32 BlockSize = 16;

    if (Width < LeftGrayWidth + CodeBits * BlockSize + RightGrayWidth || Height < BlockSize)
    {
        UE_LOG(LogTemp, Error, TEXT("Texture size is too small for decoding"));
        RawImageData->Unlock();
        return;
    }

    auto CheckNeighbours = [&](int PixelIndex) -> bool
        {
            FColor PixelColor = *((FColor*)&PixelData[PixelIndex * sizeof(FColor)]);
            FColor RightNeighbourColor = *((FColor*)&PixelData[(PixelIndex + 1) * sizeof(FColor)]);
            FColor LeftNeighbourColor = *((FColor*)&PixelData[(PixelIndex - 1) * sizeof(FColor)]);

            if (PixelColor != RightNeighbourColor || PixelColor != LeftNeighbourColor)
            {
                return false;
            }

            return true;
        };
    
    FString DetalizedValue = "Detalized value ";

    auto DecodeBits = [&](int StartY, int BitCount, FString &DetalizedValue) -> uint32
        {
            //FString DetalizedValue = "Detalized value ";
            uint32 Value = 0;
            for (int i = 0; i < BitCount; i++)
            {
                int StartX = LeftGrayWidth + i * BlockSize;
                int PixelIndex = (StartY + BlockSize / 2) * Width + (StartX + BlockSize / 2);
                /*if (!CheckNeighbours(PixelIndex))
                {
                    DetalizedValue = "Trash. Neighbours colors not equal\n";
                    FFileHelper::SaveStringToFile(DetalizedValue, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
                }*/

                FColor Color = *((FColor*)&PixelData[PixelIndex * sizeof(FColor)]);

                if (Color.G > 128)
                {
                    Value |= (1 << i);
                    DetalizedValue += "1";
                }
                else
                {
                    DetalizedValue += "0";
                }

            }
            DetalizedValue += "\n";

            //FFileHelper::SaveStringToFile(DetalizedValue, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);

            return Value;
        };

    // Декодируем номер кадра (12 бит, младший бит слева)
    uint32 FrameNumber = DecodeBits(0, 12, DetalizedValue);

    RawImageData->Unlock();

    // Запись в файл
    //SaveDataToFile(FrameNumber);
    if (FrameNumber - PrevFrameNumber != 1) {
        
        FDateTime Now = FDateTime::Now();
        FString TimeString = Now.ToString(TEXT("%H:%M:%S")); // Формат: часы:минуты:секунды
        FString Line = FString::Printf(TEXT("%d %d %s\n"), FrameNumber, PrevFrameNumber, *TimeString);
        UE_LOG(LogTemp, Log, TEXT("Dropped frame: %s"), *Line);
        UE_LOG(LogTemp, Log, TEXT("%s"), *DetalizedValue);
        FFileHelper::SaveStringToFile(Line, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
    }

    PrevFrameNumber = FrameNumber;
    
}



void AAVIFrameAnalyzer::SaveDataToFile(int FrameNumber, int Milliseconds)
{
    FString Line = FString::Printf(TEXT("%d,%d\n"), FrameNumber, Milliseconds);
    FFileHelper::SaveStringToFile(Line, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}


void AAVIFrameAnalyzer::SaveDataToFile(int FrameNumber)
{
    FString Line = FString::Printf(TEXT("%d\n"), FrameNumber);
    FFileHelper::SaveStringToFile(Line, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), FILEWRITE_Append);
}

void AAVIFrameAnalyzer::DeleteLastCapturedTexture()
{
    if (LastCapturedTexture)
    {
        LastCapturedTexture->RemoveFromRoot();
        LastCapturedTexture->ConditionalBeginDestroy();
    }

    LastCapturedTexture = nullptr;

}