#pragma once
#include "CoreMinimal.h"
#include "StateBlockHandlerDelegate.generated.h"

class UAtlasStateBlock;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateBlockHandler, UAtlasStateBlock*, State);

