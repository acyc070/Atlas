#include "SoundData.h"

FSoundData::FSoundData() {
    this->PathDistanceToSix = 0.00f;
    this->PathDistanceFromGoalToSix = 0.00f;
    this->PathDistanceToGoal = 0.00f;
    this->bIsApproachingSix = false;
    this->bIsInSameRoom = false;
    this->CloseDistance = 0.00f;
    this->bIsInSameRoomOrClose = false;
}

