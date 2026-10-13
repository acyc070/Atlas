#include "AtlasLedgeActor.h"
#include "AtlasLedge.h"

AAtlasLedgeActor::AAtlasLedgeActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAtlasLedge>(TEXT("AtlasLedgeComponent"));
    this->LedgeComponent = (UAtlasLedge*)RootComponent;
}


