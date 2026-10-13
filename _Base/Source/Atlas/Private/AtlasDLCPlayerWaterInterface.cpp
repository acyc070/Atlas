#include "AtlasDLCPlayerWaterInterface.h"

UAtlasDLCPlayerWaterInterface::UAtlasDLCPlayerWaterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinWadingDepth = 20.00f;
    this->playerPawn = NULL;
    this->CurrentWaterVolume = NULL;
}

void UAtlasDLCPlayerWaterInterface::OnSwimLandingComplete(const FName& NotifyName) {
}


