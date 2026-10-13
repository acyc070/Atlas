#include "AtlasPlayerCameraManager.h"

AAtlasPlayerCameraManager::AAtlasPlayerCameraManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultModifiers.AddDefaulted(1);
    this->ExternalCamera = NULL;
    this->ActiveVolume = NULL;
    this->StickyVolume = NULL;
}

void AAtlasPlayerCameraManager::StartBlend(TEnumAsByte<EViewTargetBlendFunction> func, float BlendTime, float BlendExp) {
}

void AAtlasPlayerCameraManager::SetExternalWithBlend(AActor* external, TEnumAsByte<EViewTargetBlendFunction> func, float BlendTime, float BlendExp, bool keepActiveRoomVolume) {
}

void AAtlasPlayerCameraManager::SetExternal(AActor* external, bool keepActiveRoomVolume) {
}

void AAtlasPlayerCameraManager::SetCameraZoomModifier(float Amount, UObject* requester) {
}

FRotator AAtlasPlayerCameraManager::GetSeawavesRotation() const {
    return FRotator{};
}

void AAtlasPlayerCameraManager::ClearExternalWithBlend(TEnumAsByte<EViewTargetBlendFunction> func, float BlendTime, float BlendExp) {
}

void AAtlasPlayerCameraManager::ClearExternal() {
}


