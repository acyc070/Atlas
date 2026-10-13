#pragma once
#include "CoreMinimal.h"
#include "TarCharacterLocationTargetParams.generated.h"

USTRUCT(BlueprintType)
struct FTarCharacterLocationTargetParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxError;
    
    ATLAS_API FTarCharacterLocationTargetParams();
};

