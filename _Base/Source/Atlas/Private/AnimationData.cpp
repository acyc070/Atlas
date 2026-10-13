#include "AnimationData.h"

FAnimationData::FAnimationData() {
    this->Animation = NULL;
    this->bLoop = false;
    this->bIsPlaying = false;
    this->bIsMontage = false;
    this->TimeRemaining = 0.00f;
    this->TimeRemainingRatio = 0.00f;
    this->CurrentTime = 0.00f;
}

