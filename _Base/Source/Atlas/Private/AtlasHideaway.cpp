#include "AtlasHideaway.h"

UAtlasHideaway::UAtlasHideaway(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsClosed = true;
    this->SkeletalMesh = NULL;
    this->AnimInstance = NULL;
}


