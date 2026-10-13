#pragma once
#include "CoreMinimal.h"
#include "AtlasAISearchBehavior.h"
#include "AtlasAIHostileSearchBehavior.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasAIHostileSearchBehavior : public UAtlasAISearchBehavior {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchRadius;
    
    UAtlasAIHostileSearchBehavior();

};

