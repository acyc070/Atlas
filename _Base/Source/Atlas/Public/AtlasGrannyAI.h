#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "AtlasPlayerAIDeathStateData.h"
#include "EAtlasGrannyAIState.h"
#include "EAtlasGrannyBumpLevel.h"
#include "GrannyAmbushData.h"
#include "GrannyAttackData.h"
#include "GrannyAttentionSettings.h"
#include "GrannyBumpData.h"
#include "GrannyDiveData.h"
#include "GrannyLurkSettings.h"
#include "GrannySoundData.h"
#include "GrannySpeedCorrectionData.h"
#include "GrannyTeleportData.h"
#include "AtlasGrannyAI.generated.h"

class AActor;
class AAtlasPlayer;
class AAtlasWaterVolume;
class UAnimSequence;
class UAtlasWaterRippleGenerator;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasGrannyAI : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannySpeedCorrectionData SpeedCorrection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyLurkSettings LurkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyAttackData AttackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyBumpData BumpData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyDiveData DiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannySoundData SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyTeleportData TeleportStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyAmbushData AmbushData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrannyAttentionSettings AttentionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAIDeathStateData PlayerDeathAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasWaterRippleGenerator* RippleComponent;
    
    AAtlasGrannyAI(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void WaterVolumeEndOverlap(AActor* OverlappedActor, AAtlasWaterVolume* WaterVolume);
    
    UFUNCTION()
    void WaterVolumeBeginOverlap(AActor* OverlappedActor, AAtlasWaterVolume* WaterVolume);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateWaterVolume();
    
    UFUNCTION(BlueprintCallable)
    void StopScriptedBehavior();
    
    UFUNCTION(BlueprintCallable)
    void StartAmbush(AActor* Actor, float MaximumTime, float GracePeriod);
    
    UFUNCTION(BlueprintCallable)
    void SetState(EAtlasGrannyAIState NewState);
    
    UFUNCTION(BlueprintCallable)
    void SetLurkTargetLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetLurkTargetActor(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetDiveTeleportAllowed(const bool Allowed);
    
    UFUNCTION(BlueprintCallable)
    void SetAttention(float Attention);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackedActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSubmergedInput(AActor* Actor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnWillGrabObject(bool IsPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChange(EAtlasGrannyAIState NewState, EAtlasGrannyAIState PreviousState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartedCustomAnimation();
    
private:
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* playerPawn);
    
    UFUNCTION()
    void OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnKillObject(AActor* Object);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabbedObject(bool IsPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinishedCustomAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCancelledCustomAnimation();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBumpStarted(EAtlasGrannyBumpLevel Level);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBumpForceAdded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBumpCancelled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackStarted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttackCancelled();
    
private:
    UFUNCTION()
    void NotifyPerformBump(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyGrabActor(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedBump(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedAttack(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyCantCancelWithVelocity(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyCantCancelBump(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyCantCancelAttack(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyCanCancelKill(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyCanCancelBump(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    EAtlasGrannyAIState GetState() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLocationAtSurface() const;
    
    UFUNCTION(BlueprintPure)
    float GetDepthRatio() const;
    
    UFUNCTION(BlueprintCallable)
    AAtlasWaterVolume* GetCurrentWaterVolume();
    
    UFUNCTION(BlueprintPure)
    float GetCurrentMovementSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentAttention() const;
    
private:
    UFUNCTION()
    void ExitVolumeEndOverlap(AActor* OverlappedActor, AAtlasWaterVolume* WaterVolume);
    
public:
    UFUNCTION(BlueprintCallable)
    bool DoAnimAtLocation(AActor* TargetActor, UAnimSequence* Animation, const bool bLooping);
    
    UFUNCTION(BlueprintCallable)
    void DiveTeleportTo(AActor* Actor, EAtlasGrannyAIState ExitState);
    
    UFUNCTION(BlueprintCallable)
    void DebugPerformTestBump(AActor* Actor, EAtlasGrannyBumpLevel Level);
    
    UFUNCTION(BlueprintCallable)
    void ClearLurkTargetOverride();
    
    UFUNCTION(BlueprintCallable)
    void ClearAttentionOverride(float Attention);
    
    UFUNCTION(BlueprintCallable)
    void AddSubmergedInput(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddAttention(float Attention);
    
};

