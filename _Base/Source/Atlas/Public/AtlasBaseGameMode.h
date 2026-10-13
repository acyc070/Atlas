#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/GameMode.h"
#include "OnSetPauseEnabledDelegate.h"
#include "AtlasBaseGameMode.generated.h"

class UAtlasMenuWidget;
class UAtlasUISystem;

UCLASS(Abstract, Blueprintable, NonTransient)
class ATLAS_API AAtlasBaseGameMode : public AGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSetPauseEnabled OnSetPauseEnabled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasUISystem* UISystem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasMenuWidget* SavingProgressWidget;
    
public:
    AAtlasBaseGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void ShowDebugPauseMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetPauseMenuBackgroundColor(const FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RequestPauseWithEvent();
    
    UFUNCTION(BlueprintCallable)
    void RequestPause();
    
    UFUNCTION(BlueprintCallable)
    void LiftPauseWithEvent();
    
    UFUNCTION(BlueprintCallable)
    void LiftPause();
    
    UFUNCTION(BlueprintPure)
    bool IsPauseEnabled() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasUISystem* GetUISystem() const;
    
    UFUNCTION(BlueprintPure)
    FString CreateMetaName(const FString& Source) const;
    
};

