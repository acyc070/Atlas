#include "AtlasMenuManager.h"
#include "Templates/SubclassOf.h"

UAtlasMenuManager::UAtlasMenuManager() {
    this->UISystem = NULL;
    this->MenuRootPanel = NULL;
}

UAtlasMenuWidget* UAtlasMenuManager::Top() const {
    return NULL;
}

void UAtlasMenuManager::ToggleMenuStackDebug() {
}

void UAtlasMenuManager::SetViewportStateOverrideToTopMenuRequest(UAtlasWidget* Menu) {
}

bool UAtlasMenuManager::PushWithFading(UAtlasMenuWidget* Menu, bool requestFocus, bool keepLastMenuVisible, bool overrideViewportState, EAtlasViewportState menuViewportState) {
    return false;
}

void UAtlasMenuManager::Push(UAtlasMenuWidget* Menu, bool requestFocus, bool keepLastMenuVisible, bool overrideViewportState, EAtlasViewportState menuViewportState) {
}

void UAtlasMenuManager::PostPushFade(UAtlasWidget* Menu) {
}

void UAtlasMenuManager::PostPopFade_NoPreviousMenu(UAtlasWidget* Menu) {
}

void UAtlasMenuManager::PostPopFade(UAtlasWidget* Menu) {
}

void UAtlasMenuManager::PostClearFade(UAtlasWidget* Menu) {
}

bool UAtlasMenuManager::PopWithFading_NoPreviousMenu() {
    return false;
}

bool UAtlasMenuManager::PopWithFading() {
    return false;
}

void UAtlasMenuManager::PopPrevious() {
}

void UAtlasMenuManager::Pop() {
}

bool UAtlasMenuManager::IsLocked() {
    return false;
}

bool UAtlasMenuManager::IsEmpty() const {
    return false;
}

UAtlasUISystem* UAtlasMenuManager::GetUISystem() const {
    return NULL;
}

UAtlasMenuWidget* UAtlasMenuManager::CreateMenuWidget(TSubclassOf<UAtlasMenuWidget> MenuClass) {
    return NULL;
}

bool UAtlasMenuManager::ContainsCredits() const {
    return false;
}

bool UAtlasMenuManager::ContainsControllerDisconnect() const {
    return false;
}

bool UAtlasMenuManager::ClearWithFading() {
    return false;
}

void UAtlasMenuManager::Clear() {
}


