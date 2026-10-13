#pragma once
#include "CoreMinimal.h"
#include "EAtlasDamageType.h"
#include "AtlasDamageTypeSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasDamageTypeSignature, TEnumAsByte<EAtlasDamageType>, DamageType);

