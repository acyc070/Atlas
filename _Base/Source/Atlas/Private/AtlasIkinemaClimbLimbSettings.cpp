#include "AtlasIkinemaClimbLimbSettings.h"

FAtlasIkinemaClimbLimbSettings::FAtlasIkinemaClimbLimbSettings() {
    this->TaskId = EBikTaskIdentifier::IK_TARGET_LEFT_FOOT;
    this->CurrentGrabHelper = NULL;
    this->PreviousGrabHelper = NULL;
}

