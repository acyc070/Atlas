#include "AtlasDLCPlayerCarryInterface.h"

UAtlasDLCPlayerCarryInterface::UAtlasDLCPlayerCarryInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxStandingPickUpHeight = 90.00f;
    this->MaxItemSlotPickUpHeight = 140.00f;
    this->MaxNomeThrowInputTime = 0.95f;
}


