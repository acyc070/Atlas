#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerDeathType.h"
#include "AtlasSettingsDeathTimeoutParams.generated.h"

class USoundMix;

USTRUCT(BlueprintType)
struct FAtlasSettingsDeathTimeoutParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerDeathType> deathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SoundMixOnDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeTime;
    
    ATLAS_API FAtlasSettingsDeathTimeoutParams();
};

