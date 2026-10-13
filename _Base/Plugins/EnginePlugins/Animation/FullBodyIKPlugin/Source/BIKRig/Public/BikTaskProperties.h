#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BikTaskProperties.generated.h"

USTRUCT(BlueprintType)
struct FBikTaskProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RotateWeight;
    
    BIKRIG_API FBikTaskProperties();
};

