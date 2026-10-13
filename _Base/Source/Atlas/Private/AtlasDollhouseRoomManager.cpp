#include "AtlasDollhouseRoomManager.h"

AAtlasDollhouseRoomManager::AAtlasDollhouseRoomManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlendTime = 0.50f;
    this->MaxLookAroundAngle = 15.00f;
    this->LookAroundSpeed = 5.00f;
    this->MaxZoomLevel = 1500.00f;
    this->ZoomSpeed = 5.00f;
    this->AllowSwitchingRoomsWhenZoomed = false;
    this->IsMoveVerticalAllowed = true;
    this->IsMoveHorizontalAllowed = true;
}

void AAtlasDollhouseRoomManager::MoveVertical(float Value) {
}

void AAtlasDollhouseRoomManager::MoveHorizontal(float Value) {
}

void AAtlasDollhouseRoomManager::LookVertical(float Value) {
}

void AAtlasDollhouseRoomManager::LookHorizontal(float Value) {
}

FName AAtlasDollhouseRoomManager::GetCorrespondingSubLevel(const FName& PLVL) {
    return NAME_None;
}

void AAtlasDollhouseRoomManager::DollhouseTriggerZoom(float Value) {
}

void AAtlasDollhouseRoomManager::DollhouseSelect() {
}

void AAtlasDollhouseRoomManager::DollhouseExit() {
}

void AAtlasDollhouseRoomManager::CheckRoomsUnlocked() {
}


