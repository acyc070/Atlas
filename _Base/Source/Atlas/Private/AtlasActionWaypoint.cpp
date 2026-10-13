#include "AtlasActionWaypoint.h"
#include "Components/SceneComponent.h"
#include "Components/SphereComponent.h"

AAtlasActionWaypoint::AAtlasActionWaypoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->bEnabled = true;
    this->bAttachActor = false;
    this->bSprintToLocation = false;
    this->bForceAction = false;
    this->bObserveWaypoint = false;
    this->bUseAtlasTriggerVolumePreset = false;
    this->AcceptanceRadius = 10.00f;
    this->ActivationRadius = 100.00f;
    this->bOverrideDefaultTeleportTime = false;
    this->TeleportTime = 0.10f;
    this->bFilterByMovementMode = false;
    this->MovementModeFilter = MOVE_Walking;
    this->RootMotionMovementMode = MOVE_Flying;
    this->ExitMovementMode = MOVE_Walking;
    this->NextAction = NULL;
    this->Animation = NULL;
    this->bLoop = false;
    this->ActivationSphere = CreateDefaultSubobject<USphereComponent>(TEXT("ActivationSphere"));
    this->ActivationSphere->SetupAttachment(RootComponent);
}

void AAtlasActionWaypoint::UpdateBlendSpaceInput(FVector2D NewInput) {
}

void AAtlasActionWaypoint::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}







UBlendSpaceBase* AAtlasActionWaypoint::GetBlendSpace() {
    return NULL;
}

UAnimSequence* AAtlasActionWaypoint::GetAnimSequence() {
    return NULL;
}

UAnimMontage* AAtlasActionWaypoint::GetAnimMontage() {
    return NULL;
}

void AAtlasActionWaypoint::EnableWaypoint(bool bUpdateOverlaps) {
}

void AAtlasActionWaypoint::DisableWaypoint() {
}


