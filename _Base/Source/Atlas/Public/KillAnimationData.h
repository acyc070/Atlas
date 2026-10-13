#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAIDeathStateData.h"
#include "KillAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ATLAS_API FKillAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAIDeathStateData PlayerAnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AIAnimation;
    
    FKillAnimationData();
};

