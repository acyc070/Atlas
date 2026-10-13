#include "AtlasControlsRemappingScreen.h"

UAtlasControlsRemappingScreen::UAtlasControlsRemappingScreen() {
}

void UAtlasControlsRemappingScreen::ResetMappingArrays() {
}

FTarInputAxisKeyMapping UAtlasControlsRemappingScreen::GetNextAvailableAxisMapping(const FName& AxisName, float Scale) {
    return FTarInputAxisKeyMapping{};
}

FTarInputActionKeyMapping UAtlasControlsRemappingScreen::GetNextAvailableActionMapping(const FName& ActionName) {
    return FTarInputActionKeyMapping{};
}


