#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerMoveModTypes.h"
#include "AtlasPlayerAnimMovementModifierIdlesMap.generated.h"

class UAtlasPlayerIdleAnimations;

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimMovementModifierIdlesMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPlayerMoveModTypes Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasPlayerIdleAnimations* Animations;
    
    ATLAS_API FAtlasPlayerAnimMovementModifierIdlesMap();
};

