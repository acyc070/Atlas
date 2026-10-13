#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerCarryThrowSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerCarryThrowSignature, float, Force);

