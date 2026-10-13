#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "AtlasDLCNomeActionEventDelegate.h"
#include "AtlasDLCNomeFollowData.h"
#include "AtlasDLCNomeGrabSignatureDelegate.h"
#include "AtlasDLCNomeStateEventDelegate.h"
#include "AtlasStateInterface.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasGrabHelperMaterial.h"
#include "EAtlasLimb.h"
#include "Templates/SubclassOf.h"
#include "AtlasDLCNomeAI.generated.h"

class AActor;
class AAtlasActionWaypoint;
class AAtlasPlayer;
class UAnimSequence;
class UAnimationAsset;
class UAtlasCarryable;
class UAtlasDLCNomeWalkStartComponent;
class UAtlasGrabHelper;
class UAtlasPathFollowingComponent;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasDLCNomeAI : public ACharacter, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPathFollowingComponent* PathFollowingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasDLCNomeWalkStartComponent* WalkStartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasActionWaypoint* DefaultAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CarryMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardPathOffsetScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidancePredictionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceConeAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoamRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeFollowData FollowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MimicRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenHugged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PlayerGrabAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasCarryable* CarryableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachAboveHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachBelowFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRegrabTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GrabOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeGrabSignature OnBeginGrab;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnStartMovement;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnReachedLocation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnStartedAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnFinishedAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnStartedAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnFinishedAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeActionEvent OnFinishedAttach;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeStateEvent OnStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PlayerStruggleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StruggleAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FollowerSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnHeightShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintMovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintAvoidanceData;
    
    AAtlasDLCNomeAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAnimOverrideBlendSpaceInput(FVector2D Input);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(bool bFinishAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StartAction(AAtlasActionWaypoint* Action);
    
    UFUNCTION(BlueprintPure)
    bool SpawnedAsDefault();
    
    UFUNCTION(BlueprintCallable)
    void SetIsInDanger(bool inDanger, AAtlasActionWaypoint* DangerAction, bool canBeGrabbed);
    
    UFUNCTION(BlueprintCallable)
    void SetCower(bool isCower);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimationAsset* Animation, bool bLoop, FVector2D BlendSpaceInput);
    
private:
    UFUNCTION()
    void OnSpawnFollower(AAtlasPlayer* playerPawn);
    
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* InPlayer);
    
    UFUNCTION()
    void OnPathStarted(UAtlasPathFollowingComponent* Path);
    
    UFUNCTION()
    void OnPathFinished(UAtlasPathFollowingComponent* Path);
    
    UFUNCTION()
    void OnPathAborted(UAtlasPathFollowingComponent* Path);
    
    UFUNCTION()
    void OnGrabThrown(const FVector& Velocity);
    
    UFUNCTION()
    void OnGrabStart();
    
    UFUNCTION()
    void OnGrabEnd();
    
    UFUNCTION()
    void OnGrabChanged(UAtlasGrabHelper* GrabHelper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDropCarryable(AActor* Carryable, const FVector& ThrowVector, float LifeSpan);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginCarrying(AActor* Carryable);
    
private:
    UFUNCTION()
    void OnAnimNotify(const FName& NotifyName);
    
    UFUNCTION()
    void OnAnimationFinished(UAnimationAsset* Animation);
    
    UFUNCTION()
    void NotifyFinishedJumping(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveToLocation(FVector Location, float AcceptanceRadius, bool bSprintToLocation);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToActor(AActor* Actor, bool bObserve, float AcceptanceRadius, bool bSprintToActor);
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintPure)
    bool HasBeenHugged();
    
    UFUNCTION(BlueprintPure)
    float GetLocomotionVelocity() const;
    
    UFUNCTION(BlueprintPure)
    AAtlasActionWaypoint* GetCurrentAction();
    
    UFUNCTION(BlueprintPure)
    AActor* GetCarriedObject();
    
    UFUNCTION(BlueprintCallable)
    void ForceSpawnLocation(FVector ForcedSpawnLocation);
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseGrab();
    
    UFUNCTION(BlueprintCallable)
    void EndAction(bool bFinishAnimation);
    
    UFUNCTION(BlueprintCallable)
    void EnableFollowingBehavior();
    
    UFUNCTION(BlueprintCallable)
    void EnableAIBehavior();
    
    UFUNCTION(BlueprintCallable)
    void DropCarryable(FVector ThrowVector, float LifeSpan);
    
    UFUNCTION(BlueprintCallable)
    void DisableFollowingBehavior();
    
    UFUNCTION(BlueprintCallable)
    void DisableAIBehavior();
    
    UFUNCTION(BlueprintCallable)
    void ClearForcedSpawnLocation();
    
    UFUNCTION(BlueprintCallable)
    void BeginCarrying(TSubclassOf<AActor> Carryable);
    

    // Fix for true pure virtual functions not being implemented
};

