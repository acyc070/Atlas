#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlasLedgeClimbParamsBase.h"
#include "AtlasLedgeClimbParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasLedgeClimbParams : public FAtlasLedgeClimbParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval LedgeHeightRange;
    
    ATLAS_API FAtlasLedgeClimbParams();
};

