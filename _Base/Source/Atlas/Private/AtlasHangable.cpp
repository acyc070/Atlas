#include "AtlasHangable.h"

UAtlasHangable::UAtlasHangable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->PostReleasePreventCollisionsTime = 0.50f;
    this->AllowJumpOff = false;
    this->AlignWithXAxis = false;
}

void UAtlasHangable::ResetPawnPhysics() {
}


