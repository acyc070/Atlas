#include "AtlasMenuWidget.h"

UAtlasMenuWidget::UAtlasMenuWidget() {
    this->bIsCredits = false;
    this->bIsControllerDisconnect = false;
}

void UAtlasMenuWidget::OnVisible_Implementation() {
}

void UAtlasMenuWidget::OnInvisible_Implementation() {
}

UAtlasMenuManager* UAtlasMenuWidget::GetMenuManager() const {
    return NULL;
}


