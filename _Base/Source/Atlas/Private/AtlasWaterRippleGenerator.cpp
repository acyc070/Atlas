#include "AtlasWaterRippleGenerator.h"

UAtlasWaterRippleGenerator::UAtlasWaterRippleGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPermanentRippleGenerator = true;
    this->RippleRadius = 1.00f;
    this->RippleStrength = 0.50f;
    this->RipplesPerSecond = 1000.00f;
    this->bVelocityAffectsRippleStrength = true;
    this->WaterRippleComponent = NULL;
}

void UAtlasWaterRippleGenerator::FirstTick() {
}


