#pragma once
#include "CoreMinimal.h"
#include "AtlasComplianceLayer.h"
#include "AtlasPS5ComplianceLayer.generated.h"

class UAtlasMenuWidget;

UCLASS(Blueprintable)
class ATLAS_API UAtlasPS5ComplianceLayer : public UAtlasComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* ControllerConnectionWidgetInstance;
    
public:
    UAtlasPS5ComplianceLayer();

private:
    UFUNCTION()
    void MenuManagerPoppedWidget(UAtlasMenuWidget* Menu);
    
};

