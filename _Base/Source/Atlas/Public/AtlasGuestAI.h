#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AtlasAI.h"
#include "AtlasPlayerAnimOverrideParams.h"
#include "EAtlasPlayerDeathType.h"
#include "EGuestId.h"
#include "EGuestPursuitMode.h"
#include "EGuestState.h"
#include "EGuestTransitionDirection.h"
#include "EGuestType.h"
#include "GuestAnimationBlueprint.h"
#include "GuestGrabData.h"
#include "HitData.h"
#include "AtlasGuestAI.generated.h"

class AAIController;
class AActor;
class AAtlasPlayer;
class UAIPerceptionComponent;
class UAnimSequence;
class UAtlasGuestAnimInstance;
class UCapsuleComponent;
class UTarAnimationListenerComponent;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasGuestAI : public AAtlasAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuestGrabData StationaryGrabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuestGrabData MobileGrabData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PeripheralVisionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SightDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransitionToMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanBeAlerted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeedModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwipe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitData HitData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerOnBack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MobileMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StationaryMeshOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShakeOffDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactVelocityTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestId AnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuestAnimationBlueprint> AnimBlueprints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestTransitionDirection PreferedTransitionDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayImpactReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnTopReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidancePredictionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimOverrideParams PlayerStumbleParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReleaseLedgeDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerDeathType> ImpactDeathType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasGuestAnimInstance* AnimationInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* BodyCapsule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* BodyCapsuleOverlap;
    
public:
    AAtlasGuestAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAnimation(bool bFinishAnimation);
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseLookAt() const;
    
    UFUNCTION(BlueprintCallable)
    void SetZombieMode(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void SetType(EGuestType NewType);
    
    UFUNCTION(BlueprintCallable)
    void SetReachDistance(float ReachDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetPursuitMode(EGuestPursuitMode Mode);
    
    UFUNCTION(BlueprintCallable)
    void SetForcePlayerReleaseLedge(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimSequence* Animation, bool bLoop);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChange(EGuestState NewState, EGuestState PreviousState);
    
private:
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* playerPawn);
    
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabbedPlayer();
    
private:
    UFUNCTION()
    void NotifyRestartGame(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyGrabPlayer(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedTransition(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedGrab(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedAlerted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredQuickTurn(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredGrabLoop(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredGrab(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void MoveToLocation(FVector Location, bool forceMove);
    
    UFUNCTION(BlueprintPure)
    bool IsInGrabRange() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGrabbedPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool HasFininshedGrab() const;
    
    UFUNCTION(BlueprintPure)
    EGuestState GetState() const;
    
    UFUNCTION(BlueprintPure)
    float GetFixedAngleToPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetAngleToPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool CanToTransitionToMobile() const;
    
    UFUNCTION(BlueprintPure)
    bool CanGrabPlayer() const;
    
};

