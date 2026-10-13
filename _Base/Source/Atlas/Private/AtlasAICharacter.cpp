#include "AtlasAICharacter.h"
#include "Perception/AIPerceptionComponent.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "TarAnimationListenerComponent.h"
#include "BikRetargetingComponent.h"

AAtlasAICharacter::AAtlasAICharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIgnorePlayer = false;
    this->DirectionToPlayer = 0.00f;
    this->DistanceToPlayer = 0.00f;
    this->ExtraDetectionTime = 2.00f;
    this->TimeAfterPlayerThrownStillReacts = 5.00f;
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListener"));
    this->DefaultTeleportSpeed = 100.00f;
    this->DefaultTeleportRotationSpeed = 50.00f;
    this->TimeItTakesToTurn = 1.00f;
    this->ObstacleSearchRadius = 1000.00f;
    this->AvoidancePredictionDistance = 500.00f;
    this->AvoidanceWeight = 0.95f;
    this->bRelaxGrabRequirements = false;
    this->HostileSearchRange = 1000.00f;
    this->AlertReactionTime = 2.00f;
    this->LastAlertReactionTime = 2.00f;
    this->AntiBounceLedgeLength = 50.00f;
    this->TimeSearchingUnderTable = 10.00f;
    this->ExtraTimeInBelowSurface = 1.50f;
    this->TimeBeforeAllowedToEnterAlertedAgain = 2.00f;
    this->CurrentDoorState = EDoorState::Done;
    this->CurrentDoorInteraction = EDoorInteractionType::None;
    this->DoorPositionAccuracy = 40.00f;
    this->DoorAngleAccuracy = 20.00f;
    this->DistanceToSearchForDoors = 700.00f;
    this->InvestigateAnimation = NULL;
    this->HearingSensitivityModifier = 1.00f;
    this->PathfindingWeight = 1.00f;
    this->StartingQuest = NULL;
    this->SmoothTeleportAccuracy = 0.01f;
    this->DistanceToIgnoreDeathQuests = 1000.00f;
    this->FallbackDeathTime = 10.00f;
    this->FallbackDeathTimeWithQuest = 30.00f;
    this->HorizontalDetectionDistance = 40.00f;
    this->VerticalDetectionDistance = 20.00f;
    this->bPlayerIsInLineOfSight = false;
    this->bUseDynamicAlertedTimer = false;
    this->BikRetargetingComponent = CreateDefaultSubobject<UBikRetargetingComponent>(TEXT("IKRetargeting"));
    this->AIController = NULL;
    this->Player = NULL;
    this->SearchBehavior = NULL;
    this->PursuitBehavior = NULL;
    this->InvestigateBehavior = NULL;
    this->BeyondReachBehavior = NULL;
    this->HostileSearchBehavior = NULL;
    this->PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
    this->HandsPhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("HandsPhysicsHandle"));
    this->GrabbedActor = NULL;
    this->grabbedComponent = NULL;
    this->AnimationInstance = NULL;
}

void AAtlasAICharacter::UseDoor(UAnimSequence* Animation, AActor* doorActor, EAtlasAILimb Door, bool bSmoothTeleport, const FTransform& DesiredTransform, bool bEnterAndExit) {
}

void AAtlasAICharacter::StopSmoothTeleport() {
}

void AAtlasAICharacter::StopRotation() {
}

void AAtlasAICharacter::StopPursuing() {
}

void AAtlasAICharacter::StopDoorInteraction() {
}

void AAtlasAICharacter::StopCurrentQuest() {
}

void AAtlasAICharacter::StopAnimation(bool bFinishAnimation) {
}

void AAtlasAICharacter::StartOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAtlasAICharacter::StartedListening() {
}

void AAtlasAICharacter::SmoothTeleportToTransform(const FTransform& Transform, float TeleportSpeed, float RotationSpeed, bool bOverrideAnimations) {
}

void AAtlasAICharacter::SmoothRotateTowardsPlayer(float Duration, bool bOverrideAnimations) {
}

void AAtlasAICharacter::SkipStopAnimation() {
}

void AAtlasAICharacter::SetVisionDistance(const float StandardVisionDistance, const float ExtraVisionDistance) {
}

void AAtlasAICharacter::SetQuestAudioState(const FName& NameOfState) {
}

void AAtlasAICharacter::SetPermanentDetectionEnabled(const bool Enabled, bool bClearDetection) {
}

void AAtlasAICharacter::SetMovementModifier(const float Modifier) {
}

void AAtlasAICharacter::SetMaxHostileTime(const float HotileTime) {
}

void AAtlasAICharacter::SetIKEnabled(const bool Enabled) {
}

void AAtlasAICharacter::SetIgnorePlayer(bool Ignore) {
}

void AAtlasAICharacter::SetAnimationEndsInMovement(bool bEndsInMovement) {
}

void AAtlasAICharacter::SetAllowedToChangeLedge(const bool Allowed) {
}

void AAtlasAICharacter::SetAIToPursuit() {
}

void AAtlasAICharacter::SetAIToHostileSearch(const float HostileSearchRadius, const float HostileSearchTime) {
}

