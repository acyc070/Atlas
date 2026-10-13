#include "BikSolverTask.h"

FBikSolverTask::FBikSolverTask() {
    this->alpha = 0.00f;
    this->TargetType = EBikTargetType::BlendToTarget;
    this->InComponentSpace = false;
    this->EnableTranslation = false;
    this->EnableOrientation = false;
    this->bDebugDraw = false;
    this->DebugDrawScale = 0.00f;
}

