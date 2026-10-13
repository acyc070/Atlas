#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlasAmiiboDetectedSignatureDelegate.h"
#include "AtlasMainControllerStateChangedSignatureDelegate.h"
#include "AtlasOnExternalStoreClosedEventDelegate.h"
#include "AtlasOnTrialActiveEventDelegate.h"
#include "AtlasOnTrialLiftedEventDelegate.h"
#include "AtlasOnUserDiscoveryStateChangedSignatureDelegate.h"
#include "EAtlasGameViewportFocus.h"
#include "EAtlasMainControllerState.h"
#include "EAtlasSaveTarget.h"
#include "EAtlasUserDiscoveryResolutionOption.h"
#include "EAtlasUserDiscoveryState.h"
#include "EAtlasViewportState.h"
#include "EPresenceString.h"
#include "AtlasComplianceLayer.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasComplianceLayer : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasAmiiboDetectedSignature OnAmiiboDetectedEvent;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasMainControllerStateChangedSignature OnMainControllerStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnUserDiscoveryStateChangedSignature OnUserDiscoveryStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnTrialLiftedEvent OnTrialLiftedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnTrialActiveEvent OnTrialActiveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnExternalStoreClosedEvent OnExternalStoreClosedEvent;
    
    UAtlasComplianceLayer();

    UFUNCTION(BlueprintCallable)
    void UpdatePresenceString(EPresenceString PresenceString);
    
    UFUNCTION(BlueprintCallable)
    void StopAmiiboDetection();
    
    UFUNCTION(BlueprintCallable)
    void StartAmiiboDetection();
    
    UFUNCTION(BlueprintCallable)
    bool ShowLoginUI(int32 ControllerId);
    
protected:
    UFUNCTION()
    void SetupGameLanguage();
    
public:
    UFUNCTION(BlueprintCallable)
    bool ResolveUserLoggedOut(EAtlasUserDiscoveryResolutionOption resolutionOption);
    
    UFUNCTION(BlueprintCallable)
    bool ResolveDiscoveryFailure(EAtlasUserDiscoveryResolutionOption resolutionOption);
    
    UFUNCTION(BlueprintCallable)
    bool ResetAtlasPlayerAchievements();
    
    UFUNCTION(BlueprintCallable)
    void RequestMainControllerIdChange(int32 ControllerId);
    
protected:
    UFUNCTION()
    void OnViewportStateChanged(EAtlasViewportState PreviousState, EAtlasViewportState NewState);
    
public:
    UFUNCTION()
    void OnViewportFocusChange(EAtlasGameViewportFocus NewFocus);
    
protected:
    UFUNCTION()
    void OnUserLoginChanged(bool loggedIn, int32 userId, int32 ControllerId);
    
    UFUNCTION()
    void OnTrialLifted();
    
    UFUNCTION()
    void OnTrialActive();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnIngameStoreStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnIngameStoreEnded();
    
protected:
    UFUNCTION()
    void OnExternalStoreClosed(bool bSuccessful, bool bPurchased);
    
    UFUNCTION()
    void OnControllerConnectionChanged(bool connected, int32 userId, int32 ControllerId);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsVitaRemotePlay() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUserDiscovered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTrialVersion() const;
    
    UFUNCTION(BlueprintCallable)
    void IsStateSharePending(bool& bIsPending, EAtlasSaveTarget& SaveTarget, FName& PlvlName);
    
    UFUNCTION(BlueprintPure)
    bool HasUniqueNetId() const;
    
    UFUNCTION(BlueprintPure)
    bool HasMainController() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasUserDiscoveryState GetUserDiscoveryState() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasMainControllerState GetMainControllerState() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMainControllerId() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetAtlasPlayerUniquePlatformId() const;
    
    UFUNCTION(BlueprintPure)
    FString GetAtlasPlayerNickname() const;
    
protected:
    UFUNCTION()
    void GameIsUnsuspending();
    
    UFUNCTION()
    void GameIsSuspending();
    
    UFUNCTION()
    void GameIsEnteringForeground();
    
    UFUNCTION()
    void GameIsEnteringBackground();
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearStartupGameStateID();
    
    UFUNCTION(BlueprintCallable)
    void ClearGameStateID();
    
    UFUNCTION(BlueprintCallable)
    void CheckingForContentWidgetPopped();
    
};

