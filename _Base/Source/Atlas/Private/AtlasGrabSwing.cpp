#include "AtlasGrabSwing.h"

UAtlasGrabSwing::UAtlasGrabSwing(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AllowJumpOff = true;
    this->AlignWithXAxis = true;
    this->InitialVelocityRatio = 0.50f;
    this->Force = 700.00f;
    this->TurningFactor = 75.00f;
    this->DropZSpeedMax = 200.00f;
    this->JumpZSpeedMax = 600.00f;
    this->HorizontalJumpSpeedStick = 75.00f;
    this->HorizontalJumpSpeedPosition = 3.00f;
    this->HorizontalJumpSpeedMax = 100.00f;
    this->JumpReactionVelocityRatio = 0.75f;
    this->bIsMovingOnRail = false;
}


