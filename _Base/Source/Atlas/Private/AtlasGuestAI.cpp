#include "AtlasGuestAI.h"
#include "Perception/AIPerceptionComponent.h"
#include "TarAnimationListenerComponent.h"

AAtlasGuestAI::AAtlasGuestAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DetectionRadius = 650.00f;
    this->PeripheralVisionAngle = 50.00f;
    this->SightDistance = 500.00f;
    this->Type = EGuestType::Mobile;
    this->bTransitionToMobile = false;
    this->bCanBeAlerted = false;
    this->AlertedCooldown = 10.00f;
    this->MovementSpeedModifier = 1.00f;
    this->bSwipe = false;
    this->bIsPlayerOnBack = false;
    this->ShakeOffDelay = 1.00f;
    this->ImpactVelocityTreshold = 300.00f;
    this->AnimationSet = EGuestId::Guest01;
    this->PreferedTransitionDirection = EGuestTransitionDirection::Any;
    this->bPlayImpactReaction = true;
    this->bPlayOnTopReaction = true;
    this->AvoidancePredictionDistance = 1500.00f;
    this->AvoidanceWeight = 0.95f;
    this->TimeToFade = 0.00f;
    this->ReleaseLedgeDelay = 0.50f;
    this->ImpactDeathType = ATLAS_PLAYER_DEATH_TYPE_Crushed;
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListener"));
    this->AIController = NULL;
    this->Player = NULL;
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
    this->AnimationInstance = NULL;
    this->BodyCapsule = NULL;
    this->BodyCapsuleOverlap = NULL;
}

void AAtlasGuestAI::StopAnimation(bool bFinishAnimation) {
}

bool AAtlasGuestAI::ShouldUseLookAt() const {
    return false;
}

void AAtlasGuestAI::SetZombieMode(bool Activate) {
}

void AAtlasGuestAI::SetType(EGuestType NewType) {
}

void AAtlasGuestAI::SetReachDistance(float ReachDistance) {
}

void AAtlasGuestAI::SetPursuitMode(EGuestPursuitMode Mode) {
}

void AAtlasGuestAI::SetForcePlayerReleaseLedge(bool bEnabled) {
}

void AAtlasGuestAI::PlayAnimation(UAnimSequence* Animation, bool bLoop) {
}


void AAtlasGuestAI::OnPlayerSpawn(AAtlasPlayer* playerPawn) {
}

void AAtlasGuestAI::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}


void AAtlasGuestAI::NotifyRestartGame(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyGrabPlayer(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyFinishedTransition(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyFinishedGrab(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyFinishedAlerted(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyEnteredQuickTurn(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyEnteredGrabLoop(const FName& NotifyName) {
}

void AAtlasGuestAI::NotifyEnteredGrab(const FName& NotifyName) {
}

void AAtlasGuestAI::MoveToLocation(FVector Location, bool forceMove) {
}

bool AAtlasGuestAI::IsInGrabRange() const {
    return false;
}

bool AAtlasGuestAI::HasGrabbedPlayer() const {
    return false;
}

bool AAtlasGuestAI::HasFininshedGrab() const {
    return false;
}

EGuestState AAtlasGuestAI::GetState() const {
    return EGuestState::Idle;
}

float AAtlasGuestAI::GetFixedAngleToPlayer() const {
    return 0.0f;
}

float AAtlasGuestAI::GetAngleToPlayer() const {
    return 0.0f;
}

bool AAtlasGuestAI::CanToTransitionToMobile() const {
    return false;
}

bool AAtlasGuestAI::CanGrabPlayer() const {
    return false;
}


