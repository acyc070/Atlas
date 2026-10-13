#include "HearingParameters.h"

FHearingParameters::FHearingParameters() {
    this->HearingSensitivity = 0.00f;
    this->ListenSensitivityModifier = 0.00f;
    this->ListenStrengthThreshold = 0.00f;
    this->TimeBeforeListenReactsToNewSound = 0.00f;
    this->TimeToRememberSounds = 0.00f;
    this->DefaultHearingAccuracy = 0.00f;
    this->DistanceBeforeUsingPathsForSound = 0.00f;
    this->IgnoredDistanceMagnitude = 0.00f;
    this->SoundDelay = 0.00f;
}

