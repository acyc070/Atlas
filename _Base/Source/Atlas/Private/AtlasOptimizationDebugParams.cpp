#include "AtlasOptimizationDebugParams.h"

FAtlasOptimizationDebugParams::FAtlasOptimizationDebugParams() {
    this->DistanceCheckMode = EAtlasOptimizationBoundsCheckMode::BoundingBox;
    this->EnableOptimizationVolumes = false;
    this->PrintOptimizationVolumeStats = false;
    this->PrintActorStates = false;
    this->ShowOptimizationVolumes = false;
    this->PrintArrayOfVolumesChangingState = false;
    this->NbOfFrameBeforeOptimizationKicksIn = 0;
}

