#pragma once
#include "CoreMinimal.h"
#include "OnAtlasMenuButtonLostFocusDelegate.generated.h"

class UAtlasMenuButton;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAtlasMenuButtonLostFocus, UAtlasMenuButton*, Button);

