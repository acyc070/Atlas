#include "AtlasRoomVolumeBase.h"

AAtlasRoomVolumeBase::AAtlasRoomVolumeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->Priority = 0;
    this->bEnabled = true;
    this->bIgnoreLighterBlend = false;
    this->ExplorationHorizontalDegreesScale = 1.00f;
    this->ExplorationVerticalDegreesScale = 1.00f;
}


