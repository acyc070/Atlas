#pragma once
#include "CoreMinimal.h"
#include "EAtlasGraphicsQualityLevel.h"
#include "AtlasMenuWidget.h"
#include "AtlasAdvGfxSettingsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasAdvGfxSettingsWidget : public UAtlasMenuWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedEffectQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedPostProcessQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedShadowQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedTextureQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedAntiAliasingQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedAmbientOcclusionQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedBloomQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedRTAOQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedRTShadowsQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGraphicsQualityLevel CachedRTReflectionsQuality;
    
public:
    UAtlasAdvGfxSettingsWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void SetCachedSettings();
    
    UFUNCTION(BlueprintCallable)
    void CacheCurrentSettings();
    
    UFUNCTION(BlueprintCallable)
    bool AreCachedRTSettingsDifferent();
    
};

