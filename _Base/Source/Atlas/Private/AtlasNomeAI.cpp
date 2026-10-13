#include "AtlasNomeAI.h"
#include "AtlasCarryable.h"
#include "AtlasCollectibleComponent.h"

AAtlasNomeAI::AAtlasNomeAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CarryableComponent = CreateDefaultSubobject<UAtlasCarryable>(TEXT("CarryableComponent"));
    this->CollectibleComponent = CreateDefaultSubobject<UAtlasCollectibleComponent>(TEXT("CollectibleComponent"));
    this->PlayerReference = NULL;
    this->IdleTime = 4.00f;
    this->StartFollowingRange = 400.00f;
    this->JumpAnimSequence = NULL;
    this->ReactAnimSequence = NULL;
    this->CurrentState = EAtlasNomeState::IDLESTILL;
    this->StartRoamingAtTime = 0.00f;
    this->MimicAtTime = 0.00f;
    this->PlayerGrabAnimation = NULL;
    this->bCachedIsBlocked = false;
    this->CarryableComponent->SetupAttachment(RootComponent);
}

void AAtlasNomeAI::SetCurrentState(EAtlasNomeState NewState, bool bStopMovement) {
}

void AAtlasNomeAI::OnPlayerSpawn(AAtlasPlayer* SpawnedPlayer) {
}

void AAtlasNomeAI::OnPlayerMakeNoise(const FName& Notify) {
}

void AAtlasNomeAI::OnMovementModeChangedEvent(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AAtlasNomeAI::OnGrabThrown(const FVector& Velocity) {
}

void AAtlasNomeAI::OnGrabStart() {
}

void AAtlasNomeAI::OnGrabEnd() {
}

void AAtlasNomeAI::OnGrabChanged(UAtlasGrabHelper* GrabHelper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material) {
}

void AAtlasNomeAI::HandleState_Landing(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_IdleStill(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_IdleRoam(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_FollowSix(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_Flying(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_Flee(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_Custom(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_Cower(float DeltaTime) {
}

void AAtlasNomeAI::HandleState_Carried(float DeltaTime) {
}


