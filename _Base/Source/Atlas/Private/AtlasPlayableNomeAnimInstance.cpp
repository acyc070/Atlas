#include "AtlasPlayableNomeAnimInstance.h"

UAtlasPlayableNomeAnimInstance::UAtlasPlayableNomeAnimInstance() {
    this->SleepAnimation = NULL;
    this->WakeUpAnimation = NULL;
    this->PressOnWallsBlendInSpeed = 5.00f;
    this->PressOnWallsBlendOutSpeed = 3.00f;
    this->NumAnimOverrideBanks = 2;
    this->CurrentOverrideDataIndex = 0;
}

bool UAtlasPlayableNomeAnimInstance::ShouldWakeUp() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::ShouldLeanOut() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::ShouldExitAnimOverride() {
    return false;
}

void UAtlasPlayableNomeAnimInstance::OnNotifyFinishedAnimOverride(const FName& NotifyName) {
}

bool UAtlasPlayableNomeAnimInstance::IsSleeping() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsPressingAgainstWall() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsOverrideAnimValid() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsOverrideAnimPlaying() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsOverrideAnimMontageFinished() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsOverrideAnimMontage() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsOverrideAnimBlendSpace() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsMovementMode(TEnumAsByte<EMovementMode> Mode) const {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsIdle() {
    return false;
}

bool UAtlasPlayableNomeAnimInstance::IsCrouching() {
    return false;
}

float UAtlasPlayableNomeAnimInstance::GetWallPressAngle() {
    return 0.0f;
}

float UAtlasPlayableNomeAnimInstance::GetLocomotionVelocity() {
    return 0.0f;
}

float UAtlasPlayableNomeAnimInstance::GetCrouchAmount() {
    return 0.0f;
}


