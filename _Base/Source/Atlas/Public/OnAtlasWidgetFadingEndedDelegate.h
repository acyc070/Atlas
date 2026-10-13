#pragma once
#include "CoreMinimal.h"
#include "OnAtlasWidgetFadingEndedDelegate.generated.h"

class UAtlasWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAtlasWidgetFadingEnded, UAtlasWidget*, Widget);

