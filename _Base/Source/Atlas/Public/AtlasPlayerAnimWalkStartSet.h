#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimWalkStartSet.generated.h"

class UBlendSpace1D;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimWalkStartSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* StandBlendSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendSpace1D* CrouchBlendSpace;
    
    ATLAS_API FAtlasPlayerAnimWalkStartSet();
};

