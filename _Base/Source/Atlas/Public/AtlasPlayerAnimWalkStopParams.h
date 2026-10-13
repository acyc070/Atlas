#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimWalkStopParams.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimWalkStopParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CycleStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    ATLAS_API FAtlasPlayerAnimWalkStopParams();
};

