#pragma once
#include "CoreMinimal.h"
#include "Engine/Scene.h"
#include "AtlasPlayerLighterSettings.h"
#include "AtlasRoomVolumeBase.h"
#include "AtlasRoomVolumeFogSettings.h"
#include "AtlasRoomVolumeOverrideSettings.h"
#include "AtlasSeawaveSettings.h"
#include "AtlasFancyRoomVolume.generated.h"

class UPostProcessComponent;

UCLASS(Blueprintable)
class AAtlasFancyRoomVolume : public AAtlasRoomVolumeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumeFogSettings FogSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSeawaveSettings SeawaveSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PPSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerLighterSettings PlayerLighterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumeOverrideSettings CameraOverrides;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PPComponent;
    
public:
    AAtlasFancyRoomVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OverrideAutoExposureBias(float NewBias);
    
};

