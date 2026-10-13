#include "AtlasFloatableComponent.h"

UAtlasFloatableComponent::UAtlasFloatableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bHiddenInGame = true;
    this->DepthExtent = 200.00f;
    this->CenteredBouyancyRatio = 0.00f;
    this->LinearDamping = 2.00f;
    this->AngularDamping = 4.00f;
    this->bSimulateBobbing = false;
    this->bUseSeawaveRotation = false;
    this->Frequency = 1.00f;
    this->Amplitude = 0.02f;
    this->InterpSpeed = 1.00f;
    this->bEnabled = true;
    this->bCanKillWhenOnTop = false;
    this->bBumpEnabled = true;
    this->BumpModifier = 1.00f;
    this->JumpModifier = 1.00f;
    this->bPostBumpLurkEnabled = false;
}

void UAtlasFloatableComponent::ReenableWalkable() {
}

void UAtlasFloatableComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UAtlasFloatableComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPrimitiveComponent* UAtlasFloatableComponent::GetParentPrimitiveComponent() const {
    return NULL;
}

UPrimitiveComponent* UAtlasFloatableComponent::GetOwnerPrimitiveComponent() const {
    return NULL;
}


