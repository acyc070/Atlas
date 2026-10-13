#include "AtlasPlayer.h"
#include "TarAnimationListenerComponent.h"
#include "AtlasLookAtComponent.h"
#include "AtlasPhysicsInterfaceComponent.h"
#include "AtlasPlayerAIAwarenessComponent.h"
#include "AtlasPlayerAnimationOverrideComponent.h"
#include "AtlasPlayerCarryInterface.h"
#include "AtlasPlayerClimbInterface.h"
#include "AtlasPlayerCrankInterface.h"
#include "AtlasPlayerCrouchComponent.h"
#include "AtlasPlayerCustomizationComponent.h"
#include "AtlasPlayerDamageComponent.h"
#include "AtlasPlayerDragInterface.h"
#include "AtlasPlayerHideawayInterface.h"
#include "AtlasPlayerJumpModifierComponent.h"
#include "AtlasPlayerLedgeInterface.h"
#include "AtlasPlayerLeverInterface.h"
#include "AtlasPlayerLighterComponent.h"
#include "AtlasPlayerMaterialOverrideComponent.h"
#include "AtlasPlayerMovementModifierComponent.h"
#include "AtlasPlayerSpawnHandlerComponent.h"
#include "AtlasPlayerSqueezeGapComponent.h"
#include "AtlasPlayerStaminaComponent.h"
#include "AtlasPlayerSwingInterface.h"
#include "AtlasPlayerWalkStartComponent.h"
#include "BikRetargetingComponent.h"

AAtlasPlayer::AAtlasPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanCrouch = true;
    this->ClimbInterface = CreateDefaultSubobject<UAtlasPlayerClimbInterface>(TEXT("ClimbInterface"));
    this->DragInterface = CreateDefaultSubobject<UAtlasPlayerDragInterface>(TEXT("DragInterface"));
    this->CarryInterface = CreateDefaultSubobject<UAtlasPlayerCarryInterface>(TEXT("CarryInterface"));
    this->CrankInterface = CreateDefaultSubobject<UAtlasPlayerCrankInterface>(TEXT("CrankInterface"));
    this->LeverInterface = CreateDefaultSubobject<UAtlasPlayerLeverInterface>(TEXT("LeverInterface"));
    this->LedgeInterface = CreateDefaultSubobject<UAtlasPlayerLedgeInterface>(TEXT("LedgeInterface"));
    this->SwingInterface = CreateDefaultSubobject<UAtlasPlayerSwingInterface>(TEXT("SwingInterface"));
    this->HideawayInterface = CreateDefaultSubobject<UAtlasPlayerHideawayInterface>(TEXT("HideawayInterface"));
    this->SpawnHandler = CreateDefaultSubobject<UAtlasPlayerSpawnHandlerComponent>(TEXT("SpawnHandler"));
    this->CrouchComponent = CreateDefaultSubobject<UAtlasPlayerCrouchComponent>(TEXT("CrouchComponent"));
    this->DamageComponent = CreateDefaultSubobject<UAtlasPlayerDamageComponent>(TEXT("DamageComponent"));
    this->LighterComponent = CreateDefaultSubobject<UAtlasPlayerLighterComponent>(TEXT("LighterComponent"));
    this->StaminaComponent = CreateDefaultSubobject<UAtlasPlayerStaminaComponent>(TEXT("StaminaComponent"));
    this->MovementModifierComponent = CreateDefaultSubobject<UAtlasPlayerMovementModifierComponent>(TEXT("MovementModifierComponent"));
    this->JumpModifierComponent = CreateDefaultSubobject<UAtlasPlayerJumpModifierComponent>(TEXT("JumpModifierComponent"));
    this->BikRetargeting = CreateDefaultSubobject<UBikRetargetingComponent>(TEXT("IKRetargeting"));
    this->LookAtComponent = CreateDefaultSubobject<UAtlasLookAtComponent>(TEXT("LookAtComponent"));
    this->WalkStartComponent = CreateDefaultSubobject<UAtlasPlayerWalkStartComponent>(TEXT("WalkStartComponent"));
    this->SqueezeGapComponent = CreateDefaultSubobject<UAtlasPlayerSqueezeGapComponent>(TEXT("SqueezeGapComponent"));
    this->AIAwarenessComponent = CreateDefaultSubobject<UAtlasPlayerAIAwarenessComponent>(TEXT("AIAwarenessComponent"));
    this->AnimationOverrideComponent = CreateDefaultSubobject<UAtlasPlayerAnimationOverrideComponent>(TEXT("AnimationOverrideComponent"));
    this->AnimationListenerComponent = CreateDefaultSubobject<UTarAnimationListenerComponent>(TEXT("AnimationListener"));
    this->CustomizationComponent = CreateDefaultSubobject<UAtlasPlayerCustomizationComponent>(TEXT("CustomizationComponent"));
    this->PhysicsInterface = CreateDefaultSubobject<UAtlasPhysicsInterfaceComponent>(TEXT("PhysicsInterface"));
    this->MaterialOverrideComponent = CreateDefaultSubobject<UAtlasPlayerMaterialOverrideComponent>(TEXT("MaterialOverrideComponent"));
    this->AtlasController = NULL;
    this->MaxSubmersionDepth = 80.00f;
    this->GrabReachBackOffset = -0.00f;
    this->GrabReachBackDepth = 100.00f;
    this->GrabReachBackRadius = 50.00f;
    this->GrabReachBackHeight = 50.00f;
    this->GrabReachRadius = 50.00f;
    this->GrabReachAboveHead = 20.00f;
    this->GrabReachBelowFeet = 10.00f;
    this->MaxGrabFallType = ATLAS_PLAYER_FALL_MEDIUM;
    this->FallDistances[0] = -340282346638528859811704183484516925440.00f;
    this->FallDistances[1] = -340282346638528859811704183484516925440.00f;
    this->FallDistances[2] = -340282346638528859811704183484516925440.00f;
    this->FallDistances[3] = -340282346638528859811704183484516925440.00f;
    this->FallDistances[4] = -340282346638528859811704183484516925440.00f;
    this->AirControlWhenStill = 0.05f;
    this->MinAirSpeed2DToOrientMovement = 200.00f;
    this->FallBounceOffWallMinSpeed = 500.00f;
    this->FallBounceOffWallMaxNormalAngle = 15.00f;
    this->FallOrientationMaxControlAngle = 45.00f;
    this->FallOrientationMinVeloctiyAngle = 75.00f;
    this->CurrentGrabInterface = NULL;
    this->CurrentActiveRoomVolume = NULL;
    this->bUseCapsuleForJumpPrediction = true;
    this->LookAtComponent->SetupAttachment(RootComponent);
}

