#pragma once
#include "CoreMinimal.h"
#include "AtlasNomeRandomIdleAnimData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasNomeRandomIdleAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RandomIdle;
    
    ATLAS_API FAtlasNomeRandomIdleAnimData();
};

