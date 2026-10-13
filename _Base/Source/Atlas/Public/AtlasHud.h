#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/HUD.h"
#include "EFadeState.h"
#include "OnScreenFadeBegunDelegate.h"
#include "OnScreenFadeDoneDelegate.h"
#include "AtlasHud.generated.h"

class UFont;
class USoundMix;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API AAtlasHud : public AHUD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenFadeDone OnScreenFadeDone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScreenFadeBegun OnScreenFadeBegun;
    
    AAtlasHud(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void FadeScreen(float FadeTime, float afterADelayOf, EFadeState FadeMode, USoundMix* SoundMix);
    
    UFUNCTION(BlueprintCallable)
    void DrawTextAligned(const FString& Text, FLinearColor TextColor, FVector2D ScreenPosition, FVector2D Alignment, UFont* Font, float Scale);
    
};

