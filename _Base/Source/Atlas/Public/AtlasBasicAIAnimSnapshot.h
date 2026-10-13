#pragma once
#include "CoreMinimal.h"
#include "AtlasBasicAIAnimSnapshot.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasBasicAIAnimSnapshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WantedDirectionInLocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedPercentage;
    
    FAtlasBasicAIAnimSnapshot();
};

