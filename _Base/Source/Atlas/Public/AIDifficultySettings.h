#pragma once
#include "CoreMinimal.h"
#include "AIDifficultySettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAIDifficultySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalHearingModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalVisionModifier;
    
    FAIDifficultySettings();
};

