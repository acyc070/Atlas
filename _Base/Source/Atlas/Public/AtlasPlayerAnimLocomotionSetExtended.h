#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimLocomotionSet.h"
#include "AtlasPlayerAnimLocomotionSetExtended.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLocomotionSetExtended : public FAtlasPlayerAnimLocomotionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StandCarryLayeredPose;
    
    ATLAS_API FAtlasPlayerAnimLocomotionSetExtended();
};

