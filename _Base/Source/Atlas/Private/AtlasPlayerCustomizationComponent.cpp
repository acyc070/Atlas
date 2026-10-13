#include "AtlasPlayerCustomizationComponent.h"

UAtlasPlayerCustomizationComponent::UAtlasPlayerCustomizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanEverBeEnabled = true;
    this->bIsDlcCharacter = false;
}


