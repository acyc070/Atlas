#pragma once
#include "CoreMinimal.h"
#include "AtlasCameraVolume.h"
#include "EAtlasPositionBlendMode.h"
#include "ECameraBlendPlane.h"
#include "AtlasPositionBlendCameraVolume.generated.h"

class UAtlasBlendCameraComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasPositionBlendCameraVolume : public AAtlasCameraVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraBlendPlane BlendPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasCameraVolume* ToVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasCameraVolume* FromVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutomaticMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPositionBlendMode Mode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPilfer;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasBlendCameraComponent* Camera;
    
public:
    AAtlasPositionBlendCameraVolume(const FObjectInitializer& ObjectInitializer);

};

