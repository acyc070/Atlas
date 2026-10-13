#include "AtlasAdvGfxSettingsWidget.h"

UAtlasAdvGfxSettingsWidget::UAtlasAdvGfxSettingsWidget() {
    this->CachedEffectQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedPostProcessQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedShadowQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedTextureQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedAntiAliasingQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedAmbientOcclusionQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedBloomQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedRTAOQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedRTShadowsQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->CachedRTReflectionsQuality = EAtlasGraphicsQualityLevel::Ultra;
}

void UAtlasAdvGfxSettingsWidget::SetCachedSettings() {
}

void UAtlasAdvGfxSettingsWidget::CacheCurrentSettings() {
}

bool UAtlasAdvGfxSettingsWidget::AreCachedRTSettingsDifferent() {
    return false;
}


