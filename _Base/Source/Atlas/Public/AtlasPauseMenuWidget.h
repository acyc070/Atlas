#pragma once
#include "CoreMinimal.h"
#include "AtlasMenuWidget.h"
#include "AtlasPauseMenuWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ATLAS_API UAtlasPauseMenuWidget : public UAtlasMenuWidget {
    GENERATED_BODY()
public:
    UAtlasPauseMenuWidget();

private:
    UFUNCTION()
    void OnSetPause(bool paused);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnTogglePause(bool paused);
    
};

