#include "AtlasDollyCameraComponent.h"

UAtlasDollyCameraComponent::UAtlasDollyCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Order = 1;
    this->Distance = 1000.00f;
    this->Volume = NULL;
    this->MapToActiveVolume = true;
}


