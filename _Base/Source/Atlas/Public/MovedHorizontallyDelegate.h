#pragma once
#include "CoreMinimal.h"
#include "MovedHorizontallyDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMovedHorizontally, float, Value);

