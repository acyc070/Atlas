#include "AtlasDraggable.h"

UAtlasDraggable::UAtlasDraggable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxLinearSpeed = 100.00f;
    this->MaxLinearAcceleration = 200.00f;
    this->SidewaysForceFactor = 0.30f;
    this->MaxAngularSpeed = 30.00f;
    this->MaxAngularAcceleration = 60.00f;
    this->GravityScale = 1.00f;
    this->PushForceVerticalOffset = 0.00f;
    this->FloorRaycastVerticalDistance = 150.00f;
    this->SlopeDetectionMethod = ATLAS_DRAG_Player;
    this->SlopeEffectFactor = 1.00f;
    this->bAllowAutomaticPushing = true;
    this->ImpactBumpHeight = 3.00f;
    this->bWantsEffortAudio = true;
    this->PhysicsMaterialOverride = NULL;
    this->LedgeComponent = NULL;
    this->CachedPhysicsMaterial = NULL;
}


