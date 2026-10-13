#pragma once
#include "CoreMinimal.h"
#include "GrannyScriptData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannyScriptData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinPositioningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAnimationStartDelay;
    
    FGrannyScriptData();
};

