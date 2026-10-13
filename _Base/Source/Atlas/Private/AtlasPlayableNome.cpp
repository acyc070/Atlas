#include "AtlasPlayableNome.h"
#include "TarAnimationListenerComponent.h"

AAtlasPlayableNome::AAtlasPlayableNome(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Tags.AddDefaulted(1);
    this->MaxWalkSpeed = 105.00f;
    this->MaxSprintSpeed = 210.00f;
    this->StandStillThreshold = 10.00f;
    this->SprintAcceleration = 3.50f;
    this->SprintDeceleration = 1.50f;
    this->WallPressThresholdAngle = 25.00f;
    this->CrouchSpeedScale = 0.50f;
    this->CrouchBlendTime = 0.40f;
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListener"));
    this->TeleportTime = 0.25f;
}

void AAtlasPlayableNome::WakeUp() {
}

void AAtlasPlayableNome::StopAnimation(bool bFinishAnimation) {
}

void AAtlasPlayableNome::StartAction(AAtlasActionWaypoint* Action) {
}

void AAtlasPlayableNome::Sleep() {
}

void AAtlasPlayableNome::PlayAnimation(UAnimationAsset* Animation, bool bLoop, FVector2D BlendSpaceInput) {
}

void AAtlasPlayableNome::OnAnimationFinished(UAnimationAsset* Animation) {
}

void AAtlasPlayableNome::NotifyFinishedWakeUp(const FName& NotifyName) {
}

void AAtlasPlayableNome::NotifyFinishedJumping(const FName& NotifyName) {
}

float AAtlasPlayableNome::GetLocomotionVelocity() const {
    return 0.0f;
}

void AAtlasPlayableNome::EndAction(bool bFinishAnimation) {
}


