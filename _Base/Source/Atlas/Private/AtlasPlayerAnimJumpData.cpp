#include "AtlasPlayerAnimJumpData.h"

FAtlasPlayerAnimJumpData::FAtlasPlayerAnimJumpData() {
    this->bIsActive = false;
    this->VelocityAngle = 0.00f;
    this->Speed = 0.00f;
    this->BlendSpace = NULL;
    this->AnimationLow = NULL;
    this->AnimationHigh = NULL;
    this->HighJumpBlendAmount = 0.00f;
}

