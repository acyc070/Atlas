#include "VisionParameters.h"

FVisionParameters::FVisionParameters() {
    this->SightDistance = 0.00f;
    this->PeripheralVisionAngle = 0.00f;
    this->PeripheralTunnelVisionAngle = 0.00f;
    this->TimePlayerSeenBeforeAlertedReaction = 0.00f;
    this->TimePlayerSeenBeforeAnyReaction = 0.00f;
    this->TimeAISeesPlayerAfterLosingSight = 0.00f;
    this->MaxAngleBias = 0.00f;
    this->DistanceAngleBiasModifier = 0.00f;
    this->LookAtStiffness = 0.00f;
    this->ExtraCenterViewRange = 0.00f;
    this->LighterVisionModifier = 0.00f;
}

