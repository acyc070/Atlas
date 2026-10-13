#include "TarMovementParams.h"

FTarMovementParams::FTarMovementParams() {
    this->MaxAcceleration = 0.00f;
    this->MaxRotationRate = 0.00f;
    this->bLimitTurnRate = false;
    this->BrakingDeceleration = 0.00f;
    this->Friction = 0.00f;
}

