#include "AtlasPlayerClimbInterface.h"

UAtlasPlayerClimbInterface::UAtlasPlayerClimbInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxTeleportDistance2DCrouching = 50.00f;
    this->FallVelocitySearchMultiplier = 0.20f;
    this->JumpFromTopTimeout = 0.20f;
    this->MaxHorizontalSearchOffset = 25.00f;
    this->ExitTopBlockTestFloorMargin = 15.00f;
    this->ExitTopTestCeilingMargin = 0.00f;
    this->ExitTopBlockTestForwardDisplacement = 25.00f;
    this->ExitTopBlockTestCapsuleRadius = 20.00f;
    this->JumpOffVelocityXY = 300.00f;
    this->JumpOffVelocityZ = 300.00f;
    this->JumpTurnDirectionThresholdAngle = 25.00f;
    this->bCorrectTranslationError = true;
    this->bCorrectRotationYawError = true;
    this->bCorrectRotationPitchError = false;
    this->bCorrectRotationRollError = false;
    this->MaxTopOffsetForClimbable = 10.00f;
    this->SpringFeedbackVelocityHand = 10.00f;
    this->SpringFeedbackVelocityFoot = 7.50f;
    this->SpringFeedbackVelocityFalling = 15.00f;
    this->TopWeightUpwardsFirst = 0.01f;
    this->TopWeightUpwardsSecond = 0.01f;
    this->TopWeightSidewaysFirst = 0.75f;
    this->TopWeightSidewaysSecond = 0.05f;
    this->TranslationInterpolationStrength = 5.00f;
    this->TranslationInterpolationStrengthZ = 20.00f;
    this->RotationInterpolationStrength = 8.50f;
    this->ClimbComponent = NULL;
    this->IkinemaRetargeting = NULL;
    this->Mesh = NULL;
}

void UAtlasPlayerClimbInterface::PostProcessAnimNotifies() {
}

void UAtlasPlayerClimbInterface::NotifyLimbPlaced(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyFindGrabLocation(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyExitInitState(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyEndJumpAnimation(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyEndExitingToTop(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyEndExitingToFalling(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyClimbingInDirection(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyBeginExitingToTop(const FName& NotifyName) {
}

void UAtlasPlayerClimbInterface::NotifyBeginExitingToFalling(const FName& NotifyName) {
}


