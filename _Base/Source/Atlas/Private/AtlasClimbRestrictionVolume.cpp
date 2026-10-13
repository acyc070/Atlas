#include "AtlasClimbRestrictionVolume.h"

AAtlasClimbRestrictionVolume::AAtlasClimbRestrictionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bCanClimbUp = false;
    this->bCanClimbDown = false;
    this->bCanClimbLeft = false;
    this->bCanClimbRight = false;
}

void AAtlasClimbRestrictionVolume::OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}

void AAtlasClimbRestrictionVolume::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


