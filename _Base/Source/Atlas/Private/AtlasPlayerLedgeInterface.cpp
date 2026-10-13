#include "AtlasPlayerLedgeInterface.h"

UAtlasPlayerLedgeInterface::UAtlasPlayerLedgeInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxLedgeAngleFromHorizontal = 45.00f;
    this->MaxDistToLedgeStandGrab = 25.00f;
    this->MaxDistToLedgeFallGrab = 50.00f;
    this->MaxDistToLedgeFromDraggable = 50.00f;
    this->GrabPointSearchDistance = 40.00f;
    this->MaxAngleToClimbUp = 45.00f;
    this->MinInputSizeToClimbUp = 0.25f;
    this->TimeBeforeClimbAllowed = 0.30f;
    this->MinHeightForLedgeHang = 130.00f;
    this->MaxStepUpControlAngle = 35.00f;
    this->FreeHangImpactMinSpeed = 200.00f;
    this->JumpingMinTime = 0.10f;
    this->AerialPassiveMinSpeed = 30.00f;
    this->AerialPassiveMaxVelocityAngle = 80.00f;
    this->AerialPassiveMaxInputAngle = 80.00f;
    this->IKOffsetHands = 15.00f;
    this->IKOffsetFeet = 7.50f;
    this->IKFixupStrengthTranslation = 20.00f;
    this->IKFixupStrengthYaw = 30.00f;
    this->ImpactMomentumDecay = 10.00f;
    this->ImpactNormalVelocityScale = 0.40f;
    this->FallVelocityScale = 0.30f;
    this->ClimbBlockTestForwardDisplacement = 20.00f;
    this->ClimbBlockTestCapsuleRadius = 15.00f;
    this->ClimbBlockTestFloorMargin = 10.00f;
    this->ClimbBlockTestCeilingMargin = 5.00f;
    this->FreeHangTestForwardDisplacement = 0.00f;
    this->FreeHangTestVerticalDisplacement = -60.00f;
    this->FreeHangTestCapsuleRadius = 15.00f;
    this->FreeHangTestCapsuleHalfHeight = 30.00f;
    this->LedgeComponent = NULL;
}

void UAtlasPlayerLedgeInterface::NotifyClimbAnimationCompleted(const FName& NotifyName) {
}


