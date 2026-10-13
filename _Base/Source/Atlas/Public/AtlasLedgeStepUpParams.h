#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlasLedgeClimbParams.h"
#include "AtlasLedgeStepUpParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasLedgeStepUpParams : public FAtlasLedgeClimbParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval StepUpSpeeds;
    
    ATLAS_API FAtlasLedgeStepUpParams();
};

