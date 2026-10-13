#pragma once
#include "CoreMinimal.h"
#include "TarMovementParams.h"
#include "AtlasHungerMovementParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasHungerMovementParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams Stand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams Crouch;
    
    ATLAS_API FAtlasHungerMovementParams();
};

