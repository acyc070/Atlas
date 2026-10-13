#pragma once
#include "CoreMinimal.h"
#include "AtlasHideawayAnimationSet.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasHideawayAnimationSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ClosedEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OpenEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Hidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Exit;
    
    ATLAS_API FAtlasHideawayAnimationSet();
};

