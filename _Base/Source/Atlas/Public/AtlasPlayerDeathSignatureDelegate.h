#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerDeathType.h"
#include "AtlasPlayerDeathSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerDeathSignature, TEnumAsByte<EAtlasPlayerDeathType>, deathType);

