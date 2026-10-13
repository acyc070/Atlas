#include "AtlasDLCNomeAI.h"
#include "TarAnimationListenerComponent.h"
#include "AtlasCarryable.h"
#include "AtlasDLCNomeWalkStartComponent.h"
#include "AtlasPathFollowingComponent.h"
#include "Templates/SubclassOf.h"

AAtlasDLCNomeAI::AAtlasDLCNomeAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathFollowingComponent = CreateDefaultSubobject<UAtlasPathFollowingComponent>(TEXT("PathFollowingComponent"));
    this->WalkStartComponent = CreateDefaultSubobject<UAtlasDLCNomeWalkStartComponent>(TEXT("WalkStartComponent"));
    this->DefaultAction = NULL;
    this->MaxSpeed = 105.00f;
    this->SprintMaxSpeed = 210.00f;
    this->CarryMaxSpeed = 100.00f;
    this->Acceleration = 5.00f;
    this->CrouchSpeedScale = 0.70f;
    this->RotationSpeed = 2.50f;
    this->ForwardPathOffsetScale = 1.25f;
    this->IdleSpeedThreshold = 2.50f;
    this->AvoidancePredictionDistance = 100.00f;
    this->AvoidanceWeight = 0.43f;
    this->AvoidanceConeAngle = 80.00f;
    this->IdleTime = 4.00f;
    this->RoamRadius = 250.00f;
    this->LandingRecoveryTime = 0.20f;
    this->MimicRadius = 300.00f;
    this->TeleportTime = 0.10f;
    this->bHasBeenHugged = false;
    this->PlayerGrabAnimation = NULL;
    this->CarryableComponent = CreateDefaultSubobject<UAtlasCarryable>(TEXT("CarryableComponent"));
    this->GrabReachRadius = 35.00f;
    this->GrabReachAboveHead = 10.00f;
    this->GrabReachBelowFeet = 5.00f;
    this->MinRegrabTime = 0.50f;
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListener"));
    this->bCower = true;
    this->PlayerStruggleAnimation = NULL;
    this->StruggleAnimation = NULL;
    this->FollowerSpawnRadius = 400.00f;
    this->SpawnHeightShift = 70.00f;
    this->bPrintState = false;
    this->bPrintMovementData = false;
    this->bPrintAvoidanceData = false;
    this->CarryableComponent->SetupAttachment(RootComponent);
}

void AAtlasDLCNomeAI::UpdateAnimOverrideBlendSpaceInput(FVector2D Input) {
}

void AAtlasDLCNomeAI::StopAnimation(bool bFinishAnimation) {
}

void AAtlasDLCNomeAI::StartAction(AAtlasActionWaypoint* Action) {
}

bool AAtlasDLCNomeAI::SpawnedAsDefault() {
    return false;
}

void AAtlasDLCNomeAI::SetIsInDanger(bool inDanger, AAtlasActionWaypoint* DangerAction, bool canBeGrabbed) {
}

void AAtlasDLCNomeAI::SetCower(bool isCower) {
}

void AAtlasDLCNomeAI::PlayAnimation(UAnimationAsset* Animation, bool bLoop, FVector2D BlendSpaceInput) {
}

void AAtlasDLCNomeAI::OnSpawnFollower(AAtlasPlayer* playerPawn) {
}

void AAtlasDLCNomeAI::OnPlayerSpawn(AAtlasPlayer* InPlayer) {
}

void AAtlasDLCNomeAI::OnPathStarted(UAtlasPathFollowingComponent* Path) {
}

void AAtlasDLCNomeAI::OnPathFinished(UAtlasPathFollowingComponent* Path) {
}

void AAtlasDLCNomeAI::OnPathAborted(UAtlasPathFollowingComponent* Path) {
}

void AAtlasDLCNomeAI::OnGrabThrown(const FVector& Velocity) {
}

void AAtlasDLCNomeAI::OnGrabStart() {
}

void AAtlasDLCNomeAI::OnGrabEnd() {
}

void AAtlasDLCNomeAI::OnGrabChanged(UAtlasGrabHelper* GrabHelper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material) {
}



void AAtlasDLCNomeAI::OnAnimNotify(const FName& NotifyName) {
}

void AAtlasDLCNomeAI::OnAnimationFinished(UAnimationAsset* Animation) {
}

void AAtlasDLCNomeAI::NotifyFinishedJumping(const FName& NotifyName) {
}

bool AAtlasDLCNomeAI::MoveToLocation(FVector Location, float AcceptanceRadius, bool bSprintToLocation) {
    return false;
}

bool AAtlasDLCNomeAI::MoveToActor(AActor* Actor, bool bObserve, float AcceptanceRadius, bool bSprintToActor) {
    return false;
}

bool AAtlasDLCNomeAI::IsGrabbing() const {
    return false;
}

bool AAtlasDLCNomeAI::IsCrouching() const {
    return false;
}

bool AAtlasDLCNomeAI::HasBeenHugged() {
    return false;
}

float AAtlasDLCNomeAI::GetLocomotionVelocity() const {
    return 0.0f;
}

AAtlasActionWaypoint* AAtlasDLCNomeAI::GetCurrentAction() {
    return NULL;
}

AActor* AAtlasDLCNomeAI::GetCarriedObject() {
    return NULL;
}

void AAtlasDLCNomeAI::ForceSpawnLocation(FVector ForcedSpawnLocation) {
}

void AAtlasDLCNomeAI::ForceReleaseGrab() {
}

void AAtlasDLCNomeAI::EndAction(bool bFinishAnimation) {
}

void AAtlasDLCNomeAI::EnableFollowingBehavior() {
}

void AAtlasDLCNomeAI::EnableAIBehavior() {
}

void AAtlasDLCNomeAI::DropCarryable(FVector ThrowVector, float LifeSpan) {
}

void AAtlasDLCNomeAI::DisableFollowingBehavior() {
}

void AAtlasDLCNomeAI::DisableAIBehavior() {
}

void AAtlasDLCNomeAI::ClearForcedSpawnLocation() {
}

void AAtlasDLCNomeAI::BeginCarrying(TSubclassOf<AActor> Carryable) {
}


