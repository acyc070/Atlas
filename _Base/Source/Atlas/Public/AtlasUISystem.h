#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "AtlasUISystem.generated.h"

class UAtlasHintWidget;
class UAtlasMenuButton;
class UAtlasMenuManager;
class UAtlasMenuWidget;
class USoundCue;

UCLASS(Blueprintable)
class ATLAS_API UAtlasUISystem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasMenuManager* MenuLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasMenuManager* HintLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnButtonClickedSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnButtonLostFocusSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundCue* OnMenuBackSound;
    
public:
    UAtlasUISystem();

    UFUNCTION(BlueprintCallable)
    void SetDisplayHints(const bool displayHints);
    
private:
    UFUNCTION()
    void ReplaceHint_Internal(UAtlasMenuWidget* Widget);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void ReplaceHint(UObject* WorldContextObject, TSubclassOf<UAtlasHintWidget> WidgetClass, float Lifetime, float fadeInTime, float fadeOutTime, bool renewLifetimeIfAlreadyOnScreen);
    
    UFUNCTION(BlueprintCallable)
    void RemoveHint();
    
    UFUNCTION()
    void OnMenuButtonLostFocus(UAtlasMenuButton* Button);
    
    UFUNCTION()
    void OnMenuButtonClicked();
    
private:
    UFUNCTION()
    void OnGamePausedStateChanged(bool paused);
    
public:
    UFUNCTION(BlueprintPure)
    UAtlasMenuManager* GetMenuLayer() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasMenuManager* GetHintLayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDisplayHints();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool DisplayHint(UObject* WorldContextObject, TSubclassOf<UAtlasHintWidget> WidgetClass, float Lifetime, float fadeInTime, float fadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool ClearMenus();
    
    UFUNCTION(BlueprintCallable)
    bool BackOutOfMenu();
    
};

