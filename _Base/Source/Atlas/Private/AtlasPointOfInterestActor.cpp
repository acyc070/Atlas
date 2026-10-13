#include "AtlasPointOfInterestActor.h"
#include "AtlasPointOfInterestComponent.h"

AAtlasPointOfInterestActor::AAtlasPointOfInterestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAtlasPointOfInterestComponent>(TEXT("POI Component"));
    this->POIComponent = (UAtlasPointOfInterestComponent*)RootComponent;
}


