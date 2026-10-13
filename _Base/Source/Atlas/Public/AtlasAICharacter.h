#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AIAlertedData.h"
#include "AIHostileData.h"
#include "AIOnSurfaceData.h"
#include "AIPursuitBehaviorParameters.h"
#include "AISearchBehaviorParameters.h"
#include "AtlasAI.h"
#include "AtlasAIHasReachedDelegate.h"
#include "AttachBoneData.h"
#include "DoorInteractionParameters.h"
#include "EAtlasAIInterest.h"
#include "EAtlasAILimb.h"
#include "EAtlasAIState.h"
#include "EDoorInteractionType.h"
#include "EDoorState.h"
#include "EPlayerSurfaceState.h"
#include "GrabParameters.h"
#include "HearingParameters.h"
#include "IgnorePlayerPositionData.h"
#include "KillAnimationData.h"
#include "SoundData.h"
#include "VisionParameters.h"
#include "AtlasAICharacter.generated.h"

class AAIController;
class AActor;
class AAtlasAINode;
class AAtlasAIQuest;
class AAtlasPlayer;
class UAIPerceptionComponent;
class UAnimSequence;
class UAtlasAIAnimInstance;
class UAtlasAIBeyondReachBehavior;
class UAtlasAIHostileSearchBehavior;
class UAtlasAIInvestigateBehavior;
class UAtlasAIPursuitBehavior;
class UAtlasAISearchBehavior;
class UBikRetargetingComponent;
class UPhysicsHandleComponent;
class USceneComponent;
class UTarAnimationListenerComponent;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasAICharacter : public AAtlasAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DirectionToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraDetectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeAfterPlayerThrownStillReacts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIgnorePlayerPositionData PlayerIgnoreData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttachBoneData> AttachBoneNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTeleportSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTeleportRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeItTakesToTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObstacleSearchRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidancePredictionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGrabParameters GrabParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelaxGrabRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverridePursuitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISearchBehaviorParameters SearchBehaviorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISearchBehaviorParameters HostileSearchBehaviorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HostileSearchRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIPursuitBehaviorParameters PursuitBehaviorParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlertReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastAlertReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIAlertedData AlertedStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AntiBounceLedgeLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIOnSurfaceData OnTopData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSearchingUnderTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtraTimeInBelowSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBeforeAllowedToEnterAlertedAgain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorState CurrentDoorState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDoorInteractionType CurrentDoorInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDoorInteractionParameters> DoorInteractionParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorPositionAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoorAngleAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToSearchForDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* InvestigateAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHearingParameters HearingParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HearingSensitivityModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundData SoundData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathfindingWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAIQuest* StartingQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothTeleportAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKillAnimationData> KillAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToIgnoreDeathQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackDeathTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallbackDeathTimeWithQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VerticalDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisionParameters VisionParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationToPointOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PointOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerIsInLineOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDynamicAlertedTimer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasAIHasReached OnHasReachedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBikRetargetingComponent* BikRetargetingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIHostileData HostileData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasAISearchBehavior* SearchBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasAIPursuitBehavior* PursuitBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasAIInvestigateBehavior* InvestigateBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasAIBeyondReachBehavior* BeyondReachBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasAIHostileSearchBehavior* HostileSearchBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsHandleComponent* HandsPhysicsHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* GrabbedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* grabbedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAtlasAIQuest*> QuestStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasAIAnimInstance* AnimationInstance;
    
public:
    AAtlasAICharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UseDoor(UAnimSequence* Animation, AActor* doorActor, EAtlasAILimb Door, bool bSmoothTeleport, const FTransform& DesiredTransform, bool bEnterAndExit);
    
    UFUNCTION(BlueprintCallable)
    void StopSmoothTeleport();
    
    UFUNCTION(BlueprintCallable)
    void StopRotation();
    
    UFUNCTION(BlueprintCallable)
    void StopPursuing();
    
    UFUNCTION(BlueprintCallable)
    void StopDoorInteraction();
    
    UFUNCTION(BlueprintCallable)
    void StopCurrentQuest();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(bool bFinishAnimation);
    
