#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "AtlasGameViewportFocusChangedDelegate.h"
#include "AtlasOnInputTypeChangedDelegate.h"
#include "AtlasOnViewportStateChangedDelegate.h"
#include "EAtlasInputType.h"
#include "EAtlasViewportState.h"
#include "ResetTitleSceenTimerDelegateDelegate.h"
#include "AtlasGameViewportClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasGameViewportClient : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FResetTitleSceenTimerDelegate OnResetTitleSceenTimerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnInputTypeChanged OnInputTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnViewportStateChanged OnViewportStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasGameViewportFocusChanged OnGameViewportFocusChanged;
    
    UAtlasGameViewportClient();

    UFUNCTION(BlueprintCallable)
    void UnsetViewportStateOverride();
    
    UFUNCTION(BlueprintCallable)
    void ToggleFullScreen();
    
    UFUNCTION(BlueprintCallable)
    void SetViewportStateOverride(EAtlasViewportState State);
    
    UFUNCTION(BlueprintCallable)
    void SetViewportState(EAtlasViewportState State);
    
    UFUNCTION(BlueprintPure)
    EAtlasViewportState GetViewportState() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasInputType GetLastInputType() const;
    
};

