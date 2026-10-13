#include "AtlasPlayerAnimSwimData.h"

FAtlasPlayerAnimSwimData::FAtlasPlayerAnimSwimData() {
    this->bIsIdle = false;
    this->bIsStopping = false;
    this->StopAnimIndex = 0;
    this->TargetAngle = 0.00f;
    this->FixedTargetAngle = 0.00f;
    this->Speed = 0.00f;
}

