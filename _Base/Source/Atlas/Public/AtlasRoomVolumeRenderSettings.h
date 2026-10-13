#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "AtlasRoomVolumeFogSettings.h"
#include "AtlasRoomVolumeRenderSettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasRoomVolumeRenderSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreviewFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumeFogSettings FogSettings;
    
    FAtlasRoomVolumeRenderSettings();
};

