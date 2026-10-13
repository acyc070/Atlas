#pragma once
#include "CoreMinimal.h"
#include "EAtlasGameViewportFocus.h"
#include "AtlasGameViewportFocusChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasGameViewportFocusChanged, EAtlasGameViewportFocus, NewFocus);

