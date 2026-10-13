#include "AISearchBehaviorParameters.h"

FAISearchBehaviorParameters::FAISearchBehaviorParameters() {
    this->MinSearchRadius = 0.00f;
    this->MaxSearchRadius = 0.00f;
    this->MinPlayerAwarenessRadius = 0.00f;
    this->MaxPlayerAwarenessRadius = 0.00f;
    this->AlertnessWindDown = 0.00f;
    this->UnalertFactor = 0.00f;
    this->WalkAlertnessIncrease = 0.00f;
    this->SprintAlertnessIncrease = 0.00f;
    this->JumpAlertnessIncrease = 0.00f;
    this->LandAlertnessIncrease = 0.00f;
    this->PlayerAlertnessFactor = 0.00f;
    this->NodeAlertnessFactor = 0.00f;
    this->NodeEvaluationPower = 0.00f;
    this->MinNodeValueFactor = 0.00f;
    this->NodeDistanceFalloff = 0.00f;
}

