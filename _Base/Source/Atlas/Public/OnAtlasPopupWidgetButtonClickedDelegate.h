#pragma once
#include "CoreMinimal.h"
#include "AtlasPopupWidgetButtonClickedAnswer.h"
#include "OnAtlasPopupWidgetButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAtlasPopupWidgetButtonClicked, AtlasPopupWidgetButtonClickedAnswer, Answer);

