#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EPlatform.h"
#include "TarUtils.generated.h"

class UAudioComponent;
class UObject;
class UTarGameUserSettings;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTarUtils();

    UFUNCTION(BlueprintCallable)
    static void SwitchOnPlatform(EPlatform& Platform);
    
    UFUNCTION(BlueprintPure)
    static FString GetUserSettingsDir();
    
    UFUNCTION(BlueprintPure)
    static EPlatform GetPlatform();
    
    UFUNCTION(BlueprintPure)
    static UTarGameUserSettings* GetGameUserSettings();
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutIfValid(UAudioComponent* Target, float FadeOutDuration, float FadeVolumeLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugAxes(const UObject* WorldContextObject, const FTransform& WorldTransform, float axisSize, float lineWidth);
    
    UFUNCTION(BlueprintCallable)
    static void AddOnScreenDebugMessage(int32 Channel, const FString& Message, FLinearColor Color, float Timeout);
    
};

