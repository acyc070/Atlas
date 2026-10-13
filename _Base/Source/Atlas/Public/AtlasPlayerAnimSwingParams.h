#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimSwingParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimSwingParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocityContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityContributionWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAccelerationContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccelerationContributionWeight;
    
    ATLAS_API FAtlasPlayerAnimSwingParams();
};

