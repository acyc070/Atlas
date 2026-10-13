#include "AtlasPlayerSwingInterface.h"

UAtlasPlayerSwingInterface::UAtlasPlayerSwingInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HangableMaximumForwardReach = 50.00f;
    this->MinimumInputForPassiveJumpOff = 0.50f;
    this->IKHandSpacing = 15.00f;
    this->GrabHelper = NULL;
    this->IkinemaRetargeting = NULL;
}


