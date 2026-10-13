#include "AtlasPlayerAnimLedgeData.h"

FAtlasPlayerAnimLedgeData::FAtlasPlayerAnimLedgeData() {
    this->bIsGrabbingOnFloor = false;
    this->bIsHanging = false;
    this->bIsFreeHang = false;
    this->bExitCurrentClimbToHang = false;
    this->bDesiredClimbBlocked = false;
    this->ExitCrouchAmount = 0.00f;
    this->LedgeHeight = 0.00f;
    this->ClimbAnimation = NULL;
}

