#include "AtlasLever.h"

UAtlasLever::UAtlasLever(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGrabbableFromFront = true;
    this->bGrabbableFromBack = true;
    this->LeverIdle = NULL;
    this->LeverPullPushLeft = NULL;
    this->LeverPullPushRight = NULL;
    this->SwitchOnValue = 0.90f;
    this->SwitchOffValue = 0.10f;
    this->AngleBetweenClickEvents = 7;
    this->MoveDegreesPerSecond = 75.00f;
    this->AccelerationDegreesPerSecond = 350.00f;
    this->InitialAngle = 0.00f;
}

bool UAtlasLever::IsOn() const {
    return false;
}

float UAtlasLever::GetAngleFraction() const {
    return 0.0f;
}


