#pragma once
#include "CoreMinimal.h"
#include "AtlasMovementModiferParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasMovementModiferParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurningRate;
    
    ATLAS_API FAtlasMovementModiferParams();
};

