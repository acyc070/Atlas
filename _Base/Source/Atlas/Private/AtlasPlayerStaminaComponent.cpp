#include "AtlasPlayerStaminaComponent.h"

UAtlasPlayerStaminaComponent::UAtlasPlayerStaminaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->playerPawn = NULL;
    this->bEnableStamina = true;
    this->StateThresholdRatios[0] = 0.00f;
    this->StateThresholdRatios[1] = 0.00f;
    this->StateThresholdRatios[2] = 0.00f;
    this->MaxStamina = 100.00f;
    this->StaminaRecoveryRateStanding = 50.00f;
    this->StaminaRecoveryRateJogging = 25.00f;
    this->StaminaRecoveryNotGrounded = 35.00f;
    this->StaminaSprintDrainRate = 18.00f;
    this->SprintLockInRatio = 0.90f;
}

void UAtlasPlayerStaminaComponent::SetStaminaState(TEnumAsByte<EAtlasStaminaState> State, bool canGainStamina) {
}

void UAtlasPlayerStaminaComponent::SetMode(EAtlasStaminaMode NewMode) {
}

void UAtlasPlayerStaminaComponent::SetCurrentStaminaRatio(float Ratio, bool canGainStamina) {
}

void UAtlasPlayerStaminaComponent::OnPlayerJumped() {
}

TEnumAsByte<EAtlasStaminaState> UAtlasPlayerStaminaComponent::GetStaminaState() const {
    return ATLAS_STAMINA_EXHAUSTED;
}

TEnumAsByte<EAtlasStaminaState> UAtlasPlayerStaminaComponent::GetPreviousStaminaState() const {
    return ATLAS_STAMINA_EXHAUSTED;
}

EAtlasStaminaMode UAtlasPlayerStaminaComponent::GetMode() const {
    return EAtlasStaminaMode::Normal;
}

float UAtlasPlayerStaminaComponent::GetMaximumStamina() const {
    return 0.0f;
}

float UAtlasPlayerStaminaComponent::GetCurrentStaminaRatio() const {
    return 0.0f;
}

float UAtlasPlayerStaminaComponent::GetCurrentStamina() const {
    return 0.0f;
}

void UAtlasPlayerStaminaComponent::AddStaminaChange(float changeAmount) {
}


