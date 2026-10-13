#pragma once
#include "CoreMinimal.h"
#include "AtlasComplianceLayer.h"
#include "AtlasPS4ComplianceLayer.generated.h"

class UAtlasMenuWidget;

UCLASS(Blueprintable)
class ATLAS_API UAtlasPS4ComplianceLayer : public UAtlasComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* ControllerConnectionWidgetInstance;
    
public:
    UAtlasPS4ComplianceLayer();

private:
    UFUNCTION()
    void MenuManagerPoppedWidget(UAtlasMenuWidget* Menu);
    
    UFUNCTION()
    void CheckRemotePlayConnection();
    
};

