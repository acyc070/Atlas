#pragma once
#include "CoreMinimal.h"
#include "AtlasItemSlotPlayerParams.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasItemSlotPlayerParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* InsertionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* RemovalAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InsertionOffsetFromSlot;
    
    ATLAS_API FAtlasItemSlotPlayerParams();
};

