#include "AtlasPlayerDebugMenuMovementParams.h"

FAtlasPlayerDebugMenuMovementParams::FAtlasPlayerDebugMenuMovementParams() {
    this->PrintPlayerLocationData = false;
    this->PrintPlayerMovementData = false;
    this->DrawPlayerVelocities = false;
    this->DrawPlayerSprintBar = false;
    this->PrintCrouchData = false;
    this->DrawPlayerTurnData = false;
    this->PrintPlatformEdgeData = false;
    this->DrawPlayerWalkStartData = false;
    this->DrawPlayerDizzyData = false;
    this->DrawPlayerJumpAndFallData = false;
    this->DrawJumpAlignment = false;
    this->DrawPlayerLocationTarget = false;
    this->PrintPreserveCameraSpaceStateChange = false;
}

