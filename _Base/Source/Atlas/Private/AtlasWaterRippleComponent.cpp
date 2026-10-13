#include "AtlasWaterRippleComponent.h"

UAtlasWaterRippleComponent::UAtlasWaterRippleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshComponentMaterialIndex = -1;
    this->MeshComponent = NULL;
    this->TimeBetweenTicks = 0.01f;
    this->DecayRate = 0.99f;
    this->HertzVal = 0.60f;
    this->EnergyTransferVal = 0.10f;
    this->bAutoGenerateTextureDimension = true;
    this->TextureResolutionPerUnit = 0.10f;
    this->AsyncTasksToUseNb = 8;
    this->DynamicRippleMaterial = NULL;
    this->DynamicRippleTexture = NULL;
}

void UAtlasWaterRippleComponent::SetShouldUpdate(bool shouldUpdate) {
}

bool UAtlasWaterRippleComponent::IsInsideWaterRippleTexture(FVector WorldLocation) const {
    return false;
}

bool UAtlasWaterRippleComponent::GetCellLocation(FVector WorldLocation, int32& cellX, int32& cellY) const {
    return false;
}

void UAtlasWaterRippleComponent::GenerateWaterRipple(FVector WorldLocation, float Radius, float Strength) {
}


