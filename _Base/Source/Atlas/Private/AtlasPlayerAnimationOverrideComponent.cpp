#include "AtlasPlayerAnimationOverrideComponent.h"

UAtlasPlayerAnimationOverrideComponent::UAtlasPlayerAnimationOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->playerPawn = NULL;
    this->SprintIntoWallLeft = NULL;
    this->SprintIntoWallRight = NULL;
    this->SprintIntoWallLowLeft = NULL;
    this->SprintIntoWallLowRight = NULL;
    this->DizzyAnimationDefault = NULL;
    this->PetrifyInitialAnimation = NULL;
    this->ElectricityGrabKnockBackAnimation = NULL;
    this->ShoePitJumpFailControlAngleThreshold = 45.00f;
    this->ShoePitJumpFailAnim = NULL;
    this->ShoePitJumpFailStandAnim = NULL;
    this->MakeNoiseAnimationStand = NULL;
    this->MakeNoiseAnimationCrouch = NULL;
    this->MakeNoiseCrouchAmountThreshold = 0.50f;
}

bool UAtlasPlayerAnimationOverrideComponent::WantsToPlayAnimation() const {
    return false;
}

void UAtlasPlayerAnimationOverrideComponent::RemoveIdleAnimationSetOverride(UObject* Owner) {
}

void UAtlasPlayerAnimationOverrideComponent::PlayAnimation(FAtlasPlayerAnimOverrideParams OverrideParams) {
}

void UAtlasPlayerAnimationOverrideComponent::OverrideIdleAnimationSet(UObject* Owner, UAtlasPlayerIdleAnimations* Animations) {
}

void UAtlasPlayerAnimationOverrideComponent::OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode) {
}

void UAtlasPlayerAnimationOverrideComponent::OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult) {
}

void UAtlasPlayerAnimationOverrideComponent::OnExitState(const FName& NotifyName) {
}

void UAtlasPlayerAnimationOverrideComponent::OnEnterState(const FName& NotifyName) {
}

bool UAtlasPlayerAnimationOverrideComponent::IsPlayingAnimation() const {
    return false;
}

void UAtlasPlayerAnimationOverrideComponent::CancelAnimation() {
}


