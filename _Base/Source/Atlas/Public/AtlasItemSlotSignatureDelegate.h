#pragma once
#include "CoreMinimal.h"
#include "AtlasItemSlotSignatureDelegate.generated.h"

class UAtlasCarryable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasItemSlotSignature, UAtlasCarryable*, ItemComponent);

