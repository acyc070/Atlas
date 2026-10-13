#pragma once
#include "CoreMinimal.h"
#include "AtlasRoomVolumeBase.h"
#include "CameraBlendPlaneInfo.h"
#include "ECameraBlendPlane.h"
#include "AtlasPositionBlendRoomVolume.generated.h"

class UPostProcessComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasPositionBlendRoomVolume : public AAtlasRoomVolumeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasRoomVolumeBase* SourceVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasRoomVolumeBase* TargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraBlendPlane Plane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PPComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PilferTag;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowPilfer;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseCameraPositionForBlending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraBlendPlaneInfo BlendPlane;
    
    AAtlasPositionBlendRoomVolume(const FObjectInitializer& ObjectInitializer);

};

