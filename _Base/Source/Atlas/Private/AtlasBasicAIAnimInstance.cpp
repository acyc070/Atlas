#include "AtlasBasicAIAnimInstance.h"

UAtlasBasicAIAnimInstance::UAtlasBasicAIAnimInstance() {
    this->RootMotionMode = ERootMotionMode::RootMotionFromEverything;
    this->SpeedPercentage = 0.00f;
    this->WantedDirectionInLocalSpace = 0.00f;
    this->bAbortInjectedAnimation = false;
    this->SmoothedSpeedPercentage = 0.00f;
    this->CharacterReference = NULL;
    this->AngleTowardsPlayer_Yaw = 0.00f;
    this->AngleTowardsPlayer_Pitch = 0.00f;
    this->BlendMovementParams = 0.00f;
    this->OneShotAnimation = NULL;
}

void UAtlasBasicAIAnimInstance::RotateTowardsLocation(const FVector& aFocusedLocation) {
}

void UAtlasBasicAIAnimInstance::RotateTowardsDirection(const FVector& aDirection) {
}

void UAtlasBasicAIAnimInstance::ResetOneShotAnimation() {
}

void UAtlasBasicAIAnimInstance::PlayOneShot(UAnimSequence* AnimationToPlayOnce) {
}

void UAtlasBasicAIAnimInstance::OnAnimNotify(const FName& aNotify) {
}

void UAtlasBasicAIAnimInstance::InjectAnimation(const FAtlasBasicAIInjectedAnimationData& InjectedAnimationData) {
}

bool UAtlasBasicAIAnimInstance::GetOneShotAnimation(UAnimSequence*& AnimationToPlayOnce, float& PlaybackTime) const {
    return false;
}

void UAtlasBasicAIAnimInstance::AbortInjectedAnimation() {
}


