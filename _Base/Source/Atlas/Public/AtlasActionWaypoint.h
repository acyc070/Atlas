#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "ActionWaypointAnimEventSignatureDelegate.h"
#include "ActionWaypointAnimNotifySignatureDelegate.h"
#include "ActionWaypointEventSignatureDelegate.h"
#include "AtlasActionWaypoint.generated.h"

class AAtlasActionWaypoint;
class AAtlasDLCNomeAI;
class UAnimMontage;
class UAnimSequence;
class UAnimationAsset;
class UBlendSpaceBase;
class UPrimitiveComponent;
class USceneComponent;
class USphereComponent;

UCLASS(Blueprintable, CollapseCategories)
class ATLAS_API AAtlasActionWaypoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionWaypointEventSignature OnActionStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionWaypointEventSignature OnActionFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionWaypointEventSignature OnAttachFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionWaypointAnimEventSignature OnAnimationStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionWaypointAnimEventSignature OnAnimationFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActionWaypointAnimNotifySignature OnAnimNotifyEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintToLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObserveWaypoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAtlasTriggerVolumePreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultTeleportTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterByMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> MovementModeFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> RootMotionMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovementMode> ExitMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasActionWaypoint* NextAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D BlendSpaceInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StartSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* ActivationSphere;
    
public:
    AAtlasActionWaypoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateBlendSpaceInput(FVector2D NewInput);
    
protected:
    UFUNCTION()
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttachFinished(AAtlasDLCNomeAI* Nome);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotify(const FName& NotifyName, AAtlasDLCNomeAI* Nome);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationStarted(AAtlasDLCNomeAI* Nome, UAnimationAsset* AnimationAsset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimationFinished(AAtlasDLCNomeAI* Nome, UAnimationAsset* AnimationAsset);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionStarted(AAtlasDLCNomeAI* Nome);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnActionFinished(AAtlasDLCNomeAI* Nome);
    
public:
    UFUNCTION(BlueprintPure)
    UBlendSpaceBase* GetBlendSpace();
    
    UFUNCTION(BlueprintPure)
    UAnimSequence* GetAnimSequence();
    
    UFUNCTION(BlueprintPure)
    UAnimMontage* GetAnimMontage();
    
    UFUNCTION(BlueprintCallable)
    void EnableWaypoint(bool bUpdateOverlaps);
    
    UFUNCTION(BlueprintCallable)
    void DisableWaypoint();
    
};

