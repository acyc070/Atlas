#pragma once
#include "CoreMinimal.h"
#include "AtlasComplianceLayer.h"
#include "AtlasSageComplianceLayer.generated.h"

class UAtlasMenuWidget;

UCLASS(Blueprintable)
class ATLAS_API UAtlasSageComplianceLayer : public UAtlasComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* ControllerConnectionWidgetInstance;
    
public:
    UAtlasSageComplianceLayer();

private:
    UFUNCTION()
    void MenuManagerPoppedWidget(UAtlasMenuWidget* Menu);
    
};

