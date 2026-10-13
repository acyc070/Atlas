#pragma once
#include "CoreMinimal.h"
#include "EAtlasViewportState.h"
#include "AtlasOnViewportStateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasOnViewportStateChanged, EAtlasViewportState, LastState, EAtlasViewportState, NewState);

