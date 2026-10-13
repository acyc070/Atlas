#pragma once
#include "CoreMinimal.h"
#include "EAtlasInputType.h"
#include "AtlasOnInputTypeChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasOnInputTypeChanged, EAtlasInputType, NewInputType);

