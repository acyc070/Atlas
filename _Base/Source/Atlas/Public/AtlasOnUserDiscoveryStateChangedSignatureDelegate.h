#pragma once
#include "CoreMinimal.h"
#include "EAtlasUserDiscoveryState.h"
#include "AtlasOnUserDiscoveryStateChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasOnUserDiscoveryStateChangedSignature, EAtlasUserDiscoveryState, State);

