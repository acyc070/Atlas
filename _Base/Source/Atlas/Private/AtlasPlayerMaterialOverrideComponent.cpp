#include "AtlasPlayerMaterialOverrideComponent.h"

UAtlasPlayerMaterialOverrideComponent::UAtlasPlayerMaterialOverrideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerReference = NULL;
    this->PlayerMesh = NULL;
    this->PlayerOriginalMaterials[0] = NULL;
    this->PlayerOriginalMaterials[1] = NULL;
    this->PlayerOriginalMaterials[2] = NULL;
    this->PlayerOriginalMaterials[3] = NULL;
    this->DynamicVertexTextures[0] = NULL;
    this->DynamicVertexTextures[1] = NULL;
    this->DynamicVertexTextures[2] = NULL;
    this->DynamicVertexTextures[3] = NULL;
    this->PerlinNoiseTexture = NULL;
    this->bCanEverBeActivated = true;
}

void UAtlasPlayerMaterialOverrideComponent::UnsetMaterialOverride(EAtlasPlayerMaterialSection MaterialSectionToUnset) {
}

void UAtlasPlayerMaterialOverrideComponent::SetMaterialOverride(EAtlasPlayerMaterialSection MaterialSection, float OverrideDuration) {
}

void UAtlasPlayerMaterialOverrideComponent::ColorizeVertecesInRadius(FColor Color, FVector WorldLocation, float Radius, bool bUseFalloff, EAtlasMaterialVertexPaintMode VertexPaintMode, float Duration) {
}


