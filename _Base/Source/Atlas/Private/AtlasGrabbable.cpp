#include "AtlasGrabbable.h"

UAtlasGrabbable::UAtlasGrabbable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bEnabled = true;
    this->DefaultGrabMaterial = EAtlasGrabHelperMaterial::None;
    this->bGrabWhenSubmerged = true;
    this->bAllowLedgeHanging = true;
    this->PhysicsComponent = NULL;
    this->BodySetup = NULL;
    this->bOverrideGrabPriority = false;
    this->GrabPriorityOverride = 0;
    this->JumpAlignPriority = 1;
    this->bIsElectrified = false;
}

void UAtlasGrabbable::SetElectrifyEnabled(bool Enabled) {
}

bool UAtlasGrabbable::IsGrabbed() const {
    return false;
}

bool UAtlasGrabbable::IsElectrified() const {
    return false;
}

TEnumAsByte<EAtlasGrabbableType> UAtlasGrabbable::GetGrabbableType() const {
    return ATLAS_GRAB_TYPE_NONE;
}

bool UAtlasGrabbable::CanEverBeElectrified() const {
    return false;
}


