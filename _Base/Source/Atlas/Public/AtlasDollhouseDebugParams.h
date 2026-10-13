#pragma once
#include "CoreMinimal.h"
#include "AtlasDollhouseDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasDollhouseDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UnlockAllLevels;
    
    ATLAS_API FAtlasDollhouseDebugParams();
};

