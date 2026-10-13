#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstanceProxy.h"
#include "BikRTAnimInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FBikRTAnimInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    BIKRIG_API FBikRTAnimInstanceProxy();
};

