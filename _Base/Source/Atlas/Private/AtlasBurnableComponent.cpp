#include "AtlasBurnableComponent.h"

UAtlasBurnableComponent::UAtlasBurnableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->TimeToLight = 0.80f;
    this->bIsLit = false;
    this->bEnableAutomaticState = true;
}

void UAtlasBurnableComponent::SetState(bool NewIsLit, bool broadcastEvent) {
}

bool UAtlasBurnableComponent::IsLit() const {
    return false;
}

bool UAtlasBurnableComponent::IsBeingLit() const {
    return false;
}

float UAtlasBurnableComponent::GetLightingProgress() const {
    return 0.0f;
}


