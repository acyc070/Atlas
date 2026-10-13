#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimOverrideParams.h"
#include "AtlasPlayerAnimOverridePendingEventDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerAnimOverridePendingEvent, const FAtlasPlayerAnimOverrideParams&, params);

