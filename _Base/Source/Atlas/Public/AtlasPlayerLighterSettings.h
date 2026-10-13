#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerLightSourceSettings.h"
#include "AtlasPlayerLighterSettings.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerLighterSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerLightSourceSettings LightSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerLightSourceSettings AmbientLightSource;
    
    ATLAS_API FAtlasPlayerLighterSettings();
};

