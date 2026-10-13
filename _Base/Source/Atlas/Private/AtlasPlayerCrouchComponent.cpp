#include "AtlasPlayerCrouchComponent.h"

UAtlasPlayerCrouchComponent::UAtlasPlayerCrouchComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverlappingCustomCrouchVolume = false;
    this->CrouchCapsuleHalfHeight = 35.00f;
    this->CrouchChangeTime = 0.33f;
    this->CrouchCeilingMargin = 30.00f;
    this->MaxCeilingAngle = 30.00f;
    this->SluggishTimeAfterHeavyFall = 1.00f;
    this->SluggishTimeAfterSleeping = 1.50f;
    this->MinTimeBeforeAwake = 1.00f;
    this->SlideCapsuleHalfHeight = 22.50f;
    this->SlideInputTime = 0.07f;
    this->MinSpeedToStartSlide = 250.00f;
    this->MinSlideSpeed = 75.00f;
    this->MinSlideTime = 0.65f;
    this->MaxSlideFloorAngle = 15.00f;
    this->CrawlCapsuleHalfHeight = 22.50f;
    this->CrawlInputThreshold = 0.95f;
    this->CrawlCrouchAmountThreshold = 0.75f;
    this->MaxHungerLevelForCrouch = 2;
    this->playerPawn = NULL;
}

void UAtlasPlayerCrouchComponent::OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementSubMode) {
}

void UAtlasPlayerCrouchComponent::OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult) {
}

void UAtlasPlayerCrouchComponent::NotifyWakeUpAnimationCompleted(const FName& NotifyName) {
}

void UAtlasPlayerCrouchComponent::NotifyLandingAnimationCompleted(const FName& NotifyName) {
}

void UAtlasPlayerCrouchComponent::NotifyExitSlideAnimationCompleted(const FName& NotifyName) {
}

void UAtlasPlayerCrouchComponent::NotifyAnimationOverrideCompleted(const FName& NotifyName) {
}

bool UAtlasPlayerCrouchComponent::IsSliding() const {
    return false;
}

bool UAtlasPlayerCrouchComponent::IsSleeping() const {
    return false;
}

bool UAtlasPlayerCrouchComponent::IsInDefaultMode() const {
    return false;
}

bool UAtlasPlayerCrouchComponent::IsCrawling() const {
    return false;
}

float UAtlasPlayerCrouchComponent::GetDesiredCrouchAmount() const {
    return 0.0f;
}

FFloatInterval UAtlasPlayerCrouchComponent::GetCrouchRange() const {
    return FFloatInterval{};
}

EAtlasPlayerCrouchMode UAtlasPlayerCrouchComponent::GetCrouchMode() const {
    return EAtlasPlayerCrouchMode::Default;
}

float UAtlasPlayerCrouchComponent::GetCrouchAmount() const {
    return 0.0f;
}


