#pragma once
#include "CoreMinimal.h"
#include "AtlasComplianceLayer.h"
#include "AtlasXSXComplianceLayer.generated.h"

class AAtlasPlayer;
class UAtlasMenuWidget;

UCLASS(Blueprintable)
class ATLAS_API UAtlasXSXComplianceLayer : public UAtlasComplianceLayer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* ControllerConnectionWidgetInstance;
    
public:
    UAtlasXSXComplianceLayer();

protected:
    UFUNCTION()
    void TickHeroStats();
    
    UFUNCTION()
    void OnPlayerSpawned(AAtlasPlayer* Pawn);
    
private:
    UFUNCTION()
    void MenuManagerPoppedWidget(UAtlasMenuWidget* Menu);
    
};

