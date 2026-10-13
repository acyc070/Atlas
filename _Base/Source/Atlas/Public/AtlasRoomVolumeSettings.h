#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerLighterSettings.h"
#include "AtlasRoomVolumePhysicsSettings.h"
#include "AtlasRoomVolumeRenderSettings.h"
#include "AtlasRoomVolumeSettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasRoomVolumeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerLighterSettings PlayerLighterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumeRenderSettings RenderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumePhysicsSettings PhysicsSettings;
    
    FAtlasRoomVolumeSettings();
};

