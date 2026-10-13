#include "AtlasLookAtComponent.h"

UAtlasLookAtComponent::UAtlasLookAtComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EnableDebugDraw = false;
    this->ViewDistance = 900.00f;
    this->CurrentPOI = NULL;
}

void UAtlasLookAtComponent::UnsetOverride() {
}

void UAtlasLookAtComponent::SetOverrideToWorldLocation(FVector worldSpaceLocation) {
}

void UAtlasLookAtComponent::SetOverrideToSkeletalMesh(USkeletalMeshComponent* SkeletalMesh, FName BoneName, FVector RelativeOffset) {
}

void UAtlasLookAtComponent::SetOverrideToComponent(USceneComponent* Component, FVector RelativeOffset) {
}

void UAtlasLookAtComponent::SetOverrideToActor(AActor* Actor, FVector RelativeOffset) {
}

bool UAtlasLookAtComponent::HasValidLookAtTarget() const {
    return false;
}

FVector UAtlasLookAtComponent::GetLookAtWorldLocation() const {
    return FVector{};
}

FRotator UAtlasLookAtComponent::GetLookAtTargetRotation() const {
    return FRotator{};
}

UAtlasPointOfInterestComponent* UAtlasLookAtComponent::GetCurrentPointOfInterest() const {
    return NULL;
}


