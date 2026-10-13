#pragma once
#include "CoreMinimal.h"
#include "TarInputActionKeyMapping.h"
#include "TarInputAxisKeyMapping.h"
#include "AtlasMenuWidget.h"
#include "AtlasControlsRemappingScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasControlsRemappingScreen : public UAtlasMenuWidget {
    GENERATED_BODY()
public:
    UAtlasControlsRemappingScreen();

protected:
    UFUNCTION(BlueprintCallable)
    void ResetMappingArrays();
    
public:
    UFUNCTION(BlueprintCallable)
    FTarInputAxisKeyMapping GetNextAvailableAxisMapping(const FName& AxisName, float Scale);
    
    UFUNCTION(BlueprintCallable)
    FTarInputActionKeyMapping GetNextAvailableActionMapping(const FName& ActionName);
    
};

