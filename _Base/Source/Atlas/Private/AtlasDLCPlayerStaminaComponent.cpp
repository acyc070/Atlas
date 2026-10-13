#include "AtlasDLCPlayerStaminaComponent.h"

UAtlasDLCPlayerStaminaComponent::UAtlasDLCPlayerStaminaComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinSwimInputForFullStamiaDrain = 0.10f;
    this->StaminaSwimDrainRateMoving = 4.00f;
    this->StaminaSwimDrainRateIdle = 0.25f;
    this->DLCPlayerPawn = NULL;
}


