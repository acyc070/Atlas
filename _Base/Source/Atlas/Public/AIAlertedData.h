#pragma once
#include "CoreMinimal.h"
#include "AIAlertedData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAIAlertedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiBounceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiBounceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumTime;
    
    FAIAlertedData();
};

