#include "AnimNode_BikFootPlacement.h"

FAnimNode_BikFootPlacement::FAnimNode_BikFootPlacement() {
    this->BIKRig = NULL;
    this->CollisionChannel = ECC_WorldStatic;
    this->MaxHipMultiplier = 0.00f;
    this->MinHipMultiplier = 0.00f;
    this->GlobalRayTraceStartScale = 0.00f;
    this->GlobalRayTraceFinishScale = 0.00f;
    this->AimWithWeapon = false;
    this->bTraceComplex = false;
    this->AimingType = EBikAimingOptions::SingleHand;
    this->LockFreeArm = false;
    this->bReverseFootSetup = false;
    this->ReverseFootFactor = 0.00f;
    this->RollLimit = 0.00f;
    this->PitchLimit = 0.00f;
    this->PTransitionSpeed = 0.00f;
    this->RTransitionSpeed = 0.00f;
    this->PTransitionMaxDistance = 0.00f;
    this->LookAtAlpha = 0.00f;
    this->LookAtSmoothness = 0.00f;
    this->ExposeSolverTasks = false;
    this->InComponentSpace = false;
    this->ReduceWeight = false;
    this->UseLookUpAxis = false;
    this->LookUpAxis = EBikLimitAxisOption::X;
    this->LookAtClamp = 0.00f;
    this->bFloorContact = false;
    this->TraceDistance = 0.00f;
    this->bDoAtlasPlayerSlopeBehaviour = false;
    this->IgnoreFracturedDestructibles = false;
    this->bDrawDebug = false;
    this->bFootStabilization = false;
    this->StabilizationThreshold = 0.00f;
    this->GlobalDebugScale = 0.00f;
}

