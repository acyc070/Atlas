#pragma once
#include "CoreMinimal.h"
#include "ESavingEvent.h"
#include "StateProcessingEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStateProcessingEvent, ESavingEvent, SavingEvent);

