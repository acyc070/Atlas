#include "AtlasPlayerSpawnHandlerComponent.h"

UAtlasPlayerSpawnHandlerComponent::UAtlasPlayerSpawnHandlerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StandSpawnControlsDelay = 0.50f;
    this->AnimationOverrideSpawnDelay = -0.10f;
    this->playerPawn = NULL;
}

void UAtlasPlayerSpawnHandlerComponent::UnlockStandingSpawn() {
}

void UAtlasPlayerSpawnHandlerComponent::TriggerAnimationOverride() {
}

bool UAtlasPlayerSpawnHandlerComponent::IsNightmareRespawn() const {
    return false;
}


