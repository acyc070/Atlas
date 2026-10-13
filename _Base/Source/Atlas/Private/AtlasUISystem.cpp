#include "AtlasUISystem.h"
#include "Templates/SubclassOf.h"

UAtlasUISystem::UAtlasUISystem() {
    this->MenuLayer = NULL;
    this->HintLayer = NULL;
    this->OnButtonClickedSound = NULL;
    this->OnButtonLostFocusSound = NULL;
    this->OnMenuBackSound = NULL;
}

void UAtlasUISystem::SetDisplayHints(const bool displayHints) {
}

void UAtlasUISystem::ReplaceHint_Internal(UAtlasMenuWidget* Widget) {
}

void UAtlasUISystem::ReplaceHint(UObject* WorldContextObject, TSubclassOf<UAtlasHintWidget> WidgetClass, float Lifetime, float fadeInTime, float fadeOutTime, bool renewLifetimeIfAlreadyOnScreen) {
}

void UAtlasUISystem::RemoveHint() {
}

void UAtlasUISystem::OnMenuButtonLostFocus(UAtlasMenuButton* Button) {
}

void UAtlasUISystem::OnMenuButtonClicked() {
}

void UAtlasUISystem::OnGamePausedStateChanged(bool paused) {
}

UAtlasMenuManager* UAtlasUISystem::GetMenuLayer() const {
    return NULL;
}

UAtlasMenuManager* UAtlasUISystem::GetHintLayer() const {
    return NULL;
}

bool UAtlasUISystem::GetDisplayHints() {
    return false;
}

bool UAtlasUISystem::DisplayHint(UObject* WorldContextObject, TSubclassOf<UAtlasHintWidget> WidgetClass, float Lifetime, float fadeInTime, float fadeOutTime) {
    return false;
}

bool UAtlasUISystem::ClearMenus() {
    return false;
}

bool UAtlasUISystem::BackOutOfMenu() {
    return false;
}


