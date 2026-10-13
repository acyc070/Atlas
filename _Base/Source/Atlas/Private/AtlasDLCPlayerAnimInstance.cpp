#include "AtlasDLCPlayerAnimInstance.h"

UAtlasDLCPlayerAnimInstance::UAtlasDLCPlayerAnimInstance() {
    this->GrabLedgeSwimBlendWeight = 0.00f;
    this->NumSwimStopAnimations = 3;
    this->SwimQuickTurnAngleThreshold = 60.00f;
    this->SwimIdleSpeedTreshold = 5.00f;
    this->MaxSubmersionDepthToClimbDown = 50.00f;
    this->StandCarryCylinderPickupAnimation = NULL;
}

bool UAtlasDLCPlayerAnimInstance::ShouldStrafeQuickTurn() const {
    return false;
}

bool UAtlasDLCPlayerAnimInstance::ShouldExitSwimmingState() const {
    return false;
}

void UAtlasDLCPlayerAnimInstance::OnSwimLandingComplete(const FName& NotifyName) {
}

void UAtlasDLCPlayerAnimInstance::OnFinishedStopSwimming(const FName& NotifyName) {
}

void UAtlasDLCPlayerAnimInstance::OnExitSwimming() {
}

void UAtlasDLCPlayerAnimInstance::OnEnterSwimming() {
}

bool UAtlasDLCPlayerAnimInstance::IsSwimming() const {
    return false;
}

bool UAtlasDLCPlayerAnimInstance::IsStrafing() const {
    return false;
}

bool UAtlasDLCPlayerAnimInstance::IsInCombat() const {
    return false;
}

float UAtlasDLCPlayerAnimInstance::GetStrafeQuickTurnAngle() const {
    return 0.0f;
}

float UAtlasDLCPlayerAnimInstance::GetStrafeLookAtAngle() const {
    return 0.0f;
}


