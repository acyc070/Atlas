#include "AtlasPlayerWalkStartComponent.h"

UAtlasPlayerWalkStartComponent::UAtlasPlayerWalkStartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TurnOnTheSpotMinTargetAngle = 80.00f;
    this->TurnOnTheSpotMinEarlyExitAngle = 30.00f;
    this->MinStaminaStateForTurnOnTheSpot = ATLAS_STAMINA_NORMAL;
    this->StaticTurnExitAngleInput = 30.00f;
    this->StaticTurnExitAngleNoInput = 2.00f;
    this->StaticTurnRotationSpeed = 400.00f;
    this->WalkStartMinimumInputThreshold = 0.75f;
    this->WalkStartMaxTimeSinceIdle = 0.10f;
    this->WalkStartObstacleTestDistance = 22.50f;
    this->MinStaminaStateForWalkStart = ATLAS_STAMINA_TIRED;
    this->NumWalkStartsForDizziness = 5;
    this->TimeLimitForDizziness = 1.00f;
    this->QuickTurnMaxTurnSpeed = 300.00f;
    this->QuickTurnMaxTimeSinceMobile = 0.05f;
    this->MinStaminaStateForQuickTurn = ATLAS_STAMINA_TIRED;
    this->WalkStopMinSpeed = 100.00f;
    this->WalkStopProportionalMinSpeed = 0.75f;
    this->WalkStopMaxCrouchAmount = 0.25f;
    this->MinStaminaStateForWalkStop = ATLAS_STAMINA_EXHAUSTED;
    this->playerPawn = NULL;
    this->MovementModifierComponent = NULL;
    this->CrouchComponent = NULL;
    this->StaminaComponent = NULL;
    this->DamageComponent = NULL;
    this->AnimationOverrideComponent = NULL;
}

void UAtlasPlayerWalkStartComponent::OnWalkStopCompleted(const FName& NotifyName) {
}

void UAtlasPlayerWalkStartComponent::OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode) {
}

void UAtlasPlayerWalkStartComponent::NotifyWalkStartCompleting(const FName& NotifyName) {
}


