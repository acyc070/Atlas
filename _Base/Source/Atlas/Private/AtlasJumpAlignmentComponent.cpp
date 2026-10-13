#include "AtlasJumpAlignmentComponent.h"

UAtlasJumpAlignmentComponent::UAtlasJumpAlignmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->Weight = 1.00f;
    this->Angle = 60.00f;
    this->PlayerFacingAngle = 60.00f;
    this->Enabled = true;
}


