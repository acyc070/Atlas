#pragma once
#include "CoreMinimal.h"
#include "AtlasBasicAIAnimMovementParams.generated.h"

class UBlendSpace;
class UBlendSpace1D;

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasBasicAIAnimMovementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* IdleBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* MoveBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* TurnOnSpotBlendSpace;
    
    FAtlasBasicAIAnimMovementParams();
};

