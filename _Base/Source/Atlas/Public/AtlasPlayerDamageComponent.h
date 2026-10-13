#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AtlasDamageSignatureDelegate.h"
#include "AtlasDamageTypeSignatureDelegate.h"
#include "AtlasDeathTypeHandlerMap.h"
#include "AtlasPlayerDeathSignatureDelegate.h"
#include "AtlasPlayerHungerChangedDelegate.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasGrabHelperMaterial.h"
#include "EAtlasLimb.h"
#include "EAtlasPlayerDeathType.h"
#include "Templates/SubclassOf.h"
#include "AtlasPlayerDamageComponent.generated.h"

class AAtlasLeechAI;
class AAtlasPlayer;
class AAtlasPlayerDeathTypeHandler;
class UAtlasGrabHelper;
class UAtlasGrabbable;
class UAtlasPlayerStaminaComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageTypeSignature OnDamageTypeSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageTypeSignature OnDamageTypeCleared;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDeathSignature OnDeathEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageSignature OnPetrifiedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageSignature OnPetrifiedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageSignature OnPetrifiedUpdate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerHungerChanged OnHungerLevelChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAtlasPlayerDeathTypeHandler> DefaultDeathHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasDeathTypeHandlerMap> DeathTypeHandlers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PetrificationRecoverPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAtlasLeechAI*> AttachedLeeches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeechAttachedKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNrOfAttachedLeeches;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageSignature OnLeechAttached;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HypnotizedMovementScale;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageSignature OnHypnotizedStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDamageSignature OnHypnotizedEnd;
    
    UAtlasPlayerDamageComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseCustomDeathFocalOffset(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void SetPetrified(float petrificationGainPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetHypnotized(float recoveryDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetHungry(int32 hungerLevel);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSteamSource(USceneComponent* EffectComponent);
    
private:
    UFUNCTION()
    void OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult);
    
    UFUNCTION()
    void OnGrabChanged(UAtlasGrabbable* grabbedComponent, UAtlasGrabHelper* GrabHelper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material);
    
public:
    UFUNCTION(BlueprintCallable)
    void Kill(TEnumAsByte<EAtlasPlayerDeathType> deathType, FVector WorldDirection);
    
    UFUNCTION(BlueprintPure)
    bool IsPetrified() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHypnotized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsHungry() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead(bool includeQueued) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSteamDirection() const;
    
    UFUNCTION(BlueprintPure)
    float GetPetrificationAmount() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHungerLevel() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasPlayerDeathType> GetDeathType() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDeathModifierVector() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAttachedLeeches(TArray<AAtlasLeechAI*>& outArray) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearPetrified();
    
    UFUNCTION(BlueprintCallable)
    void ClearHypnotized();
    
    UFUNCTION(BlueprintCallable)
    void ClearHungry();
    
    UFUNCTION(BlueprintCallable)
    void AddSteamSource(USceneComponent* EffectComponent, FVector componentLocalVector);
    
};

