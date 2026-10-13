#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimCarryData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimCarryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCarryTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TransitionAnimationPlaySpeed;
    
    ATLAS_API FAtlasPlayerAnimCarryData();
};

