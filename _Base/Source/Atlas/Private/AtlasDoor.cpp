#include "AtlasDoor.h"

UAtlasDoor::UAtlasDoor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SlopeDetectionMethod = ATLAS_DRAG_Draggable;
    this->bShouldLockWhenClosed = false;
    this->bCloseWhenOpenTowards = false;
    this->bCloseWhenOpenAway = false;
    this->bIgnoredByAI = false;
    this->ClosedAngle = 1.00f;
    this->FullyOpenAngle = 2.00f;
    this->InitialAngle = 0.00f;
    this->bIsInitiallyUnLocked = true;
    this->bCustomHandleGrabHand = false;
    this->PhysicsConstraintComponent = NULL;
    this->bEnableAutomaticState = true;
}

void UAtlasDoor::UnlockDoor() {
}

void UAtlasDoor::SetIgnoredByAI(bool ignored) {
}

void UAtlasDoor::SetDoorSimulatePhysics(bool bNewSimulate) {
}

void UAtlasDoor::SetDoorAngle(float newAngle) {
}

bool UAtlasDoor::LockDoor() {
    return false;
}

bool UAtlasDoor::IsDoorSimulatingPhysics() const {
    return false;
}

bool UAtlasDoor::IsDoorLocked() const {
    return false;
}

EBikTaskIdentifier UAtlasDoor::GetHandleGrabHand(EDoorInteractionType Interaction) const {
    return EBikTaskIdentifier::IK_TARGET_LEFT_FOOT;
}

float UAtlasDoor::GetDoorAngle() const {
    return 0.0f;
}

void UAtlasDoor::ClearDoorPhysicsVelocities() {
}


