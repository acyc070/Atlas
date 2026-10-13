#include "AtlasJanitorAI.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Character.h"

AAtlasJanitorAI::AAtlasJanitorAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LeftHandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LeftHandCollision"));
    this->RightHandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RightHandCollision"));
    this->TransferAnimation = nullptr;
    this->TouchGrabBaseAnimation = nullptr;
    this->bGrabImmediatelyOnTouch = false;
    this->CloseToPlayerDistance = 500.00f;
    this->InvestigateReactionThreshold = 1.20f;
    this->StrongReactionThreshold = 2.00f;
    this->ReactionCooldownOnSound = 0.50f;
    this->PursuingHearingModifier = 1.40f;
    this->SixthSenseCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SixthSenseBox"));
    this->PursuitSixthSenseCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("PursuitSixthSenseBox"));
    this->ExtraSixthSenseActivationHeight = 50.00f;
    this->MaterialDetectionRange = 100.00f;
    this->LeftMaterialDetectionBone = TEXT("l_middleFinger2_bn");
    this->RightMaterialDetectionBone = TEXT("r_middleFinger2_bn");

    // Attach to the character's skeletal mesh via the native accessor.
    // Do NOT use FindPropertyByName("Mesh") + ContainerPtrToValuePtr here:
    // that reflection path can resolve to a stale CDO subobject on hot reload,
    // leaving a dangling AttachParent pointer that GC will fatal on.
    USkeletalMeshComponent* const CharacterMesh = GetMesh();
    checkf(CharacterMesh, TEXT("AAtlasJanitorAI: GetMesh() returned null — parent class likely suppressed the default Mesh subobject."));

    this->LeftHandCollision->SetupAttachment(CharacterMesh);
    this->RightHandCollision->SetupAttachment(CharacterMesh);
    this->PursuitSixthSenseCapsule->SetupAttachment(RootComponent);
    this->SixthSenseCapsule->SetupAttachment(RootComponent);
}

void AAtlasJanitorAI::StartOverlapRight(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAtlasJanitorAI::StartOverlapLeft(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAtlasJanitorAI::SixthSenseEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAtlasJanitorAI::SixthSenseBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAtlasJanitorAI::SetupIKGrabbing(EBikTaskIdentifier GrabbingHand) {
}

void AAtlasJanitorAI::SetupForCutOffArm() {
}

void AAtlasJanitorAI::SetIsBossFight(bool isBossFight) {
}

void AAtlasJanitorAI::SetForceGrab(bool ForceGrab) {
}

void AAtlasJanitorAI::PursuitSixthSenseEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAtlasJanitorAI::PursuitSixthSenseBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AAtlasJanitorAI::OnTransferToHand(const FName& NotifyName) {
}

void AAtlasJanitorAI::OnStartedNormalGrab(const FName& NotifyName) {
}

void AAtlasJanitorAI::OnNotifyEnableIK(const FName& NotifyName) {
}

void AAtlasJanitorAI::OnNotifyDisableIK(const FName& NotifyName) {
}

void AAtlasJanitorAI::OnLeftMovementState(const FName& NotifyName) {
}

void AAtlasJanitorAI::OnGrabNotify(const FName& NotifyName) {
}

void AAtlasJanitorAI::OnFinishedOnTopEntry(const FName& NotifyName) {
}

void AAtlasJanitorAI::NotifyFinishedQuickTurn(const FName& NotifyName) {
}

bool AAtlasJanitorAI::HasTouchHotspot(EAtlasAILimb Limb) const {
    return false;
}

void AAtlasJanitorAI::HandEndOverlap(AActor* Actor, EAtlasAILimb OverlappingLimb) {
}

FName AAtlasJanitorAI::GetSoundMaterial(const EAtlasAILimb Limb, const bool ShowDebug) const {
    return NAME_None;
}

float AAtlasJanitorAI::GetSixthSenseRange() const {
    return 0.0f;
}

float AAtlasJanitorAI::GetPredictedGrabDistance() const {
    return 0.0f;
}

float AAtlasJanitorAI::GetPredictedGrabAngle() const {
    return 0.0f;
}

UAnimSequence* AAtlasJanitorAI::GetHotspotAnimation(EAtlasAILimb Limb) const {
    return nullptr;
}

void AAtlasJanitorAI::EndOverlapRight(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAtlasJanitorAI::EndOverlapLeft(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAtlasJanitorAI::EnableTouchGrab() {
}

void AAtlasJanitorAI::DisableTouchGrabs() {
}

void AAtlasJanitorAI::DisableGrab() {
}

void AAtlasJanitorAI::CancelGrab() {
}