#pragma once
#include "CoreMinimal.h"
#include "AtlasFlashlightSensorDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasFlashlightSensorDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawLineTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawLitActorBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintLitActor;
    
    ATLAS_API FAtlasFlashlightSensorDebugParams();
};

