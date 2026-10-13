#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimLedgeClimbData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLedgeClimbData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ClimbAnimation;
    
    ATLAS_API FAtlasPlayerAnimLedgeClimbData();
};

