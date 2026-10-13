#include "AtlasNoiseSettings.h"

FAtlasNoiseSettings::FAtlasNoiseSettings() {
    this->CutOfNoiseAtMaxRadius = false;
    this->Lifetime = 0.00f;
    this->FalloffType = EAtlasNoiseFalloff::Linear;
}

