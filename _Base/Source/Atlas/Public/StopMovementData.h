#pragma once
#include "CoreMinimal.h"
#include "StopMovementData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FStopMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowedToSkip;
    
    FStopMovementData();
};

