#include "AtlasPlayerAIAwarenessComponent.h"

UAtlasPlayerAIAwarenessComponent::UAtlasPlayerAIAwarenessComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->playerPawn = NULL;
}

EAtlasAIInterest UAtlasPlayerAIAwarenessComponent::GetMaximumHostileAIInterest() const {
    return EAtlasAIInterest::Neutral;
}

float UAtlasPlayerAIAwarenessComponent::GetDistanceToClosestHostileAI() const {
    return 0.0f;
}


