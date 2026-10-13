#include "AtlasStateComponent.h"

UAtlasStateComponent::UAtlasStateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bSaveActorTransform = false;
    this->bOverrideBlockName = false;
}


