#include "AtlasClimbable.h"

UAtlasClimbable::UAtlasClimbable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bCanClimbSideways = true;
    this->bCanClimbDiagonally = true;
    this->bInvertHorizontalOnRear = false;
    this->bAllowLookAround = false;
}


