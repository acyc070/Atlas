#include "AtlasMovementAssistanceVolume.h"

AAtlasMovementAssistanceVolume::AAtlasMovementAssistanceVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedPlayerPawn = NULL;
    this->CachedPlayerController = NULL;
    this->bKeyboardOnly = true;
    this->RelativeOrientation = 0.00f;
    this->Priority = 0;
}

void AAtlasMovementAssistanceVolume::OnPlayerSpawn(AAtlasPlayer* playerPawn) {
}


