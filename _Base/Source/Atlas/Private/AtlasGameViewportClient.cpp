#include "AtlasGameViewportClient.h"

UAtlasGameViewportClient::UAtlasGameViewportClient() {
}

void UAtlasGameViewportClient::UnsetViewportStateOverride() {
}

void UAtlasGameViewportClient::ToggleFullScreen() {
}

void UAtlasGameViewportClient::SetViewportStateOverride(EAtlasViewportState State) {
}

void UAtlasGameViewportClient::SetViewportState(EAtlasViewportState State) {
}

EAtlasViewportState UAtlasGameViewportClient::GetViewportState() const {
    return EAtlasViewportState::SplashScreen;
}

EAtlasInputType UAtlasGameViewportClient::GetLastInputType() const {
    return EAtlasInputType::KeyboardAndMouse;
}


