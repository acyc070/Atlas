#include "AtlasNoise.h"

UAtlasNoise::UAtlasNoise() {
    this->NoiseOwner = NULL;
    this->NoiseInstigator = NULL;
}

float UAtlasNoise::GetNoiseLevelAtLocation(const FVector& Location) const {
    return 0.0f;
}


