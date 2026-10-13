#include "AtlasPlayerDamageComponent.h"

UAtlasPlayerDamageComponent::UAtlasPlayerDamageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->playerPawn = NULL;
    this->StaminaComponent = NULL;
    this->DefaultDeathHandler = NULL;
    this->PetrificationRecoverPerSecond = 20.00f;
    this->LeechAttachedKillTime = 1.00f;
    this->MaxNrOfAttachedLeeches = 2;
    this->HypnotizedMovementScale = 0.50f;
}

void UAtlasPlayerDamageComponent::SetUseCustomDeathFocalOffset(bool bUse) {
}

void UAtlasPlayerDamageComponent::SetPetrified(float petrificationGainPerSecond) {
}

void UAtlasPlayerDamageComponent::SetHypnotized(float recoveryDelay) {
}

void UAtlasPlayerDamageComponent::SetHungry(int32 hungerLevel) {
}

void UAtlasPlayerDamageComponent::RemoveSteamSource(USceneComponent* EffectComponent) {
}

void UAtlasPlayerDamageComponent::OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult) {
}

void UAtlasPlayerDamageComponent::OnGrabChanged(UAtlasGrabbable* grabbedComponent, UAtlasGrabHelper* GrabHelper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material) {
}

void UAtlasPlayerDamageComponent::Kill(TEnumAsByte<EAtlasPlayerDeathType> deathType, FVector WorldDirection) {
}

bool UAtlasPlayerDamageComponent::IsPetrified() const {
    return false;
}

bool UAtlasPlayerDamageComponent::IsHypnotized() const {
    return false;
}

bool UAtlasPlayerDamageComponent::IsHungry() const {
    return false;
}

bool UAtlasPlayerDamageComponent::IsDead(bool includeQueued) const {
    return false;
}

FVector UAtlasPlayerDamageComponent::GetSteamDirection() const {
    return FVector{};
}

float UAtlasPlayerDamageComponent::GetPetrificationAmount() const {
    return 0.0f;
}

int32 UAtlasPlayerDamageComponent::GetHungerLevel() const {
    return 0;
}

TEnumAsByte<EAtlasPlayerDeathType> UAtlasPlayerDamageComponent::GetDeathType() const {
    return ATLAS_PLAYER_DEATH_TYPE_None;
}

FVector UAtlasPlayerDamageComponent::GetDeathModifierVector() const {
    return FVector{};
}

bool UAtlasPlayerDamageComponent::GetAttachedLeeches(TArray<AAtlasLeechAI*>& outArray) const {
    return false;
}

void UAtlasPlayerDamageComponent::ClearPetrified() {
}

void UAtlasPlayerDamageComponent::ClearHypnotized() {
}

void UAtlasPlayerDamageComponent::ClearHungry() {
}

void UAtlasPlayerDamageComponent::AddSteamSource(USceneComponent* EffectComponent, FVector componentLocalVector) {
}


