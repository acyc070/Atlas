#pragma once
#include "CoreMinimal.h"
#include "IgnorePlayerPositionData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FIgnorePlayerPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FIgnorePlayerPositionData();
};

