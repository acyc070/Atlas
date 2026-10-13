#include "AtlasMenuButton.h"

UAtlasMenuButton::UAtlasMenuButton() {
    this->MenuManager = NULL;
    this->ScaleOnFocusChange = false;
    this->ScaleMultiplier = 1.25f;
    this->ChangeColorOnFocusChange = false;
    this->ChangeTextColorOnFocusChange = false;
    this->InterpolationsDuration = 0.33f;
    this->MuteDefaultClickedSound = false;
    this->MuteDefaultFocusLostSound = false;
}

void UAtlasMenuButton::Tick(float DeltaTime) {
}

void UAtlasMenuButton::OnInputTypeChanged(EAtlasInputType InputType) {
}


