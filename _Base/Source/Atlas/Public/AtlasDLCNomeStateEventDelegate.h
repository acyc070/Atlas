#pragma once
#include "CoreMinimal.h"
#include "EAtlasDLCNomeState.h"
#include "AtlasDLCNomeStateEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasDLCNomeStateEvent, EAtlasDLCNomeState, OldState, EAtlasDLCNomeState, NewState);

