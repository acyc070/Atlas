#include "AtlasAITouchHotspot.h"
#include "Components/SceneComponent.h"

AAtlasAITouchHotspot::AAtlasAITouchHotspot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->Animation = NULL;
    this->PreferredHand = EAtlasAILimb::Both;
}


