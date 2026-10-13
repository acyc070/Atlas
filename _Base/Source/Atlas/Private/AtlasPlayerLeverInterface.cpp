#include "AtlasPlayerLeverInterface.h"

UAtlasPlayerLeverInterface::UAtlasPlayerLeverInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ForwardsDisplacement = 50.00f;
    this->MaxDistanceErrorToCompleteInit = 15.00f;
    this->GrabHeight = 70.00f;
    this->LeverComponent = NULL;
    this->GrabHelper = NULL;
}


