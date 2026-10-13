#include "AtlasExternalBlendCameraComponent.h"

UAtlasExternalBlendCameraComponent::UAtlasExternalBlendCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InnerCamera = NULL;
    this->OuterCamera = NULL;
}


