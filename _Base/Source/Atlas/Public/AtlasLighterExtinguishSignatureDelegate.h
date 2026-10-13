#pragma once
#include "CoreMinimal.h"
#include "ELighterExtinguishType.h"
#include "AtlasLighterExtinguishSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasLighterExtinguishSignature, TEnumAsByte<ELighterExtinguishType>, ExtinguishType);

