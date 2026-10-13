#include "AtlasLeechAI.h"
#include "TarAnimationListenerComponent.h"
#include "AtlasLeechCharacterMovementComponent.h"

AAtlasLeechAI::AAtlasLeechAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAtlasLeechCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bDrawDebug = false;
    this->LeechAvoidance = 100000.00f;
    this->LerpXYCompletionTime = 0.33f;
    this->bCanBeKilled = true;
    this->BoneToAttachTo.AddDefaulted(3);
    this->bUseStartupAnimation = false;
    this->HangingAlertRadius = 200.00f;
    this->LeechType = ELeechType::Crawler;
    this->AlertRange = 500.00f;
    this->AttachRange = 100.00f;
    this->FullyAttachedDelay = 0.40f;
    this->StartRunningDelay = 1.50f;
    this->SwarmRange = 300.00f;
    this->LeechRecoveryDelay = 0.00f;
    this->ChaseTransitionDelay = 1.00f;
    this->BodyWaveMinValue = 0.45f;
    this->BodyWaveMaxValue = 0.60f;
    this->BodySizeMinValue = 0.55f;
    this->BodySizeMaxValue = 0.75f;
    this->TEMP_AttachAnimationCurve = NULL;
    this->AIController = NULL;
    this->AtlasPlayerPawn = NULL;
    this->AtlasPlayerAnim = NULL;
    this->LeechAnim = NULL;
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListenerComponent"));
    this->LeechCurrentState = ELeechBehaviourState::Idle;
    this->LeechCurrentAnimState = ELeechBehaviourState::Idle;
    this->bOptimizeIdleAnimState = true;
    this->LeechAttachmentIndex = 0;
    this->LeechSpeed = 0.00f;
    this->LeechMovementAngle = 0.00f;
}

void AAtlasLeechAI::OnPlayerSpawn(AAtlasPlayer* anAtlasPlayer) {
}

void AAtlasLeechAI::OnPlayerDeath(TEnumAsByte<EAtlasPlayerDeathType> deathType) {
}

void AAtlasLeechAI::OnHit(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAtlasLeechAI::Notify_StartupIsDone(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredSwarm(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredStartupWaiting(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredStanding(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredIdle(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredFalling(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredChase(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredAttaching(const FName& NotifyName) {
}

void AAtlasLeechAI::Notify_EnteredAttached(const FName& NotifyName) {
}


