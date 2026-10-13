#include "AtlasWorldSettings.h"

AAtlasWorldSettings::AAtlasWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FogManager = NULL;
    this->CrouchZoomFactor = 0.10f;
    this->HorizontalDegrees = 20.00f;
    this->VerticalDegrees = 15.00f;
    this->UnlockLerpTime = 2.00f;
    this->GlobalPositionLerp = 2.00f;
    this->IsMapPausable = true;
    this->RoomBoundsInset = 0.00f;
}


