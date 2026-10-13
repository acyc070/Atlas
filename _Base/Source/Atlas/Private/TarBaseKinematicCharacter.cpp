#include "TarBaseKinematicCharacter.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"

ATarBaseKinematicCharacter::ATarBaseKinematicCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->MaxSimulationIterations = 8;
    this->MaxSimulationTimeStep = 0.05f;
    this->bEnablePhysicsInteraction = true;
    this->Mass = 100.00f;
    this->bPushForceScaledToMass = false;
    this->bScalePushForceToVelocity = true;
    this->InitialPushForceFactor = 500.00f;
    this->PushForceFactor = 750000.00f;
    this->PushForcePointZOffsetFactor = -0.75f;
    this->RepulsionForce = 2.50f;
    this->StandStillThreshold = 0.10f;
    this->bAlwaysCheckFloor = false;
    this->MaximumFloorDepenetrationSpeed = 5.00f;
    this->bMaintainHorizontalGroundVelocity = true;
    this->WalkableFloorAngle = 20.00f;
    this->MaxStepHeight = 25.00f;
    this->MaxAngleForTurningBehaviour = 90.00f;
    this->bCanCrouch = false;
    this->CrouchedHalfHeight = 40.00f;
    this->bApplyGravityToDynamicBases = false;
    this->AirControl = 0.05f;
    this->GravityZ = -1000.00f;
    this->bOverrideGravityZ = false;
    this->JumpAfterFallingMaxTime = 0.10f;
    this->JumpBeforeLandingMaxTime = 0.10f;
    this->ForcedMinForwardJumpWalkFactor = 0.90f;
    this->TerminalVelocity = 1500.00f;
    this->bImplementFallingVelocityLimits = true;
    this->UpwardsFallingVelocityLimit = 250.00f;
    this->SidewaysFallingVelocityLimit = 600.00f;
    this->PureBrakingAngle = 50.00f;
    this->MeshFloatLerpSpeed = 20.00f;
    this->DitchMaxAngle = 20.00f;
    this->DitchMaxTime = 0.15f;
    this->DitchTeleportRecoveryTime = 0.15f;
    this->Mesh->SetupAttachment(RootComponent);
}

bool ATarBaseKinematicCharacter::TestMovementMode(TEnumAsByte<ETarMovementMode> Mode) const {
    return false;
}

void ATarBaseKinematicCharacter::StopMovementImmediately() {
}

bool ATarBaseKinematicCharacter::SnapToFloor(float maxTravelDistance) {
    return false;
}

void ATarBaseKinematicCharacter::SmoothTeleportToComponent(float Duration, USceneComponent* TargetComponent, const FName& BoneName, const FTransform& targetTransform, TEnumAsByte<ETarMovementMode> exitMode, TEnumAsByte<ETarMovementMode> fakeMode, bool bShouldAttach) {
}

void ATarBaseKinematicCharacter::SmoothTeleportTo(float Duration, const FTransform& targetTransform, TEnumAsByte<ETarMovementMode> exitMode, TEnumAsByte<ETarMovementMode> fakeMode) {
}

void ATarBaseKinematicCharacter::SetMovementMode(TEnumAsByte<ETarMovementMode> NewMovementMode, uint8 NewCustomMode) {
}

void ATarBaseKinematicCharacter::PhysicsVolumeChanged(APhysicsVolume* NewVolume) {
}

void ATarBaseKinematicCharacter::OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ATarBaseKinematicCharacter::OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool ATarBaseKinematicCharacter::IsWading() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsTeleporting() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsSwimming() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsOnGround() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsJumping() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsInWater() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsInCombatMode() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsGroundedNotMoving() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsGroundedMoving() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsFalling() const {
    return false;
}

bool ATarBaseKinematicCharacter::IsCrouching() const {
    return false;
}

bool ATarBaseKinematicCharacter::HasOverlapTag(FName TagName) const {
    return false;
}

float ATarBaseKinematicCharacter::GetWaterSubmersionDepth() const {
    return 0.0f;
}

float ATarBaseKinematicCharacter::GetSpeed2D() const {
    return 0.0f;
}

float ATarBaseKinematicCharacter::GetSpeed() const {
    return 0.0f;
}

float ATarBaseKinematicCharacter::GetMovementModeTimer() const {
    return 0.0f;
}

TEnumAsByte<ETarMovementMode> ATarBaseKinematicCharacter::GetMovementMode() const {
    return TAR_MOVE_None;
}

FVector ATarBaseKinematicCharacter::GetLastFallLandLocation() const {
    return FVector{};
}

float ATarBaseKinematicCharacter::GetLastFallHeightZ() const {
    return 0.0f;
}

FVector ATarBaseKinematicCharacter::GetFloorAdjustedCapsuleBaseLocation() const {
    return FVector{};
}

uint8 ATarBaseKinematicCharacter::GetCustomMovementSubMode() const {
    return 0;
}

UPrimitiveComponent* ATarBaseKinematicCharacter::GetCurrentFloorComponent() const {
    return NULL;
}

AActor* ATarBaseKinematicCharacter::GetCurrentFloorActor() const {
    return NULL;
}

void ATarBaseKinematicCharacter::ForceMoveToLocation(FVector WorldLocation, float Speed) {
}

void ATarBaseKinematicCharacter::CancelForceMoveToLocation() {
}

void ATarBaseKinematicCharacter::AddRadialImpulse(const FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange) {
}

void ATarBaseKinematicCharacter::AddRadialForce(const FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff) {
}

void ATarBaseKinematicCharacter::AddImpulse(FVector Impulse, bool bVelocityChange) {
}

void ATarBaseKinematicCharacter::AddForce(FVector Force) {
}


