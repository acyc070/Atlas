#include "AtlasSplashScreenWidget.h"

UAtlasSplashScreenWidget::UAtlasSplashScreenWidget() {
    this->DisplayTime = 0.00f;
    this->BetweenScreensTime = 0.00f;
}

void UAtlasSplashScreenWidget::OnFadingOutEnded(UAtlasWidget* Widget) {
}

void UAtlasSplashScreenWidget::OnFadingInEnded(UAtlasWidget* Widget) {
}

void UAtlasSplashScreenWidget::Launch(int32 StartingChildIndex) {
}

int32 UAtlasSplashScreenWidget::GetWidgetsCount() const {
    return 0;
}


