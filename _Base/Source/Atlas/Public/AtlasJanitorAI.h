#pragma once
#include "CoreMinimal.h"
#include "EBikTaskIdentifier.h"
#include "Engine/EngineTypes.h"
#include "AtlasAICharacter.h"
#include "AtlasJanitorClippingData.h"
#include "AtlasJanitorGrabData.h"
#include "AtlasJanitorOnTopData.h"
#include "AtlasJanitorTouchData.h"
#include "EAtlasAILimb.h"
#include "AtlasJanitorAI.generated.h"

class AActor;
class UAnimSequence;
class UCapsuleComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasJanitorAI : public AAtlasAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasJanitorOnTopData OnTopJanitorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasJanitorGrabData GrabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* LeftHandCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* RightHandCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TransferAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TouchGrabBaseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGrabImmediatelyOnTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloseToPlayerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InvestigateReactionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrongReactionThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReactionCooldownOnSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PursuingHearingModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* SixthSenseCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* PursuitSixthSenseCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraSixthSenseActivationHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasJanitorTouchData TouchData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialDetectionRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftMaterialDetectionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightMaterialDetectionBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasJanitorClippingData ClippingData;
    
    AAtlasJanitorAI(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void StartOverlapRight(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION()
    void StartOverlapLeft(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
private:
    UFUNCTION()
    void SixthSenseEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void SixthSenseBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupIKGrabbing(EBikTaskIdentifier GrabbingHand);
    
    UFUNCTION(BlueprintCallable)
    void SetupForCutOffArm();
    
    UFUNCTION(BlueprintCallable)
    void SetIsBossFight(bool isBossFight);
    
    UFUNCTION(BlueprintCallable)
    void SetForceGrab(bool ForceGrab);
    
private:
    UFUNCTION()
    void PursuitSixthSenseEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void PursuitSixthSenseBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
protected:
    UFUNCTION()
    void OnTransferToHand(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTouchGrabStarted();
    
protected:
    UFUNCTION()
    void OnStartedNormalGrab(const FName& NotifyName);
    
    UFUNCTION()
    void OnNotifyEnableIK(const FName& NotifyName);
    
    UFUNCTION()
    void OnNotifyDisableIK(const FName& NotifyName);
    
    UFUNCTION()
    void OnLeftMovementState(const FName& NotifyName);
    
    UFUNCTION()
    void OnGrabNotify(const FName& NotifyName);
    
    UFUNCTION()
    void OnFinishedOnTopEntry(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedQuickTurn(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasTouchHotspot(EAtlasAILimb Limb) const;
    
    UFUNCTION(BlueprintCallable)
    void HandEndOverlap(AActor* Actor, EAtlasAILimb OverlappingLimb);
    
    UFUNCTION(BlueprintPure)
    FName GetSoundMaterial(const EAtlasAILimb Limb, const bool ShowDebug) const;
    
    UFUNCTION(BlueprintPure)
    float GetSixthSenseRange() const;
    
    UFUNCTION(BlueprintPure)
    float GetPredictedGrabDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetPredictedGrabAngle() const;
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetHotspotAnimation(EAtlasAILimb Limb) const;
    
protected:
    UFUNCTION()
    void EndOverlapRight(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void EndOverlapLeft(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableTouchGrab();
    
    UFUNCTION(BlueprintCallable)
    void DisableTouchGrabs();
    
    UFUNCTION(BlueprintCallable)
    void DisableGrab();
    
    UFUNCTION(BlueprintCallable)
    void CancelGrab();
    
};

