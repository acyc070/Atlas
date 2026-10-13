#include "AIPursuitBehaviorParameters.h"

FAIPursuitBehaviorParameters::FAIPursuitBehaviorParameters() {
    this->TimeToTire = 0.00f;
    this->MaxPredictionAngle = 0.00f;
    this->TurnWeightCoefficent = 0.00f;
    this->TimeToLosePlayer = 0.00f;
    this->bAllowedToUpdateLedgeLocation = false;
    this->ChangeLedgeCooldown = 0.00f;
    this->CloseTurnDistance = 0.00f;
    this->CloseTurnAngleLimit = 0.00f;
    this->CantReachAnimation = NULL;
}

