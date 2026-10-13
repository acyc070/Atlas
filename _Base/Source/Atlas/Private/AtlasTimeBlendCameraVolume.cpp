#include "AtlasTimeBlendCameraVolume.h"
#include "AtlasTimeBlendCameraComponent.h"

AAtlasTimeBlendCameraVolume::AAtlasTimeBlendCameraVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Camera = CreateDefaultSubobject<UAtlasTimeBlendCameraComponent>(TEXT("Result Camera"));
    this->FromCamera = NULL;
    this->FromVolume = NULL;
    this->ToCamera = NULL;
    this->ToVolume = NULL;
    this->AllowPilfer = false;
    this->BlendTime = 1.00f;
    this->BlendFunction = VTBlend_EaseInOut;
    this->BlendExp = 2.00f;
}


