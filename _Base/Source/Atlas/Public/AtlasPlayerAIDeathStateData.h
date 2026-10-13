#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAIDeathStateData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerAIDeathStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    ATLAS_API FAtlasPlayerAIDeathStateData();
};

