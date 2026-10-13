#pragma once
#include "CoreMinimal.h"
#include "EAtlasOptimizationBoundsCheckMode.h"
#include "AtlasOptimizationDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasOptimizationDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasOptimizationBoundsCheckMode DistanceCheckMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableOptimizationVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintOptimizationVolumeStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintActorStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowOptimizationVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintArrayOfVolumesChangingState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbOfFrameBeforeOptimizationKicksIn;
    
    ATLAS_API FAtlasOptimizationDebugParams();
};

