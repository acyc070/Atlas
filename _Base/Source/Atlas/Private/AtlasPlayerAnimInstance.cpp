#include "AtlasPlayerAnimInstance.h"

UAtlasPlayerAnimInstance::UAtlasPlayerAnimInstance() {
    this->FootIKForceDisabled = false;
    this->playerPawn = NULL;
    this->PlayerMesh = NULL;
    this->IKRetargeting = NULL;
    this->CurrentLocomotionAnimationSetIdx = 0;
    this->CurrentJumpAnimationDataIdx = 0;
    this->CurrentLandAnimationDataIdx = 0;
    this->ConcussiveLandType = EAtlasPlayerAnimConcussiveLandType::Normal;
    this->BalanceBeamLeanAmount = 0.00f;
    this->CurrentWalkStartAnimationDataIdx = 0;
    this->CurrentOverrideDataIdx = 0;
    this->bIsSliding = false;
    this->bSlideExitToCrouch = false;
    this->bSlideExitToCrawl = false;
    this->bShouldPlayIdleAnim = false;
    this->GrabReactionBlendWeight = 0.00f;
    this->bGrabReactionFastBlend = false;
    this->CurrentWalkStopAnimationDataIdx = 0;
    this->fallHeight = 0.00f;
    this->FallWallImpactAngle = 0.00f;
    this->FallWallImpact = false;
    this->CurrentCarryTransitionAnimIdx = 0;
    this->CurrentLedgeClimbDataIdx = 0;
    this->LighterIgnitionAnimation = NULL;
    this->MaxStaminaStateForStaminaLighter = ATLAS_STAMINA_TIRED;
    this->SteamLayeredBlendAlpha = 0.00f;
    this->deathType = ATLAS_PLAYER_DEATH_TYPE_None;
    this->CurrentAIDeathStateDataIdx = 0;
    this->bEnableIKinemaFullBodySolver = true;
    this->DefaultLocomotionAnimationBlendTime = 0.30f;
    this->StaminaChangeLocomotionAnimationBlendTime = 0.70f;
    this->HungryChangeLocomotionAnimationBlendTime = 0.80f;
    this->StumbleLocomotionAnimationBlendTime = 0.15f;
    this->AllowSameIdleAnimTwiceInARow = true;
    this->DefaultIdleFlavourAnimations = NULL;
    this->SprintAccelerationLeanStrength = 2.00f;
    this->SprintIdleLockInTime = 0.55f;
    this->StaticTurnFakeSpeed = 30.00f;
    this->LookAroundBlendOutDeadZone = 5.00f;
    this->LookAroundSuppressedBlendWeight = 0.65f;
    this->LookAroundSuppressedBlendInterpTime = 0.60f;
    this->PressOnWallStandAnim = NULL;
    this->PressOnWallsBlendInSpeed = 8.00f;
    this->PressOnWallsBlendOutSpeed = 2.50f;
    this->BalanceBeamLeanSpeed = 10.00f;
    this->MaxIdleGrabReactionStartTime = 0.30f;
    this->GrabReactionBlendInTimeInitial = 0.25f;
    this->GrabReactionBlendInTimeSecondary = 0.45f;
    this->GrabReactionBlendOutTimeIdle = 0.40f;
    this->GrabReactionBlendOutTimeActive = 0.15f;
    this->GrabReactionWalkJogBlendWeight = 0.75f;
    this->GrabReactionResistBlendWeight = 0.50f;
    this->ClimbMinAnimSpeed = 0.40f;
    this->ClimbGlobalAnimMultiplier = 1.00f;
    this->bClimbSlowsAnimWithIKStretch = false;
    this->ClimbFallFastVelocityThreshold = -300.00f;
    this->DefaultLeverIdle = NULL;
    this->DefaultLeverPullPushLeft = NULL;
    this->DefaultLeverPullPushRight = NULL;
    this->CrankStrengthDivisor = 120.00f;
    this->DragPlayerMinVelocityDragImpact = 150.00f;
    this->DragPlayerVelocityDeadZone = 10.00f;
    this->MinInputAngleToResetAnimations = 45.00f;
    this->DragBackStepThresholdHysteresis = 15.00f;
    this->SlopeActiveAngle = 20.00f;
    this->CoolWalkUpStairsBlendSpace = NULL;
    this->CoolWalkDownStairsBlendSpace = NULL;
    this->HungryLayeredBlendTimeIn = 0.20f;
    this->HungryLayeredBlendTimeOut = 0.15f;
    this->HungrySpineLayeredBlendSpeed = 5.00f;
    this->CarryMinThrowAnimationScale = 0.50f;
    this->DeafaultFoodEatAnimation = NULL;
    this->LedgeClimbBlockedAnimLockInTimeStand = 1.00f;
    this->LedgeClimbBlockedAnimLockInTimeHang = 1.25f;
    this->SteamLayeredBlendTimeIn = 0.20f;
    this->SteamLayeredBlendTimeOut = 0.40f;
    this->StaticLandDeadZoneSpeed = 0.00f;
    this->DefaultAIDeathAnim = NULL;
    this->NumLocomotionAnimBanks = 2;
    this->NumWalkStartAnimBanks = 3;
    this->NumWalkStopAnimBanks = 2;
    this->NumJumpAnimBanks = 3;
    this->NumLandAnimBanks = 2;
    this->NumCarryTransitionAnimBanks = 3;
    this->NumLedgeClimbAnimBanks = 2;
    this->NumAIDeathAnimBanks = 2;
    this->NumAnimOverrideBanks = 2;
}

