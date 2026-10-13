#pragma once
#include "CoreMinimal.h"
#include "AtlasNightmareSpawnRules.generated.h"

USTRUCT(BlueprintType)
struct FAtlasNightmareSpawnRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysFirstTime;
    
    ATLAS_API FAtlasNightmareSpawnRules();
};

