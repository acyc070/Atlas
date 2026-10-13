#include "AtlasPlayerAnimDragData.h"

FAtlasPlayerAnimDragData::FAtlasPlayerAnimDragData() {
    this->bShouldAnimate = false;
    this->bIsCrouching = false;
    this->InitType = EAtlasPlayerAnimDragInitType::Stand;
    this->AnimState = EAtlasPlayerAnimDragState::Idle;
    this->bIsElectrified = false;
    this->bJustHitSomething = false;
    this->bUseBackwardsAnims = false;
    this->GrabPhase = ATLAS_GRAB_INTERFACE_INACTIVE;
    this->BackStepAngle = 0.00f;
    this->VelocityAngle = 0.00f;
    this->ImpactBackstep = 0.00f;
    this->ImpactAngle = 0.00f;
    this->Speed = 0.00f;
}

