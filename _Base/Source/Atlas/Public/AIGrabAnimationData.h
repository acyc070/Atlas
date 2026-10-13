#pragma once
#include "CoreMinimal.h"
#include "AINotifyAnimationData.h"
#include "AIGrabAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ATLAS_API FAIGrabAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimationToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAINotifyAnimationData> GrabNotifyData;
    
    FAIGrabAnimationData();
};

