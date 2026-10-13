#include "AtlasExternalBlendCameraVolume.h"
#include "AtlasExternalBlendCameraComponent.h"

AAtlasExternalBlendCameraVolume::AAtlasExternalBlendCameraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Camera = CreateDefaultSubobject<UAtlasExternalBlendCameraComponent>(TEXT("Result Camera"));
    this->FromVolume = NULL;
    this->ToVolume = NULL;
    this->AllowPilfer = false;
    this->InitialWeight = 0.00f;
}

void AAtlasExternalBlendCameraVolume::SetBlendWeight(float Weight) {
}


