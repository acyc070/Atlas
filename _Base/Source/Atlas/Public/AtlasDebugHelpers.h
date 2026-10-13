#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtlasDebugHelpers.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class UAtlasDebugHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtlasDebugHelpers();

    UFUNCTION(BlueprintPure)
    static bool ShowPlayerNickname();
    
    UFUNCTION(BlueprintPure)
    static bool HideSplashScreen();
    
    UFUNCTION(BlueprintPure)
    static bool HideCutscenes();
    
    UFUNCTION(BlueprintPure)
    static UAnimSequence* GetPlayerAudioBlueprintTestAnimation();
    
    UFUNCTION(BlueprintPure)
    static bool ForceConsoleMenus();
    
};

