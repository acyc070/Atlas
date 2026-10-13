#pragma once
#include "CoreMinimal.h"
#include "AtlasRoomVolumePhysicsSettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasRoomVolumePhysicsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeaWaveFakeGravityEffectFactor;
    
    FAtlasRoomVolumePhysicsSettings();
};

