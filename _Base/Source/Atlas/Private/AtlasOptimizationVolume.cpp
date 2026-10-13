#include "AtlasOptimizationVolume.h"

AAtlasOptimizationVolume::AAtlasOptimizationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsActive = false;
    this->bIsPlayerInside = false;
}

void AAtlasOptimizationVolume::OnActorSpawned(AActor* SpawnedActor) {
}

void AAtlasOptimizationVolume::OnActorDestroyed(AActor* DestroyedActor) {
}