void AAtlasAICharacter::SaveCurrentGrabAngle(const FName& NotifyName) {
}

void AAtlasAICharacter::RotateCharacterToFaceOrientation(const FRotator& OrientationToFace, bool ResetStopMovement) {
}

void AAtlasAICharacter::RotateCharacterToFaceLocation(const FVector& Location) {
}

void AAtlasAICharacter::RotateCharacter(float AngleToRotate) {
}

void AAtlasAICharacter::RemoveAllQuests() {
}

void AAtlasAICharacter::PlayAnimationWithCustomBlend(UAnimSequence* Animation, float BlendTime, bool bLoop, bool bEndInMovement) {
}

void AAtlasAICharacter::PlayAnimation(UAnimSequence* Animation, bool bLoop, bool bEndInMovement) {
}



void AAtlasAICharacter::OnPlayerSpawn(AAtlasPlayer* playerPawn) {
}


void AAtlasAICharacter::OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

void AAtlasAICharacter::OnHasReachedDestination() {
}





void AAtlasAICharacter::NotifySnapshotMovementData(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyRestartGame(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyMissedGrab(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyLeftTired(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyLeftStopMovement(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyLeftCustomAnimation(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyLeftAlerted(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyFullyBlendedStopMovement(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyFullyBlendedIntoDoorInteraction(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyFinishedAlerted(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyEnteredTired(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyEnteredStartMovement(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyEnteredQuickTurn(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyEnteredGrab(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyEnteredBelowSurfaceLoop(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyEnteredAlerted(const FName& NotifyName) {
}

void AAtlasAICharacter::NotifyAlertedPOIUpdate(const FName& NotifyName) {
}

bool AAtlasAICharacter::MoveToNode(AAtlasAINode* ReferenceToNode) {
    return false;
}

bool AAtlasAICharacter::MoveToLocation(const FVector& Location) {
    return false;
}

void AAtlasAICharacter::MissedGrab() {
}

void AAtlasAICharacter::ListenAnimationDone() {
}

bool AAtlasAICharacter::IsPursuing() const {
    return false;
}

bool AAtlasAICharacter::IsPlayingAnimation() const {
    return false;
}

bool AAtlasAICharacter::IsHoldingSomething() {
    return false;
}

bool AAtlasAICharacter::IsGrabbing() const {
    return false;
}

bool AAtlasAICharacter::IsAlerted() const {
    return false;
}

void AAtlasAICharacter::InvestigateSoundSource(const FVector& Position, float Strength, float Accuracy) {
}

bool AAtlasAICharacter::HasPointOfInterest() const {
    return false;
}

void AAtlasAICharacter::HandleSoundNormally() {
}

void AAtlasAICharacter::HandIntersectsWithActor(AActor* Actor, EAtlasAILimb OverlappingLimb) {
}

void AAtlasAICharacter::GrabActor(AActor* Actor, EAtlasAILimb GrabbingHand, const FName CustomAttachBoneName, bool IsSocket, const FName SkinnedBoneName) {
}

float AAtlasAICharacter::GetTargetAngle() const {
    return 0.0f;
}

EPlayerSurfaceState AAtlasAICharacter::GetPlayerSurfaceState() const {
    return EPlayerSurfaceState::Normal;
}

AAtlasPlayer* AAtlasAICharacter::GetPlayer() const {
    return NULL;
}

EAtlasAIInterest AAtlasAICharacter::GetInterestLevel() const {
    return EAtlasAIInterest::Neutral;
}

AActor* AAtlasAICharacter::GetGrabbedActor() const {
    return NULL;
}

float AAtlasAICharacter::GetFixedTargetAngle(float currentFixedAngle, float TurnAngleThreshold) const {
    return 0.0f;
}

EAtlasAIState AAtlasAICharacter::GetCurrentState() const {
    return EAtlasAIState::None;
}

float AAtlasAICharacter::GetCurrentSpeed() const {
    return 0.0f;
}

AAtlasAIQuest* AAtlasAICharacter::GetCurrentQuest() const {
    return NULL;
}

float AAtlasAICharacter::GetAngleToLocation(const FVector& Location) const {
    return 0.0f;
}

void AAtlasAICharacter::FinishedUsingDoor() {
}

bool AAtlasAICharacter::ExistsPathToLocation(const FVector& Location) {
    return false;
}

void AAtlasAICharacter::EndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAtlasAICharacter::EndAnimationInMovement() {
}

void AAtlasAICharacter::DropOrTPActor() {
}

void AAtlasAICharacter::DropActor() {
}

void AAtlasAICharacter::DetectPlayer() {
}

void AAtlasAICharacter::CancelPath() {
}

void AAtlasAICharacter::AtlasAttachActor(AActor* Actor, EAtlasAILimb GrabbingHand, const FName CustomAttachBoneName, bool IsSocket, const FName SkinnedBoneName) {
}

void AAtlasAICharacter::AlertAI(UAnimSequence* CustomAlertedAnimation) {
}

void AAtlasAICharacter::AddQuest(AAtlasAIQuest* Quest, bool bForceState) {
}


