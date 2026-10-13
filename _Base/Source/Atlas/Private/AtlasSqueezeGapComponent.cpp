#include "AtlasSqueezeGapComponent.h"

UAtlasSqueezeGapComponent::UAtlasSqueezeGapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = true;
    this->bAllowForwardTransition = true;
    this->bAllowBackwardTransition = true;
    this->bUsableWhenCrouching = true;
    this->bUsableWhenStanding = true;
    this->StandAnimationOverride = NULL;
    this->CrouchAnimationOverride = NULL;
}


