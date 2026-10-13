#pragma once
#include "CoreMinimal.h"
#include "TarJumpParams.h"
#include "TarJumpCurrentJumpData.generated.h"

USTRUCT(BlueprintType)
struct FTarJumpCurrentJumpData : public FTarJumpParams {
    GENERATED_BODY()
public:
    ATLAS_API FTarJumpCurrentJumpData();
};

