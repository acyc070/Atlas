#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimLandingSet.generated.h"

class UBlendSpace;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLandingSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace* Crouch;
    
    ATLAS_API FAtlasPlayerAnimLandingSet();
};