bool UAtlasPlayerAnimInstance::ShouldExitWalkingState() const {
    return false;
}

void UAtlasPlayerAnimInstance::SetFootIKForceDisabled(bool Enabled) {
}

void UAtlasPlayerAnimInstance::ResetDragVelocity(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::PushAIDeathAnimationData(FAtlasPlayerAIDeathStateData Data) {
}

void UAtlasPlayerAnimInstance::OnWalkStartBegin(EAtlasPlayerWalkStartType Type) {
}

void UAtlasPlayerAnimInstance::OnLedgeClimbAnimationCompleted(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::OnLedgeBeginNewClimb(UAnimSequenceBase* anim) {
}

void UAtlasPlayerAnimInstance::OnLanded(float _fallHeight, FVector ImpactVelocity, const FHitResult& HitResult) {
}

void UAtlasPlayerAnimInstance::OnJumpStart() {
}

void UAtlasPlayerAnimInstance::OnJumpExitState(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::OnGrabStart(UAtlasGrabbable* grabbedComponent) {
}

void UAtlasPlayerAnimInstance::OnGrabReactionExitInitState(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::OnGrabEnd(UAtlasGrabbable* grabbedComponent) {
}

void UAtlasPlayerAnimInstance::OnDeath(TEnumAsByte<EAtlasPlayerDeathType> Type) {
}

void UAtlasPlayerAnimInstance::OnCarryTransitionBegin(EAtlasPlayerCarryTransitionType transitionType) {
}

void UAtlasPlayerAnimInstance::OnCarryTransitionAnimExitState(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::OnBounceOffWall(FVector BounceVector) {
}

void UAtlasPlayerAnimInstance::OnAnimOverridePending(const FAtlasPlayerAnimOverrideParams& params) {
}

void UAtlasPlayerAnimInstance::OnAnimOverrideExitState(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::OnAnimOverrideEnterState(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::NotifyHungrySuppressLookAround(const FName& NotifyName) {
}

bool UAtlasPlayerAnimInstance::MovementModeIs(TEnumAsByte<ETarMovementMode> Mode) const {
    return false;
}

bool UAtlasPlayerAnimInstance::IsJumpPreparing() const {
    return false;
}

bool UAtlasPlayerAnimInstance::IsAnimatingSlope() const {
    return false;
}

void UAtlasPlayerAnimInstance::IdleFlavourAnimationExitState(const FName& NotifyName) {
}

void UAtlasPlayerAnimInstance::IdleFlavourAnimationEnterState(const FName& NotifyName) {
}

bool UAtlasPlayerAnimInstance::GrabTypeIs(TEnumAsByte<EAtlasGrabbableType> Type) const {
    return false;
}

bool UAtlasPlayerAnimInstance::GrabPhaseIs(TEnumAsByte<EAtlasPlayerGrabPhase> phase) const {
    return false;
}

TEnumAsByte<EAtlasLimb> UAtlasPlayerAnimInstance::GetWalkCycleFoot() const {
    return ATLAS_LIMB_LEFT_HAND;
}

UAnimSequence* UAtlasPlayerAnimInstance::GetStandIdleAnimation() const {
    return NULL;
}

FVector2D UAtlasPlayerAnimInstance::GetLighterLookRotationAngles() const {
    return FVector2D{};
}

void UAtlasPlayerAnimInstance::ExitLandState(const FName& NotifyName) {
}


