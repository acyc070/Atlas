#include "AtlasWidget.h"

UAtlasWidget::UAtlasWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->FadeInDuration = 0.00f;
    this->FadeOutDuration = 0.00f;
}

void UAtlasWidget::SetFadeOutDuration(float Value) {
}

void UAtlasWidget::SetFadeInDuration(float Value) {
}

void UAtlasWidget::SetFadeDurations(float fadeInValue, float fadeOutValue) {
}

void UAtlasWidget::RemoveFromParentAfterFade(UAtlasWidget* Widget) {
}

bool UAtlasWidget::IsFading() const {
    return false;
}

void UAtlasWidget::FadeTo(float alphaTarget) {
}

void UAtlasWidget::FadeOutAndRemoveFromParent() {
}


