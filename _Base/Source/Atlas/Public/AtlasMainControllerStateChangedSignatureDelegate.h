#pragma once
#include "CoreMinimal.h"
#include "EAtlasMainControllerState.h"
#include "AtlasMainControllerStateChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasMainControllerStateChangedSignature, EAtlasMainControllerState, State);

