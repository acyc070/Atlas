#pragma once
#include "CoreMinimal.h"
#include "AtlasComplianceLayer.h"
#include "AtlasXboxOneComplianceLayer.generated.h"

class AAtlasPlayer;
class UAtlasMenuWidget;

UCLASS(Blueprintable)
class ATLAS_API UAtlasXboxOneComplianceLayer : public UAtlasComplianceLayer {
    GENERATED_BODY()
public:
    UAtlasXboxOneComplianceLayer();

private:
    UFUNCTION()
    void TryToPopControllerConnectionLostWidget(UAtlasMenuWidget* justPoppedWidget);
    
    UFUNCTION()
    void TickHeroStats();
    
    UFUNCTION()
    void OnPlayerSpawned(AAtlasPlayer* Pawn);
    
    UFUNCTION()
    void OnMenuGotPushedAfterCheckingForContent();
    
};

