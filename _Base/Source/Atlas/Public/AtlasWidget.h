#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "OnAtlasWidgetFadingEndedDelegate.h"
#include "AtlasWidget.generated.h"

class UAtlasWidget;

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAtlasWidgetFadingEnded OnFadingEndedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutDuration;
    
public:
    UAtlasWidget();

    UFUNCTION(BlueprintCallable)
    void SetFadeOutDuration(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeInDuration(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeDurations(float fadeInValue, float fadeOutValue);
    
private:
    UFUNCTION()
    void RemoveFromParentAfterFade(UAtlasWidget* Widget);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFading() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeTo(float alphaTarget);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutAndRemoveFromParent();
    
};

