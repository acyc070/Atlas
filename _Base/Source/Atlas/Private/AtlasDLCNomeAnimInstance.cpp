#include "AtlasDLCNomeAnimInstance.h"

UAtlasDLCNomeAnimInstance::UAtlasDLCNomeAnimInstance() {
    this->NumAnimOverrideBanks = 2;
    this->CurrentOverrideDataIndex = 0;
    this->JumpAnimation = NULL;
    this->bIsWalkStartActive = false;
}

bool UAtlasDLCNomeAnimInstance::WasThrown() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::ShouldExitWalking() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::ShouldExitAnimOverride() {
    return false;
}

void UAtlasDLCNomeAnimInstance::OnWalkStartCompleted() {
}

void UAtlasDLCNomeAnimInstance::OnWalkStartBegin() {
}

void UAtlasDLCNomeAnimInstance::OnNotifyFinishedAnimOverride(const FName& NotifyName) {
}

bool UAtlasDLCNomeAnimInstance::MovementModeIs(TEnumAsByte<EMovementMode> Mode) {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsOverrideAnimValid() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsOverrideAnimPlaying() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsOverrideAnimMontageFinished() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsOverrideAnimMontage() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsOverrideAnimBlendSpace() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsMoving() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsJumping() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsCrouching() {
    return false;
}

bool UAtlasDLCNomeAnimInstance::IsCarrying() {
    return false;
}

float UAtlasDLCNomeAnimInstance::GetWalkStartAngle() {
    return 0.0f;
}

float UAtlasDLCNomeAnimInstance::GetTargetAngle() {
    return 0.0f;
}

float UAtlasDLCNomeAnimInstance::GetMaxSpeed() {
    return 0.0f;
}

float UAtlasDLCNomeAnimInstance::GetLocomotionVelocity() {
    return 0.0f;
}

bool UAtlasDLCNomeAnimInstance::CurrentStateIs(EAtlasDLCNomeState State) {
    return false;
}


