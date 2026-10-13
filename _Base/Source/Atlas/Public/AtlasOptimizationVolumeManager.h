#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasOptimizationVolumeManager.generated.h"

class AActor;
class AAtlasOptimizationVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasOptimizationVolumeManager : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasOptimizationVolumeManager(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnActorTickChanged(AActor* ChangedActor, bool bEnabled);
    
public:
    UFUNCTION()
    void AddOptimizationVolume(AAtlasOptimizationVolume* AVolume);
    
};

