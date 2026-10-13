#include "AtlasUICalloutComponent.h"

UAtlasUICalloutComponent::UAtlasUICalloutComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->DetectionRadius = 300.00f;
    this->DisplayText = TEXT("Prompt");
}

float UAtlasUICalloutComponent::GetDisplayAlpha() const {
    return 0.0f;
}


