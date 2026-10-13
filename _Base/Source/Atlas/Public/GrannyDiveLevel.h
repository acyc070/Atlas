#pragma once
#include "CoreMinimal.h"
#include "GrannyDiveLevel.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannyDiveLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    FGrannyDiveLevel();
};

