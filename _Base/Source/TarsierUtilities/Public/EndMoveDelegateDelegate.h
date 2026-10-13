#pragma once
#include "CoreMinimal.h"
#include "EndMoveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEndMoveDelegate, int32, CurrentIndex);

