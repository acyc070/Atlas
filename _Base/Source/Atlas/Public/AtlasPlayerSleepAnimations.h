#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AtlasPlayerSleepAnimations.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ATLAS_API UAtlasPlayerSleepAnimations : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* IdleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WakeUpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* NightmareWakeUpAnimation;
    
    UAtlasPlayerSleepAnimations();

};

