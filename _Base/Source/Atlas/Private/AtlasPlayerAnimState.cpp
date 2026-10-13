#include "AtlasPlayerAnimState.h"

FAtlasPlayerAnimState::FAtlasPlayerAnimState() {
    this->movementMode = TAR_MOVE_None;
    this->GrabType = ATLAS_GRAB_TYPE_NONE;
    this->GrabPhase = ATLAS_GRAB_INTERFACE_INACTIVE;
    this->StaminaState = ATLAS_STAMINA_EXHAUSTED;
}

