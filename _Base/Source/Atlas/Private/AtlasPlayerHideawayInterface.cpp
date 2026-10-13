#include "AtlasPlayerHideawayInterface.h"

UAtlasPlayerHideawayInterface::UAtlasPlayerHideawayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxTeleportTime = 0.40f;
    this->MaxTeleportDist = 45.00f;
    this->MaxTeleportRotation = 80.00f;
    this->MaxVelocityAngle = 70.00f;
    this->HideawayComponent = NULL;
}

void UAtlasPlayerHideawayInterface::NotifyExitComplete(const FName& NotifyName) {
}

void UAtlasPlayerHideawayInterface::NotifyEnterComplete(const FName& NotifyName) {
}

bool UAtlasPlayerHideawayInterface::IsFallingFromExit() const {
    return false;
}


