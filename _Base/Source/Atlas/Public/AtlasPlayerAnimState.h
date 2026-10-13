#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrabbableType.h"
#include "EAtlasPlayerGrabPhase.h"
#include "EAtlasStaminaState.h"
#include "ETarMovementMode.h"
#include "AtlasPlayerAnimState.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETarMovementMode> movementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasGrabbableType> GrabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerGrabPhase> GrabPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasStaminaState> StaminaState;
    
    ATLAS_API FAtlasPlayerAnimState();
};

