#include "AtlasPlayerDebugMenuGameplayModifiers.h"

FAtlasPlayerDebugMenuGameplayModifiers::FAtlasPlayerDebugMenuGameplayModifiers() {
    this->EnableIkinema = false;
    this->EnableIkinemaFootPlacement = false;
    this->UseIkinemaForClimbingLadders = false;
    this->EnableCarryIK = false;
    this->JumpAlignmentEnabled = false;
    this->AllowBlockingOnPlatformEdges = false;
    this->bPreserveCameraSpace = false;
    this->InputAngleNeededToSwitchCameraSpace = 0.00f;
    this->EnableLighterCollisionDetection = false;
    this->bEnabledLedgeClimbBlockingTest = false;
    this->bPetrifyLethal = false;
    this->bCanBiteCarryables = false;
    this->ClimbStandGrabInstantRelease = false;
    this->bToggleGrab = false;
}

