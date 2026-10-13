#include "AtlasWallSwitch.h"

UAtlasWallSwitch::UAtlasWallSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReverseHeldCurveWhenReleased = true;
    this->AngleOverTimeUp = NULL;
    this->bStartAsDone = false;
    this->bResetAfterDone = true;
    this->bEnableAutomaticState = true;
    this->CompleteAtFraction = 1.00f;
    this->GrabHelper = NULL;
}

void UAtlasWallSwitch::Play(ESwitchPlayDirection PlayDirection, bool bRestart) {
}

bool UAtlasWallSwitch::IsPlaying() const {
    return false;
}

float UAtlasWallSwitch::GetCurrentPlayTime() const {
    return 0.0f;
}

float UAtlasWallSwitch::GetCurrentAlpha() const {
    return 0.0f;
}


