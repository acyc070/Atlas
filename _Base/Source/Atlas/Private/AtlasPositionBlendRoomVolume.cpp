#include "AtlasPositionBlendRoomVolume.h"

AAtlasPositionBlendRoomVolume::AAtlasPositionBlendRoomVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SourceVolume = NULL;
    this->TargetVolume = NULL;
    this->Plane = ECameraBlendPlane::XY;
    this->PPComponent = NULL;
    this->AllowPilfer = false;
    this->UseCameraPositionForBlending = false;
}