private:
    UFUNCTION()
    void StartOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartedListening();
    
    UFUNCTION(BlueprintCallable)
    void SmoothTeleportToTransform(const FTransform& Transform, float TeleportSpeed, float RotationSpeed, bool bOverrideAnimations);
    
    UFUNCTION(BlueprintCallable)
    void SmoothRotateTowardsPlayer(float Duration, bool bOverrideAnimations);
    
    UFUNCTION(BlueprintCallable)
    void SkipStopAnimation();
    
    UFUNCTION(BlueprintCallable)
    void SetVisionDistance(const float StandardVisionDistance, const float ExtraVisionDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetQuestAudioState(const FName& NameOfState);
    
    UFUNCTION(BlueprintCallable)
    void SetPermanentDetectionEnabled(const bool Enabled, bool bClearDetection);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementModifier(const float Modifier);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxHostileTime(const float HotileTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIKEnabled(const bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePlayer(bool Ignore);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationEndsInMovement(bool bEndsInMovement);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowedToChangeLedge(const bool Allowed);
    
    UFUNCTION(BlueprintCallable)
    void SetAIToPursuit();
    
    UFUNCTION(BlueprintCallable)
    void SetAIToHostileSearch(const float HostileSearchRadius, const float HostileSearchTime);
    
private:
    UFUNCTION()
    void SaveCurrentGrabAngle(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    void RotateCharacterToFaceOrientation(const FRotator& OrientationToFace, bool ResetStopMovement);
    
    UFUNCTION(BlueprintCallable)
    void RotateCharacterToFaceLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void RotateCharacter(float AngleToRotate);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllQuests();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationWithCustomBlend(UAnimSequence* Animation, float BlendTime, bool bLoop, bool bEndInMovement);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimSequence* Animation, bool bLoop, bool bEndInMovement);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStateChange(EAtlasAIState NewState, EAtlasAIState PreviousState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSetAudioState(const FName& NameOfState);
    
private:
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* playerPawn);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMissedGrab();
    
protected:
    UFUNCTION()
    void OnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
private:
    UFUNCTION()
    void OnHasReachedDestination();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnGrabbedPlayer();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlavourAnimationStopped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFlavourAnimationStarted(const FName& NameOfAnimation);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectPlayer();
    
protected:
    UFUNCTION()
    void NotifySnapshotMovementData(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyRestartGame(const FName& NotifyName);
    
private:
    UFUNCTION()
    void NotifyMissedGrab(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyLeftTired(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyLeftStopMovement(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyLeftCustomAnimation(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyLeftAlerted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFullyBlendedStopMovement(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFullyBlendedIntoDoorInteraction(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedAlerted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredTired(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredStartMovement(const FName& NotifyName);
    
protected:
    UFUNCTION()
    void NotifyEnteredQuickTurn(const FName& NotifyName);
    
private:
    UFUNCTION()
    void NotifyEnteredGrab(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredBelowSurfaceLoop(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnteredAlerted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyAlertedPOIUpdate(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveToNode(AAtlasAINode* ReferenceToNode);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void MissedGrab();
    
    UFUNCTION(BlueprintCallable)
    void ListenAnimationDone();
    
    UFUNCTION(BlueprintPure)
    bool IsPursuing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsHoldingSomething();
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlerted() const;
    
    UFUNCTION(BlueprintCallable)
    void InvestigateSoundSource(const FVector& Position, float Strength, float Accuracy);
    
    UFUNCTION(BlueprintPure)
    bool HasPointOfInterest() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleSoundNormally();
    
    UFUNCTION(BlueprintCallable)
    void HandIntersectsWithActor(AActor* Actor, EAtlasAILimb OverlappingLimb);
    
    UFUNCTION(BlueprintCallable)
    void GrabActor(AActor* Actor, EAtlasAILimb GrabbingHand, const FName CustomAttachBoneName, bool IsSocket, const FName SkinnedBoneName);
    
    UFUNCTION(BlueprintPure)
    float GetTargetAngle() const;
    
    UFUNCTION(BlueprintPure)
    EPlayerSurfaceState GetPlayerSurfaceState() const;
    
    UFUNCTION(BlueprintPure)
    AAtlasPlayer* GetPlayer() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasAIInterest GetInterestLevel() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetGrabbedActor() const;
    
    UFUNCTION(BlueprintPure)
    float GetFixedTargetAngle(float currentFixedAngle, float TurnAngleThreshold) const;
    
    UFUNCTION(BlueprintPure)
    EAtlasAIState GetCurrentState() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentSpeed() const;
    
    UFUNCTION(BlueprintPure)
    AAtlasAIQuest* GetCurrentQuest() const;
    
    UFUNCTION(BlueprintPure)
    float GetAngleToLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintCallable)
    void FinishedUsingDoor();
    
    UFUNCTION(BlueprintCallable)
    bool ExistsPathToLocation(const FVector& Location);
    
private:
    UFUNCTION()
    void EndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void EndAnimationInMovement();
    
    UFUNCTION(BlueprintCallable)
    void DropOrTPActor();
    
    UFUNCTION(BlueprintCallable)
    void DropActor();
    
    UFUNCTION(BlueprintCallable)
    void DetectPlayer();
    
    UFUNCTION(BlueprintCallable)
    void CancelPath();
    
    UFUNCTION(BlueprintCallable)
    void AtlasAttachActor(AActor* Actor, EAtlasAILimb GrabbingHand, const FName CustomAttachBoneName, bool IsSocket, const FName SkinnedBoneName);
    
    UFUNCTION(BlueprintCallable)
    void AlertAI(UAnimSequence* CustomAlertedAnimation);
    
    UFUNCTION(BlueprintCallable)
    void AddQuest(AAtlasAIQuest* Quest, bool bForceState);
    
};

