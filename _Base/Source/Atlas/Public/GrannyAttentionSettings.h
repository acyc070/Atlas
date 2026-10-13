#pragma once
#include "CoreMinimal.h"
#include "GrannyAttentionSettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannyAttentionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingIncrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Max;
    
    FGrannyAttentionSettings();
};

