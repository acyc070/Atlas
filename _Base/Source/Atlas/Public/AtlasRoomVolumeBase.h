#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtlasRoomVolumeBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasRoomVolumeBase : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreLighterBlend: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplorationHorizontalDegreesScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExplorationVerticalDegreesScale;
    
    AAtlasRoomVolumeBase(const FObjectInitializer& ObjectInitializer);

};

