#include "AtlasPlayerAnimClimbData.h"

FAtlasPlayerAnimClimbData::FAtlasPlayerAnimClimbData() {
    this->bIsGrabbing = false;
    this->bWantClimbUp = false;
    this->bWantClimbDown = false;
    this->bWantClimbLeft = false;
    this->bWantClimbRight = false;
    this->bMovementBlockedReach = false;
    this->bWantReturnToPreviousRest = false;
    this->bIsAtTop = false;
    this->bIsJumpOffPrepare = false;
    this->bJumpOffTurnRight = false;
    this->AnimPlayRate = 0.00f;
    this->DropOffAnimPlayRate = 0.00f;
    this->InitType = EAtlasPlayerClimbInitAnimType::None;
    this->InitAngle = 0.00f;
    this->InitCrouchAmount = 0.00f;
}

