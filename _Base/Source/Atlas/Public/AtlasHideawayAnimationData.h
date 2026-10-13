#pragma once
#include "CoreMinimal.h"
#include "AtlasHideawayAnimationSet.h"
#include "EAtlasHideawayAnimationState.h"
#include "AtlasHideawayAnimationData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasHideawayAnimationData : public FAtlasHideawayAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasHideawayAnimationState State;
    
    ATLAS_API FAtlasHideawayAnimationData();
};

