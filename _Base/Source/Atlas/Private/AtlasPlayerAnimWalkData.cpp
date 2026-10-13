#include "AtlasPlayerAnimWalkData.h"

FAtlasPlayerAnimWalkData::FAtlasPlayerAnimWalkData() {
    this->bIsIdle = false;
    this->bWantsToSprint = false;
    this->bIsSideStepping = false;
    this->SprintAmount = 0.00f;
    this->SprintAcceleration = 0.00f;
    this->InvTurnCircleRadius = 0.00f;
    this->VelocityAngle = 0.00f;
    this->Speed = 0.00f;
    this->WalkCycleStartRatio = 0.00f;
    this->CrouchAmount = 0.00f;
    this->CrouchTransBlend = 0.00f;
}

