#include "AtlasBlendCameraComponent.h"

UAtlasBlendCameraComponent::UAtlasBlendCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerCamera = NULL;
    this->OuterCamera = NULL;
}