bool AAtlasPlayer::WantsToGrab() const {
    return false;
}

void AAtlasPlayer::SetGrabEnabled(bool Enabled) {
}

void AAtlasPlayer::RestoreHeadCollision() {
}

void AAtlasPlayer::RemoveMagnetismParams(AActor* Volume) {
}

void AAtlasPlayer::RemoveActiveSamplePerPixelVolume(AActor* Volume) {
}

void AAtlasPlayer::OnWalkStartCompleted(EAtlasPlayerWalkStartType Type) {
}

void AAtlasPlayer::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAtlasPlayer::OnDeath(TEnumAsByte<EAtlasPlayerDeathType> deathType) {
}

void AAtlasPlayer::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAtlasPlayer::Kill(TEnumAsByte<EAtlasPlayerDeathType> deathType) {
}

bool AAtlasPlayer::IsOverlappingWith(UBoxComponent* BoxCollision, float forwardOffset, float yRadius, bool bDrawDebug) const {
    return false;
}

bool AAtlasPlayer::IsGrabbingType(TEnumAsByte<EAtlasGrabbableType> Type) const {
    return false;
}

bool AAtlasPlayer::IsGrabbing() const {
    return false;
}

bool AAtlasPlayer::IsDead() const {
    return false;
}

int32 AAtlasPlayer::GetNumActiveSamplePerPixelVolumes() const {
    return 0;
}

TEnumAsByte<EAtlasPlayerJumpType> AAtlasPlayer::GetLastJumpType() const {
    return ATLAS_JUMP_Standing;
}

TEnumAsByte<EAtlasPlayerFallType> AAtlasPlayer::GetLastFallType() const {
    return ATLAS_PLAYER_FALL_LIGHT;
}

float AAtlasPlayer::GetFootIkBlendInTime(float DeltaSeconds, float DefaultBlendTime) {
    return 0.0f;
}

TEnumAsByte<EAtlasPlayerDeathType> AAtlasPlayer::GetDeathType() const {
    return ATLAS_PLAYER_DEATH_TYPE_None;
}

UAtlasPlayerGrabInterface* AAtlasPlayer::GetCurrentGrabInterface() const {
    return NULL;
}

AAtlasPlayerController* AAtlasPlayer::GetAtlasPlayerController() const {
    return NULL;
}

void AAtlasPlayer::ForceReleaseGrab() {
}

void AAtlasPlayer::AddMagnetismParams(const FAtlasMagnetismData& Data) {
}

void AAtlasPlayer::AddActiveSamplePerPixelVolume(AActor* Volume) {
}


