#pragma once
#include "CoreMinimal.h"
#include "AtlasMenuWidget.h"
#include "AtlasMaskSelectorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasMaskSelectorWidget : public UAtlasMenuWidget {
    GENERATED_BODY()
public:
    UAtlasMaskSelectorWidget();

    UFUNCTION(BlueprintCallable)
    void SetPlayerMaskToUse(FName PlayerMaskId);
    
    UFUNCTION(BlueprintCallable)
    FName GetSelectedPlayerMask();
    
};

