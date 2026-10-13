#include "AtlasCarryable.h"

UAtlasCarryable::UAtlasCarryable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->CarryShape = EAtlasCarryShape::SmallCylinder;
    this->Radius = 20.00f;
    this->Height = 50.00f;
    this->CanBePutDown = true;
    this->CanBeThrown = false;
    this->ThrowSpeed = 750.00f;
    this->ThrowRotationSpeed = 1000.00f;
    this->RegrabDelay = 0.50f;
    this->CurrentItemSlot = NULL;
    this->SkeletalMeshComponent = NULL;
}

void UAtlasCarryable::OnPostThrowRestorePhysics() {
}


