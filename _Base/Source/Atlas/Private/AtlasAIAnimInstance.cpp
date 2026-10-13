#include "AtlasAIAnimInstance.h"

UAtlasAIAnimInstance::UAtlasAIAnimInstance() {
    this->bUseIKinema = false;
    this->bIsPursuing = false;
    this->bIsTurning = false;
    this->bHasLostPlayer = false;
    this->bWasTired = false;
    this->bWasPursuing = false;
    this->MovementSpeedThreshold = 0.05f;
    this->TurnAngleThreshold = 5.00f;
    this->PursuitArmBlendDistance = 650.00f;
    this->CurrentMovementSpeed = 0.00f;
    this->TargetAngle = 0.00f;
    this->bIsHostile = false;
    this->bIsGrabbing = false;
    this->DirectionToPlayer = 0.00f;
    this->LockedGrabAngle = 0.00f;
    this->GrabbedActor = NULL;
    this->bIsPursuingOnSurface = false;
    this->bPlayerIsOnAIHead = false;
    this->CurrentPlayerSurfaceState = EPlayerSurfaceState::Normal;
    this->OverlappingHand = EAtlasAILimb::None;
    this->GrabExitCondition = EGrabExitCondition::None;
    this->bChangingLedge = false;
    this->bFailedRoaming = false;
    this->bIsKillingPlayer = false;
    this->bHasPointOfInterest = false;
    this->AnimationData.AddDefaulted(6);
    this->AmountOfCustomAnimationBanks = 5;
    this->CurrentAIState = EAtlasAIState::Search;
    this->bIsListening = false;
    this->bEndInMovement = false;
    this->bPlayHitAnimation = false;
    this->StopMovementBlendTime = 0.20f;
    this->CustomAnimationBlendtime = 10.00f;
    this->CurrentDoorInteraction = EDoorInteractionType::None;
    this->CurrentDoorState = EDoorState::Done;
    this->bShouldPlayIdleAnimation = false;
    this->MinTimeBetweenIdleAnimations = 20.00f;
    this->MaxTimeBetweenIdleAnimations = 40.00f;
    this->bStartedIdleAnimation = false;
    this->UpsetAmount = 0.00f;
    this->bIsUpset = false;
    this->BeyondReachState = EBeyondReachState::GetInPosition;
    this->bSmoothTeleporting = false;
    this->SmoothTeleportingWeight = 0.00f;
    this->SmoothTeleportBlendOut = 0.40f;
}

void UAtlasAIAnimInstance::StopIdleAnimation(const FName& NotifyName) {
}

void UAtlasAIAnimInstance::StartIdleAnimation(const FName& NotifyName) {
}

void UAtlasAIAnimInstance::SnapshotMovementData() {
}

void UAtlasAIAnimInstance::LeftCustomAnimation(const FName& NotifyName) {
}

bool UAtlasAIAnimInstance::IsHoldingSix() const {
    return false;
}

bool UAtlasAIAnimInstance::IsAlerted() const {
    return false;
}

float UAtlasAIAnimInstance::GetTimeRemainingOnCustomAnimation() const {
    return 0.0f;
}

float UAtlasAIAnimInstance::GetPursuitArmBlend() const {
    return 0.0f;
}

UAnimSequence* UAtlasAIAnimInstance::GetIdleAnimation() const {
    return NULL;
}

int32 UAtlasAIAnimInstance::GetCustomAnimationIndex() const {
    return 0;
}

AAtlasAICharacter* UAtlasAIAnimInstance::GetAICharacter() const {
    return NULL;
}

void UAtlasAIAnimInstance::FinishedHitAnimation(const FName& NotifyName) {
}

void UAtlasAIAnimInstance::EnteredCustomAnimation(const FName& NotifyName) {
}


