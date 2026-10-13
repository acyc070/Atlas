#include "AtlasPlayerDebugMenuGrabParams.h"

FAtlasPlayerDebugMenuGrabParams::FAtlasPlayerDebugMenuGrabParams() {
    this->PrintPlayerGrabData = false;
    this->PrintPlayerGrabEvents = false;
    this->DrawGrabOverlapTest = false;
    this->DrawGrabBlockingTests = false;
    this->DrawPlayerGrabSocket = false;
    this->DrawPlayerDragData = false;
    this->DrawPlayerCarryData = false;
    this->ShowClimbDebug = false;
    this->ShowSwingDebug = false;
    this->ShowCrankDebug = false;
    this->DrawPlayerMovementExtentsOnLeverAndCrank = false;
    this->DrawClimbBlockingTests = false;
    this->PrintPlayerLedgeClimbAnimations = false;
}

