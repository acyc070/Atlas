#include "TarVibrationEventParams.h"

FTarVibrationEventParams::FTarVibrationEventParams() {
    this->LargeMotor = 0;
    this->SmallMotor = 0;
    this->Curve = TAR_VIBRATION_CONSTANT;
    this->Duration = 0.00f;
    this->HdRumbleType = EAtlasHDRumbleType::Lighter;
}

