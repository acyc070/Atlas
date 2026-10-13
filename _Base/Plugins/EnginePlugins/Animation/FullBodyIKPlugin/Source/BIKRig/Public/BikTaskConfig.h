#pragma once
#include "CoreMinimal.h"
#include "BikTaskConfig.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct BIKRIG_API FBikTaskConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* TargetComponent;
    
    FBikTaskConfig();
};

