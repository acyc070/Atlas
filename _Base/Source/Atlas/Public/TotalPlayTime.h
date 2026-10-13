#pragma once
#include "CoreMinimal.h"
#include "TotalPlayTime.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FTotalPlayTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Hours;
    
    FTotalPlayTime();
};

