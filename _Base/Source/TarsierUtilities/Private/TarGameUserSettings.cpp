#include "TarGameUserSettings.h"

UTarGameUserSettings::UTarGameUserSettings() {
    this->bUseDynamicResolution = true;
    this->AntiAliasingQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->AmbientOcclusionQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->BloomQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->EffectsQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->PostProcessingQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->ShadowQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->TextureQuality = EAtlasGraphicsQualityLevel::Ultra;
    this->FSRQuality = EFSRQuality::Off;
    this->RTAOQuality = EAtlasGraphicsQualityLevel::Off;
    this->RTShadowsQuality = EAtlasGraphicsQualityLevel::Off;
    this->RTReflectionsQuality = EAtlasGraphicsQualityLevel::Off;
    this->SelectedPreset = EAtlasPresetGraphicsQualityLevel::Ultra;
    this->PCFirstTimeLaunch = false;
}

void UTarGameUserSettings::TAR_SetTextureQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetShadowQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetSelectedPresetGraphicsSettings(EAtlasPresetGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetScreenResolution(const int32& Width, const int32& Height, const bool fullscreen) {
}

void UTarGameUserSettings::TAR_SetRTShadowsQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetRTReflectionsQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetRTAOQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetPostProcessingQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetOverallGraphicsSettings(EAtlasPresetGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetEffectsQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetBloomQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetAntiAliasingQuality(EAtlasGraphicsQualityLevel Quality) {
}

void UTarGameUserSettings::TAR_SetAmbientOcclusionQuality(EAtlasGraphicsQualityLevel Quality) {
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetTextureQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetShadowQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasPresetGraphicsQualityLevel UTarGameUserSettings::TAR_GetSelectedPresetGraphicsSettings() const {
    return EAtlasPresetGraphicsQualityLevel::Low;
}

FString UTarGameUserSettings::TAR_GetScreenResolution() {
    return TEXT("");
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetRTShadowsQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetRTReflectionsQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetRTAOQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetPostProcessQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetEffectsQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetBloomQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetAntiAliasingQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

EAtlasGraphicsQualityLevel UTarGameUserSettings::TAR_GetAmbientOcclusionQuality() const {
    return EAtlasGraphicsQualityLevel::Off;
}

void UTarGameUserSettings::TAR_ApplyResolutionSettings() {
}

bool UTarGameUserSettings::TAR_ApplyGraphicsSettings() {
    return false;
}

bool UTarGameUserSettings::SupportsRaytracing() const {
    return false;
}

void UTarGameUserSettings::SetVSync(const bool vSync) {
}

void UTarGameUserSettings::SetFSRQuality(EFSRQuality Quality) {
}

void UTarGameUserSettings::SaveToConfigFile() {
}

void UTarGameUserSettings::SaveMappings() {
}

void UTarGameUserSettings::RemoveAxisMapping(FTarInputAxisKeyMapping Mapping) {
}

void UTarGameUserSettings::RemoveActionMapping(FTarInputActionKeyMapping Mapping) {
}

bool UTarGameUserSettings::RemapAxis(FTarInputAxisKeyMapping oldMapping, FTarInputAxisKeyMapping newMapping) {
    return false;
}

bool UTarGameUserSettings::RemapAction(FTarInputActionKeyMapping oldMapping, FTarInputActionKeyMapping newMapping) {
    return false;
}

bool UTarGameUserSettings::IsVSync() const {
    return false;
}

bool UTarGameUserSettings::IsInFullscreen() const {
    return false;
}

void UTarGameUserSettings::InvertAxis(const FName AxisName, APlayerController* PlayerController) {
}

bool UTarGameUserSettings::GetSupportedScreenResolutions(TArray<FString>& Resolutions) const {
    return false;
}

bool UTarGameUserSettings::GetInvertAxis(const FName AxisName, APlayerController* PlayerController) {
    return false;
}

EFSRQuality UTarGameUserSettings::GetFSRQuality() const {
    return EFSRQuality::Off;
}

TArray<FTarInputAxisKeyMapping> UTarGameUserSettings::GetAllAxisMappings(bool sortArray) const {
    return TArray<FTarInputAxisKeyMapping>();
}

TArray<FTarInputActionKeyMapping> UTarGameUserSettings::GetAllActionMappings(bool sortArray) const {
    return TArray<FTarInputActionKeyMapping>();
}

void UTarGameUserSettings::ChangeScreenResolution(const int32& Width, const int32& Height, const bool fullscreen) {
}

void UTarGameUserSettings::AutoDetectBestSettings(float WorkScale) {
}

bool UTarGameUserSettings::AddAxisMapping(FTarInputAxisKeyMapping Mapping) {
    return false;
}

bool UTarGameUserSettings::AddActionMapping(FTarInputActionKeyMapping Mapping) {
    return false;
}


