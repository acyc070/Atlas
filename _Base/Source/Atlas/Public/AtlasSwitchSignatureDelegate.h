#pragma once
#include "CoreMinimal.h"
#include "ESwitchPlayDirection.h"
#include "AtlasSwitchSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasSwitchSignature, ESwitchPlayDirection, PlayDirection);

