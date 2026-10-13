#pragma once
#include "CoreMinimal.h"
#include "AtlasCameraVolume.h"
#include "AtlasExternalBlendCameraVolume.generated.h"

class UAtlasExternalBlendCameraComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasExternalBlendCameraVolume : public AAtlasCameraVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasExternalBlendCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasCameraVolume* FromVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasCameraVolume* ToVolume;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPilfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialWeight;
    
    AAtlasExternalBlendCameraVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBlendWeight(float Weight);
    
};

