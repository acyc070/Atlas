#include "AtlasCollectibleAnimInstance.h"

UAtlasCollectibleAnimInstance::UAtlasCollectibleAnimInstance() {
    this->PlayerGrabPhase = ATLAS_GRAB_INTERFACE_INACTIVE;
    this->PlayerCarryTransitionType = EAtlasPlayerCarryTransitionType::None;
    this->bIsAttached = false;
    this->PlayerPickUpEatAnimation = NULL;
    this->CarryableComponent = NULL;
    this->playerPawn = NULL;
}

void UAtlasCollectibleAnimInstance::OnGrabStart() {
}

void UAtlasCollectibleAnimInstance::OnGrabEnd() {
}


