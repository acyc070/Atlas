#include "TarUtils.h"

UTarUtils::UTarUtils() {
}

void UTarUtils::SwitchOnPlatform(EPlatform& Platform) {
}

FString UTarUtils::GetUserSettingsDir() {
    return TEXT("");
}

EPlatform UTarUtils::GetPlatform() {
    return EPlatform::PC;
}

UTarGameUserSettings* UTarUtils::GetGameUserSettings() {
    return NULL;
}

void UTarUtils::FadeOutIfValid(UAudioComponent* Target, float FadeOutDuration, float FadeVolumeLevel) {
}

void UTarUtils::DrawDebugAxes(const UObject* WorldContextObject, const FTransform& WorldTransform, float axisSize, float lineWidth) {
}

void UTarUtils::AddOnScreenDebugMessage(int32 Channel, const FString& Message, FLinearColor Color, float Timeout) {
}


