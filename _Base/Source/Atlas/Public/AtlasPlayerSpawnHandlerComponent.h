#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasNightmareSpawnConfig.h"
#include "AtlasNightmareSpawnRules.h"
#include "AtlasPlayerSpawnHandlerComponent.generated.h"

class AAtlasPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerSpawnHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasNightmareSpawnRules DefaultNightmareSpawnRules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasNightmareSpawnConfig> NightmareSpawnConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandSpawnControlsDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimationOverrideSpawnDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
public:
    UAtlasPlayerSpawnHandlerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void UnlockStandingSpawn();
    
    UFUNCTION()
    void TriggerAnimationOverride();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsNightmareRespawn() const;
    
};

