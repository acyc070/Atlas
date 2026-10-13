#include "AtlasAIDebugParams.h"

FAtlasAIDebugParams::FAtlasAIDebugParams() {
    this->ShowPath = false;
    this->PrintAlertness = false;
    this->PrintState = false;
    this->PrintSeesSix = false;
    this->PrintQuestStack = false;
    this->DrawVisionCone = false;
    this->PrintInSameRoom = false;
    this->ShowQuestConnections = false;
    this->ShowBasicAIAvoidanceGraphics = false;
    this->DrawGrabSweep = false;
    this->DrawLastSensedLocation = false;
    this->DrawIKPositions = false;
    this->ShowSnapshotData = false;
    this->DrawCurrentLedge = false;
    this->ShowAllowedToTouch = false;
    this->PrintDoorInteraction = false;
    this->StopMovementData = false;
    this->DrawBeyondReachLocation = false;
    this->CantReachDebugInfoEnabled = false;
    this->EnableBacksteppingOnQuests = false;
}

