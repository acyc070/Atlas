#pragma once
#include "CoreMinimal.h"
#include "BeginMoveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBeginMoveDelegate, int32, CurrentIndex);

