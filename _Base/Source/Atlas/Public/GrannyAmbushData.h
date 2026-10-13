#pragma once
#include "CoreMinimal.h"
#include "GrannyAmbushData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannyAmbushData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InWaterTime;
    
    FGrannyAmbushData();
};

