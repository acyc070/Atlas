#include "AtlasPointOfInterestComponent.h"

UAtlasPointOfInterestComponent::UAtlasPointOfInterestComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Enabled = true;
    this->Radius = 500.00f;
    this->IsTargetForThrow = false;
    this->IsCameraTarget = false;
    this->PullStrength = 0.30f;
    this->PullPriority = 0;
    this->PullAngleStart = 15.00f;
    this->PullAngleExponent = 2.00f;
    this->PullAngleMaxStrength = 0.30f;
}


