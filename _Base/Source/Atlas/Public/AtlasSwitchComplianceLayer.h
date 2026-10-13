#pragma once
#include "CoreMinimal.h"
#include "AtlasComplianceLayer.h"
#include "AtlasSwitchComplianceLayer.generated.h"

class UAtlasMenuWidget;

UCLASS(Blueprintable)
class ATLAS_API UAtlasSwitchComplianceLayer : public UAtlasComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* ControllerConnectionWidgetInstance;
    
public:
    UAtlasSwitchComplianceLayer();

private:
    UFUNCTION()
    void MenuManagerPoppedWidget(UAtlasMenuWidget* Menu);
    
};

