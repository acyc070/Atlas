#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimWalkStopData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimWalkStopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayAnimation;
    
    ATLAS_API FAtlasPlayerAnimWalkStopData();
};

