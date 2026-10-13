#include "AtlasBaseGameMode.h"

AAtlasBaseGameMode::AAtlasBaseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->UISystem = NULL;
    this->SavingProgressWidget = NULL;
}

void AAtlasBaseGameMode::ShowDebugPauseMenu() {
}

void AAtlasBaseGameMode::SetPauseMenuBackgroundColor(const FLinearColor Color) {
}

void AAtlasBaseGameMode::SetPauseEnabled(bool bEnabled) {
}

void AAtlasBaseGameMode::RequestPauseWithEvent() {
}

void AAtlasBaseGameMode::RequestPause() {
}

void AAtlasBaseGameMode::LiftPauseWithEvent() {
}

void AAtlasBaseGameMode::LiftPause() {
}

bool AAtlasBaseGameMode::IsPauseEnabled() const {
    return false;
}

UAtlasUISystem* AAtlasBaseGameMode::GetUISystem() const {
    return NULL;
}

FString AAtlasBaseGameMode::CreateMetaName(const FString& Source) const {
    return TEXT("");
}


