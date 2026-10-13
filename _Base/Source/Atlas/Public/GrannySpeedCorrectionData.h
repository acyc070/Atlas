#pragma once
#include "CoreMinimal.h"
#include "GrannySpeedCorrectionData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannySpeedCorrectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackIgnoreAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptedError;
    
    FGrannySpeedCorrectionData();
};

