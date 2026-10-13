#pragma once
#include "CoreMinimal.h"
#include "AtlasBasicAIInjectedAnimationData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasBasicAIInjectedAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayInjectedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EnterAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopingAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExitAnim;
    
    FAtlasBasicAIInjectedAnimationData();
};

