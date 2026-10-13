#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerLedgeBeginClimbSignatureDelegate.generated.h"

class UAnimSequenceBase;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerLedgeBeginClimbSignature, UAnimSequenceBase*, anim);

