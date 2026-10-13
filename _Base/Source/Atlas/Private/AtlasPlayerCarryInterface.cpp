#include "AtlasPlayerCarryInterface.h"

UAtlasPlayerCarryInterface::UAtlasPlayerCarryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickUpMaxYaw = 90.00f;
    this->HungryPickupMaxDistance = 50.00f;
    this->PickUpMaxTimeout = 0.75f;
    this->CrouchThreshold = 0.50f;
    this->MaxWalkSpeedToPutDownCarryable = 50.00f;
    this->PutDownHeadColliderDisableTime = 0.50f;
    this->MinThrowPrepareAnimationTime = 0.30f;
    this->MaxThrowInputTime = 0.50f;
    this->MinThrowSpeed = 425.00f;
    this->ThrowAngleForHigh = 55.00f;
    this->TargetThrowStrengthMultiplier = 1.10f;
    this->TargetThrowAngleStep = 1.00f;
    this->ThrowBlockTestUp = 30.00f;
    this->ThrowBlockTestForwards = 25.00f;
    this->ThrowBlockTestRadius = 15.00f;
    this->DefaultItemSlotInsertionAnimation = NULL;
    this->PostBiteCooldownTime = 0.25f;
    this->CarryCapsuleRadius = 40.00f;
    this->MirrorFightAnim = NULL;
    this->CarriedComponent = NULL;
    this->CurrentItemSlot = NULL;
    this->RemovedFromItemSlot = NULL;
    this->MirrorFightOpponent = NULL;
}

void UAtlasPlayerCarryInterface::NotifyTransitionAnimExitState(const FName& NotifyName) {
}

void UAtlasPlayerCarryInterface::NotifyPutDownDetach(const FName& NotifyName) {
}

void UAtlasPlayerCarryInterface::NotifyPickUpAttach(const FName& NotifyName) {
}

void UAtlasPlayerCarryInterface::NotifyInsertEnterSlot(const FName& NotifyName) {
}

void UAtlasPlayerCarryInterface::NotifyBite(const FName& NotifyName) {
}

void UAtlasPlayerCarryInterface::DoSpecialPutDownAnimation(UAnimSequence* anim) {
}

void UAtlasPlayerCarryInterface::BeginMirrorFight(AActor* opponent) {
}


