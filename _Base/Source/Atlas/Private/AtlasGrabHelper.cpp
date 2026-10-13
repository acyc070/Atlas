#include "AtlasGrabHelper.h"

UAtlasGrabHelper::UAtlasGrabHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bHiddenInGame = true;
    this->bOverrideClimbSpringParams = false;
    this->bOverrideGrabMaterial = false;
    this->GrabMaterialOverride = EAtlasGrabHelperMaterial::None;
    this->Length = -1.00f;
}

void UAtlasGrabHelper::SetAsRing(float Radius, float Thickness) {
}

void UAtlasGrabHelper::SetAsPushPanel(float NewLength, float Height) {
}

void UAtlasGrabHelper::SetAsBar(float NewLength, float Thickness) {
}

void UAtlasGrabHelper::GetRingProperties(float& Radius, float& Thickness) const {
}

void UAtlasGrabHelper::GetPushPanelProperties(float& NewLength, float& Height) const {
}

void UAtlasGrabHelper::GetBarProperties(float& NewLength, float& Thickness) const {
}


