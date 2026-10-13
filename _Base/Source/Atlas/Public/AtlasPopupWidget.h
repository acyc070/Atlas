#pragma once
#include "CoreMinimal.h"
#include "AtlasMenuWidget.h"
#include "AtlasPopupWidgetButtonClickedAnswer.h"
#include "OnAtlasPopupWidgetButtonClickedDelegate.h"
#include "AtlasPopupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasPopupWidget : public UAtlasMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAtlasPopupWidgetButtonClicked OnPopupWidgetButtonClickedEvent;
    
    UAtlasPopupWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnPopupWidgetButtonClicked(AtlasPopupWidgetButtonClickedAnswer Answer);
    
};

