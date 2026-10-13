#include "AtlasPlayerAnimOverrideParams.h"

FAtlasPlayerAnimOverrideParams::FAtlasPlayerAnimOverrideParams() {
    this->Animation = NULL;
    this->BlendSpace = NULL;
    this->Timeout = 0.00f;
    this->BlendTime = 0.00f;
    this->Priority = 0;
    this->CrouchAmount = 0.00f;
    this->bSkipStopAnimation = false;
    this->bCancelOnFalling = false;
    this->bInterruptGrab = false;
}

