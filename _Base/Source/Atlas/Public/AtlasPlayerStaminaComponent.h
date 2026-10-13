#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasPlayerStaminaJumpDrainMap.h"
#include "EAtlasStaminaMode.h"
#include "EAtlasStaminaState.h"
#include "OnStaminaStateChangedDelegate.h"
#include "AtlasPlayerStaminaComponent.generated.h"

class AAtlasPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerStaminaComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStaminaStateChanged OnStaminaStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStamina;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateThresholdRatios[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRecoveryRateStanding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRecoveryRateJogging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaRecoveryNotGrounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaminaSprintDrainRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintLockInRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayerStaminaJumpDrainMap> JumpDrainAmounts;
    
public:
    UAtlasPlayerStaminaComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetStaminaState(TEnumAsByte<EAtlasStaminaState> State, bool canGainStamina);
    
    UFUNCTION(BlueprintCallable)
    void SetMode(EAtlasStaminaMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentStaminaRatio(float Ratio, bool canGainStamina);
    
    UFUNCTION()
    void OnPlayerJumped();
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasStaminaState> GetStaminaState() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasStaminaState> GetPreviousStaminaState() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasStaminaMode GetMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaximumStamina() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentStaminaRatio() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentStamina() const;
    
    UFUNCTION(BlueprintCallable)
    void AddStaminaChange(float changeAmount);
    
};

