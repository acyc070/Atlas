#include "BikLimbBone.h"

FBikLimbBone::FBikLimbBone() {
    this->Shape = EBikShape::Line;
    this->SurfaceOffset = 0.00f;
    this->bDrawDebug = false;
    this->UseCustomScale = false;
    this->CustomRayTraceStartScale = 0.00f;
    this->CustomRayTraceFinishScale = 0.00f;
}

