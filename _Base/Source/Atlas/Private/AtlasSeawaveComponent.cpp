#include "AtlasSeawaveComponent.h"

UAtlasSeawaveComponent::UAtlasSeawaveComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityScale_DERECATED = 0.00f;
    this->Enabled = true;
    this->NonPhysical = false;
    this->ActiveRoomVolume = NULL;
}

void UAtlasSeawaveComponent::HandleNewlyAddedRoom(AAtlasRoomVolumeBase* room) {
}


