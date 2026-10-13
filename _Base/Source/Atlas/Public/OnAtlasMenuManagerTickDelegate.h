#pragma once
#include "CoreMinimal.h"
#include "OnAtlasMenuManagerTickDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAtlasMenuManagerTick, float, DeltaTime);

