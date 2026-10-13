#include "AtlasDLCLevels.h"

UAtlasDLCLevels::UAtlasDLCLevels() {
}

bool UAtlasDLCLevels::IsDLCLevel(const FName& InLevel) {
    return false;
}

EAtlasDLC UAtlasDLCLevels::GetDLCEnum(const FName& InLevel) {
    return EAtlasDLC::ScarecrowMask;
}


