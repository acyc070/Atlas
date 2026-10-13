#pragma once
#include "CoreMinimal.h"
#include "OnAtlasMenuButtonGainedFocusDelegate.generated.h"

class UAtlasMenuButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAtlasMenuButtonGainedFocus, UAtlasMenuButton*, Button);

