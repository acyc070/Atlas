#include "AtlasPlayerLighterComponent.h"

UAtlasPlayerLighterComponent::UAtlasPlayerLighterComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IgnitionDelayTime = 0.20f;
    this->LightSourceFadeOutTime = 0.30f;
    this->LightSettingBlendTime = 2.00f;
    this->LightTargetPerformanceModeOffset = 0.00f;
    this->LightTargetSprintingOffset = 0.00f;
    this->LightSweepSphereRadius = 0.00f;
    this->LightSweepStartOffset = 0.00f;
    this->UseLighterForwardDirectionForSweep = false;
    this->LightTargetSpringConstant = 0.00f;
    this->LightTargetDamping = 0.00f;
    this->WallDistanceIncreaseRate = 0.00f;
    this->BurningStandPositionOffset = 50.00f;
    this->FadeOutWithSquaredFalloff = true;
    this->ExtinguishAfterFallingTime = 0.35f;
    this->WetStallTime = 5.00f;
    this->MaxHungerLevelForLighter = 2;
    this->RestrictedMoveModTypes.AddDefaulted(3);
    this->LighterSpawnedOnDeath = NULL;
    this->HdRumbleType = EAtlasHDRumbleType::Lighter;
    this->HdRumbleIntensityLeft = 1.00f;
    this->HdRumbleIntensityRight = 1.00f;
    this->playerPawn = NULL;
    this->PlayerAnimationInstance = NULL;
    this->LighterMesh = NULL;
    this->FlameParticleSystem = NULL;
    this->MainLightSource = NULL;
    this->RayTracedLightSource = NULL;
    this->ActiveLightSource = NULL;
    this->AmbientLightSource = NULL;
    this->BurnableComponent = NULL;
}

void UAtlasPlayerLighterComponent::TriggerFlickering(FAtlasPlayerLightFlicker aFlickeringEffect) {
}

void UAtlasPlayerLighterComponent::SetEnabled(bool Enabled) {
}

void UAtlasPlayerLighterComponent::OnPlayerDeath(TEnumAsByte<EAtlasPlayerDeathType> aDeathType) {
}

void UAtlasPlayerLighterComponent::OnPlayerDamageTypeSet(TEnumAsByte<EAtlasDamageType> DamageType) {
}

void UAtlasPlayerLighterComponent::OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult) {
}

void UAtlasPlayerLighterComponent::OnHungerLevelChanged(int32 hungerLevel) {
}

void UAtlasPlayerLighterComponent::KillLight(TEnumAsByte<ELighterExtinguishType> killType) {
}

bool UAtlasPlayerLighterComponent::IsTryingToLightBurnableObject() const {
    return false;
}

bool UAtlasPlayerLighterComponent::IsLit() const {
    return false;
}

bool UAtlasPlayerLighterComponent::IsLightingBurnableObject() const {
    return false;
}

bool UAtlasPlayerLighterComponent::IsEnabled() const {
    return false;
}

void UAtlasPlayerLighterComponent::ExtinguishLighter() {
}

void UAtlasPlayerLighterComponent::ActivateLighter(bool checkValid) {
}


