#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAtlasPlayerDeathType.h"
#include "AtlasTitleScreen.generated.h"

class AAtlasPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasTitleScreen : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasTitleScreen(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void RestartTimer();
    
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* Player);
    
    UFUNCTION()
    void OnPlayerDeath(TEnumAsByte<EAtlasPlayerDeathType> deathType);
    
};

