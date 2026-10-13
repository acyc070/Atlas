#include "AtlasPlayerAnimLeverData.h"

FAtlasPlayerAnimLeverData::FAtlasPlayerAnimLeverData() {
    this->bShouldAnimate = false;
    this->IdleAnimSequence = NULL;
    this->PullPushLeftAnimSequence = NULL;
    this->PullPushRightAnimSequence = NULL;
    this->ExplicitTime = 0.00f;
    this->PullStrength = 0.00f;
}

