#include "AtlasFollowCameraComponent.h"

UAtlasFollowCameraComponent::UAtlasFollowCameraComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Order = 0;
    this->LerpTime = 0.00f;
    this->UseInitialRotationAsOffset = true;
}


