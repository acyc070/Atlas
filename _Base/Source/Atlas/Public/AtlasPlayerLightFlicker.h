#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerLightFlicker.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerLightFlicker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlickerFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    ATLAS_API FAtlasPlayerLightFlicker();
};

