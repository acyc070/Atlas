#include "AtlasPlayerMovementModifierComponent.h"

UAtlasPlayerMovementModifierComponent::UAtlasPlayerMovementModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResetStumbleDelay = 1.00f;
    this->StopStumblingDelay = 0.55f;
    this->IsSprintingLockedOnRatio = 0.33f;
    this->SprintingAgainstWallCancelTime = 0.10f;
    this->SprintingAgainstWallMinAngle = 65.00f;
    this->PlatformEdgeSearchRadius = 50.00f;
    this->PlatformEdgeSafetyMargin = 15.00f;
    this->PlatformEdgeMaxExtension = 0.50f;
    this->HungerLevelBlendTime = 1.00f;
    this->MinHungerLevelToAffect = 2;
    this->PetrifiedSpeedBlendCurve = NULL;
    this->PostLandTurnLockoutTime = 0.25f;
    this->PostLandTurnLockoutAngle = 100.00f;
    this->MinStaminaStateForSprint = ATLAS_STAMINA_EXHAUSTED;
    this->StaminaMovementBlendTime = 1.00f;
    this->CanSprintOnPainfulFloor = false;
    this->CanSprintOnElectricFloor = false;
    this->playerPawn = NULL;
    this->CrouchComponent = NULL;
    this->CarryInterface = NULL;
    this->StaminaComponent = NULL;
    this->DamageComponent = NULL;
    this->WalkStartComponent = NULL;
}

void UAtlasPlayerMovementModifierComponent::TriggerStumble(float Duration) {
}

void UAtlasPlayerMovementModifierComponent::OnWallImpactAnimationEvent(const FName& NotifyName) {
}

void UAtlasPlayerMovementModifierComponent::OnWallImpact(FVector BounceVector) {
}

void UAtlasPlayerMovementModifierComponent::OnWalkStartCompleted(EAtlasPlayerWalkStartType Type) {
}

void UAtlasPlayerMovementModifierComponent::OnStaminaStateChanged(TEnumAsByte<EAtlasStaminaState> aNewStaminaState) {
}

void UAtlasPlayerMovementModifierComponent::OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode) {
}

void UAtlasPlayerMovementModifierComponent::OnLimbColliderHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UAtlasPlayerMovementModifierComponent::OnHungerLevelChanged(int32 newLevel) {
}

bool UAtlasPlayerMovementModifierComponent::IsSprinting() const {
    return false;
}

bool UAtlasPlayerMovementModifierComponent::HasType(EAtlasPlayerMoveModTypes Type) const {
    return false;
}

float UAtlasPlayerMovementModifierComponent::GetSprintRatio() const {
    return 0.0f;
}


