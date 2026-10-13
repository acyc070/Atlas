#pragma once
#include "CoreMinimal.h"
#include "AtlasSeaWaveDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasSeaWaveDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisablePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawPhysicsForces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableCamera;
    
    ATLAS_API FAtlasSeaWaveDebugParams();
};

