#include "AtlasPositionBlendCameraVolume.h"
#include "AtlasBlendCameraComponent.h"

AAtlasPositionBlendCameraVolume::AAtlasPositionBlendCameraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendPlane = ECameraBlendPlane::XY;
    this->ToVolume = NULL;
    this->FromVolume = NULL;
    this->bAutomaticMode = false;
    this->Mode = EAtlasPositionBlendMode::NONE;
    this->AllowPilfer = false;
    this->Camera = CreateDefaultSubobject<UAtlasBlendCameraComponent>(TEXT("Result Camera"));
}


