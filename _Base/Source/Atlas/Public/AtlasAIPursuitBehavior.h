#pragma once
#include "CoreMinimal.h"
#include "AtlasAIBehavior.h"
#include "AtlasAIPursuitBehavior.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasAIPursuitBehavior : public UAtlasAIBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumTimeToPredict;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceToPredict;
    
    UAtlasAIPursuitBehavior();

};

