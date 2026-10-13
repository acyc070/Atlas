#include "AtlasPlayerJumpModifierComponent.h"

UAtlasPlayerJumpModifierComponent::UAtlasPlayerJumpModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->JumpHeightModifier = 1.00f;
    this->MinCeilingHeightToJump = 140.00f;
    this->MinStaminaStateForJump = ATLAS_STAMINA_EXHAUSTED;
    this->MaxHungerStateForJump = 1;
    this->MinForwardJumpWalkFactor = 0.30f;
    this->ForwardJumpBaseVelPerpendicularScaleFactor = 0.10f;
    this->playerPawn = NULL;
    this->DamageComponent = NULL;
    this->StaminaComponent = NULL;
    this->MovementModifierComponent = NULL;
    this->CrouchComponent = NULL;
    this->WalkStartComponent = NULL;
    this->AnimationOverrideComponent = NULL;
}

void UAtlasPlayerJumpModifierComponent::OnPlayerJumpLaunch() {
}


