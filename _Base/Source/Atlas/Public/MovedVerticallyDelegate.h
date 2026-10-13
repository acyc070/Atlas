#pragma once
#include "CoreMinimal.h"
#include "MovedVerticallyDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovedVertically, float, Value);

