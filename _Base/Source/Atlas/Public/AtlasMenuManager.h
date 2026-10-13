#pragma once
#include "CoreMinimal.h"
#include "AtlasMenuManagerDelegateSignatureDelegate.h"
#include "AtlasWidget.h"
#include "EAtlasViewportState.h"
#include "MenuStackData.h"
#include "OnAtlasMenuManagerTickDelegate.h"
#include "Templates/SubclassOf.h"
#include "AtlasMenuManager.generated.h"

class UAtlasMenuWidget;
class UAtlasUISystem;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class ATLAS_API UAtlasMenuManager : public UAtlasWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAtlasMenuManagerTick OnTickEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasMenuManagerDelegateSignature OnMenuPushedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasMenuManagerDelegateSignature OnMenuPoppedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasUISystem* UISystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMenuStackData> MenuStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMenuStackData ToPushWidgetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* MenuRootPanel;
    
public:
    UAtlasMenuManager();

    UFUNCTION(BlueprintPure)
    UAtlasMenuWidget* Top() const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleMenuStackDebug();
    
private:
    UFUNCTION()
    void SetViewportStateOverrideToTopMenuRequest(UAtlasWidget* Menu);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PushWithFading(UAtlasMenuWidget* Menu, bool requestFocus, bool keepLastMenuVisible, bool overrideViewportState, EAtlasViewportState menuViewportState);
    
    UFUNCTION(BlueprintCallable)
    void Push(UAtlasMenuWidget* Menu, bool requestFocus, bool keepLastMenuVisible, bool overrideViewportState, EAtlasViewportState menuViewportState);
    
private:
    UFUNCTION()
    void PostPushFade(UAtlasWidget* Menu);
    
    UFUNCTION()
    void PostPopFade_NoPreviousMenu(UAtlasWidget* Menu);
    
    UFUNCTION()
    void PostPopFade(UAtlasWidget* Menu);
    
    UFUNCTION()
    void PostClearFade(UAtlasWidget* Menu);
    
public:
    UFUNCTION(BlueprintCallable)
    bool PopWithFading_NoPreviousMenu();
    
    UFUNCTION(BlueprintCallable)
    bool PopWithFading();
    
    UFUNCTION(BlueprintCallable)
    void PopPrevious();
    
    UFUNCTION(BlueprintCallable)
    void Pop();
    
    UFUNCTION(BlueprintPure)
    bool IsLocked();
    
    UFUNCTION(BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasUISystem* GetUISystem() const;
    
    UFUNCTION(BlueprintCallable)
    UAtlasMenuWidget* CreateMenuWidget(TSubclassOf<UAtlasMenuWidget> MenuClass);
    
    UFUNCTION(BlueprintPure)
    bool ContainsCredits() const;
    
    UFUNCTION(BlueprintPure)
    bool ContainsControllerDisconnect() const;
    
    UFUNCTION(BlueprintCallable)
    bool ClearWithFading();
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

