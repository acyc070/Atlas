#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimIdleGrabReactionData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimIdleGrabReactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GrabReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* GrabHoldLoop;
    
    ATLAS_API FAtlasPlayerAnimIdleGrabReactionData();
};

