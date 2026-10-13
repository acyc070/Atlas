#pragma once
#include "CoreMinimal.h"
#include "MoveDelegateDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMoveDelegate, float, Percentage, int32, CurrentIndex, float, CurrentSpeed);

