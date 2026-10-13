#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameUserSettings.h"
#include "EAtlasGraphicsQualityLevel.h"
#include "EAtlasPresetGraphicsQualityLevel.h"
#include "EFSRQuality.h"
#include "GraphicsSettingsMaps.h"
#include "TarInputActionKeyMapping.h"
#include "TarInputAxisKeyMapping.h"
#include "TarGameUserSettings.generated.h"

class APlayerController;
class UInputSettings;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarGameUserSettings : public UGameUserSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel AntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel AmbientOcclusionQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel BloomQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel EffectsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel PostProcessingQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel ShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel TextureQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSRQuality FSRQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel RTAOQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel RTShadowsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel RTReflectionsQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPresetGraphicsQualityLevel SelectedPreset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGraphicsSettingsMaps GraphicsSettingsMappings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PCFirstTimeLaunch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInputSettings* EngineInputSettings;
    
public:
    UTarGameUserSettings();

    UFUNCTION(BlueprintCallable)
    void TAR_SetTextureQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetShadowQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetSelectedPresetGraphicsSettings(EAtlasPresetGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetScreenResolution(const int32& Width, const int32& Height, const bool fullscreen);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetRTShadowsQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetRTReflectionsQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetRTAOQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetPostProcessingQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetOverallGraphicsSettings(EAtlasPresetGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetEffectsQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetBloomQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetAntiAliasingQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintCallable)
    void TAR_SetAmbientOcclusionQuality(EAtlasGraphicsQualityLevel Quality);
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetTextureQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetShadowQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasPresetGraphicsQualityLevel TAR_GetSelectedPresetGraphicsSettings() const;
    
    UFUNCTION(BlueprintPure)
    FString TAR_GetScreenResolution();
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetRTShadowsQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetRTReflectionsQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetRTAOQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetPostProcessQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetEffectsQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetBloomQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetAntiAliasingQuality() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasGraphicsQualityLevel TAR_GetAmbientOcclusionQuality() const;
    
    UFUNCTION(BlueprintCallable)
    void TAR_ApplyResolutionSettings();
    
    UFUNCTION(BlueprintCallable)
    bool TAR_ApplyGraphicsSettings();
    
    UFUNCTION(BlueprintPure)
    bool SupportsRaytracing() const;
    
    UFUNCTION(BlueprintCallable)
    void SetVSync(const bool vSync);
    
    UFUNCTION(BlueprintCallable)
    void SetFSRQuality(EFSRQuality Quality);
    
    UFUNCTION(BlueprintCallable)
    void SaveToConfigFile();
    
    UFUNCTION(BlueprintCallable)
    void SaveMappings();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAxisMapping(FTarInputAxisKeyMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActionMapping(FTarInputActionKeyMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    bool RemapAxis(FTarInputAxisKeyMapping oldMapping, FTarInputAxisKeyMapping newMapping);
    
    UFUNCTION(BlueprintCallable)
    bool RemapAction(FTarInputActionKeyMapping oldMapping, FTarInputActionKeyMapping newMapping);
    
    UFUNCTION(BlueprintPure)
    bool IsVSync() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInFullscreen() const;
    
    UFUNCTION(BlueprintCallable)
    void InvertAxis(const FName AxisName, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    bool GetSupportedScreenResolutions(TArray<FString>& Resolutions) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertAxis(const FName AxisName, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintPure)
    EFSRQuality GetFSRQuality() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FTarInputAxisKeyMapping> GetAllAxisMappings(bool sortArray) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FTarInputActionKeyMapping> GetAllActionMappings(bool sortArray) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeScreenResolution(const int32& Width, const int32& Height, const bool fullscreen);
    
    UFUNCTION(BlueprintCallable)
    void AutoDetectBestSettings(float WorkScale);
    
    UFUNCTION(BlueprintCallable)
    bool AddAxisMapping(FTarInputAxisKeyMapping Mapping);
    
    UFUNCTION(BlueprintCallable)
    bool AddActionMapping(FTarInputActionKeyMapping Mapping);
    
};

