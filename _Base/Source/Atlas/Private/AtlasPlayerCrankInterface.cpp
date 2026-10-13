#include "AtlasPlayerCrankInterface.h"

UAtlasPlayerCrankInterface::UAtlasPlayerCrankInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxDistanceErrorToCompleteInit = 15.00f;
    this->CrankComponent = NULL;
    this->GrabHelper = NULL;
}


