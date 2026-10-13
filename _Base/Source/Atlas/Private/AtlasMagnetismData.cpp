#include "AtlasMagnetismData.h"

FAtlasMagnetismData::FAtlasMagnetismData() {
    this->CurrentActiveMagnetismVolume = NULL;
    this->magnetismSimilarityMax = 0.00f;
    this->magnetismSimilarityMinController = 0.00f;
    this->magnetismSimilarityMinKeyboard = 0.00f;
    this->bEnabled = false;
}

