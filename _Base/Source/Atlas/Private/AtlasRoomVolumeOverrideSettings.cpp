#include "AtlasRoomVolumeOverrideSettings.h"

FAtlasRoomVolumeOverrideSettings::FAtlasRoomVolumeOverrideSettings() {
    this->OverrideCrouchZoomFactor = false;
    this->OverrideHorizontalDegrees = false;
    this->OverrideVerticalDegrees = false;
    this->OverrideGlobalPositionLerp = false;
    this->CrouchZoomFactor = 0.00f;
    this->HorizontalDegrees = 0.00f;
    this->VerticalDegrees = 0.00f;
    this->GlobalPositionLerp = 0.00f;
}

