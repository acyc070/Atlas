#include "AtlasPlayerSqueezeGapComponent.h"

UAtlasPlayerSqueezeGapComponent::UAtlasPlayerSqueezeGapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaximumSidewaysError = 30.00f;
    this->MaximumMovementInputAngle = 50.00f;
    this->SidewaysAdjustmentStrength = 3.50f;
    this->DefaultCrouchAnimation = NULL;
    this->DefaultStandAnimation = NULL;
    this->playerPawn = NULL;
    this->SqueezeGap = NULL;
}

void UAtlasPlayerSqueezeGapComponent::OnTransitionComplete(const FName& notifiyName) {
}


