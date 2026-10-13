#include "AtlasPlayerGrabInterface.h"

UAtlasPlayerGrabInterface::UAtlasPlayerGrabInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxInitializationTime = 0.00f;
    this->MinRegrabTime = 0.00f;
    this->GlobalMinRegrabTime = 0.00f;
    this->playerPawn = NULL;
    this->grabbedComponent = NULL;
    this->PreviousGrabbedComponent = NULL;
    this->SeawaveComponent = NULL;
}

bool UAtlasPlayerGrabInterface::IsPassiveGrab() const {
    return false;
}

FVector UAtlasPlayerGrabInterface::GetGrabVelocity() const {
    return FVector{};
}

UAtlasGrabbable* UAtlasPlayerGrabInterface::GetGrabbedComponent() const {
    return NULL;
}

AActor* UAtlasPlayerGrabInterface::GetGrabbedActor() const {
    return NULL;
}


