#include "AtlasPlayerDragInterface.h"

UAtlasPlayerDragInterface::UAtlasPlayerDragInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSidewaysAdjustOnGrab = 45.00f;
    this->MaxPositionErrorForAnimateGrab = 25.00f;
    this->MaxGrabHelperAngleFromTest = 60.00f;
    this->MinGrabHelperAngleFromVertical = 30.00f;
    this->MinInputLength = 0.30f;
    this->MinLinearSpeedChange = 1.00f;
    this->MinAngularSpeedChange = 2.00f;
    this->NoInputForceMultiplier = 0.50f;
    this->NoInputTorqueMultiplier = 0.50f;
    this->FloorCheckSphereRadius = 5.00f;
    this->MaxAutoPushAngleStart = 25.00f;
    this->MaxAutoPushAngleStartFromGrab = 40.00f;
    this->MaxAutoPushAngle = 50.00f;
    this->HitDetectionAccelerationThreshold = 6500.00f;
    this->HitDetectionVelocitySmoothingTime = 0.20f;
    this->MaximumDragOffLedgeTime = 0.20f;
    this->DragOffLedgeRotationFactor = 0.20f;
    this->MinReleaseAngleForWalkStart = 115.00f;
    this->MaxPlayerOffsetFromTarget = 60.00f;
    this->DragComponent = NULL;
    this->DoorComponent = NULL;
    this->GrabHelper = NULL;
}

bool UAtlasPlayerDragInterface::WantsEffortAudio() const {
    return false;
}

void UAtlasPlayerDragInterface::OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode) {
}

void UAtlasPlayerDragInterface::NotifyExitDragInitState(const FName& NotifyName) {
}


