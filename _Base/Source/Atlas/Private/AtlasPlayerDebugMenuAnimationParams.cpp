#include "AtlasPlayerDebugMenuAnimationParams.h"

FAtlasPlayerDebugMenuAnimationParams::FAtlasPlayerDebugMenuAnimationParams() {
    this->PrintCurrentLocomotionSet = false;
    this->PrintAnimationOverrideData = false;
    this->DrawPlayerDragAnimationData = false;
    this->ProcessWalkStopAnimations = false;
    this->DisplayWalkCycle = false;
    this->AudioTestAnimation = NULL;
    this->bEnableLookAt = false;
}

