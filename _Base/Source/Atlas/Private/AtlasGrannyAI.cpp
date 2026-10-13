#include "AtlasGrannyAI.h"
#include "TarAnimationListenerComponent.h"
#include "AtlasWaterRippleGenerator.h"

AAtlasGrannyAI::AAtlasGrannyAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListener"));
    this->RippleComponent = CreateDefaultSubobject<UAtlasWaterRippleGenerator>(TEXT("RippleComponent"));
}

void AAtlasGrannyAI::WaterVolumeEndOverlap(AActor* OverlappedActor, AAtlasWaterVolume* WaterVolume) {
}

void AAtlasGrannyAI::WaterVolumeBeginOverlap(AActor* OverlappedActor, AAtlasWaterVolume* WaterVolume) {
}

void AAtlasGrannyAI::UpdateWaterVolume() {
}

void AAtlasGrannyAI::StopScriptedBehavior() {
}

void AAtlasGrannyAI::StartAmbush(AActor* Actor, float MaximumTime, float GracePeriod) {
}

void AAtlasGrannyAI::SetState(EAtlasGrannyAIState NewState) {
}

void AAtlasGrannyAI::SetLurkTargetLocation(const FVector& Location) {
}

void AAtlasGrannyAI::SetLurkTargetActor(AActor* TargetActor) {
}

void AAtlasGrannyAI::SetDiveTeleportAllowed(const bool Allowed) {
}

void AAtlasGrannyAI::SetAttention(float Attention) {
}

void AAtlasGrannyAI::SetAttackedActor(AActor* Actor) {
}

void AAtlasGrannyAI::RemoveSubmergedInput(AActor* Actor) {
}




void AAtlasGrannyAI::OnPlayerSpawn(AAtlasPlayer* playerPawn) {
}

void AAtlasGrannyAI::OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult) {
}










void AAtlasGrannyAI::NotifyPerformBump(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyGrabActor(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyFinishedBump(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyFinishedAttack(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyCantCancelWithVelocity(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyCantCancelBump(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyCantCancelAttack(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyCanCancelKill(const FName& NotifyName) {
}

void AAtlasGrannyAI::NotifyCanCancelBump(const FName& NotifyName) {
}

EAtlasGrannyAIState AAtlasGrannyAI::GetState() const {
    return EAtlasGrannyAIState::Lurk;
}

FVector AAtlasGrannyAI::GetLocationAtSurface() const {
    return FVector{};
}

float AAtlasGrannyAI::GetDepthRatio() const {
    return 0.0f;
}

AAtlasWaterVolume* AAtlasGrannyAI::GetCurrentWaterVolume() {
    return NULL;
}

float AAtlasGrannyAI::GetCurrentMovementSpeed() const {
    return 0.0f;
}

float AAtlasGrannyAI::GetCurrentAttention() const {
    return 0.0f;
}

void AAtlasGrannyAI::ExitVolumeEndOverlap(AActor* OverlappedActor, AAtlasWaterVolume* WaterVolume) {
}

bool AAtlasGrannyAI::DoAnimAtLocation(AActor* TargetActor, UAnimSequence* Animation, const bool bLooping) {
    return false;
}

void AAtlasGrannyAI::DiveTeleportTo(AActor* Actor, EAtlasGrannyAIState ExitState) {
}

void AAtlasGrannyAI::DebugPerformTestBump(AActor* Actor, EAtlasGrannyBumpLevel Level) {
}

void AAtlasGrannyAI::ClearLurkTargetOverride() {
}

void AAtlasGrannyAI::ClearAttentionOverride(float Attention) {
}

void AAtlasGrannyAI::AddSubmergedInput(AActor* Actor) {
}

void AAtlasGrannyAI::AddAttention(float Attention) {
}


