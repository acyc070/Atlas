#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimSleepSelectionData.h"
#include "EAtlasPlayerStartInitMode.h"
#include "AtlasPlayerStartParams.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerStartParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPlayerStartInitMode InitialState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CustomAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerAnimSleepSelectionData> WakeUpAnimationOverride;
    
    ATLAS_API FAtlasPlayerStartParams();
};

