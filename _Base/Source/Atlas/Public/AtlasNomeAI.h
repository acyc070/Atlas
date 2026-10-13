#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AtlasBasicAICharacter.h"
#include "AtlasNomeChangeStateSignatureDelegate.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasGrabHelperMaterial.h"
#include "EAtlasLimb.h"
#include "EAtlasNomeState.h"
#include "AtlasNomeAI.generated.h"

class AAtlasPlayer;
class ACharacter;
class UAnimSequence;
class UAtlasCarryable;
class UAtlasCollectibleComponent;
class UAtlasGrabHelper;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasNomeAI : public AAtlasBasicAICharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasCarryable* CarryableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasCollectibleComponent* CollectibleComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasNomeChangeStateSignature OnNomeStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* PlayerReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFollowingRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval StopFollowingRange;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval MimicInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* JumpAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ReactAnimSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasNomeState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartRoamingAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MimicAtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PlayerGrabAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedIsBlocked;
    
public:
    AAtlasNomeAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCurrentState(EAtlasNomeState NewState, bool bStopMovement);
    
    UFUNCTION()
    void OnPlayerSpawn(AAtlasPlayer* SpawnedPlayer);
    
protected:
    UFUNCTION()
    void OnPlayerMakeNoise(const FName& Notify);
    
    UFUNCTION()
    void OnMovementModeChangedEvent(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
public:
    UFUNCTION()
    void OnGrabThrown(const FVector& Velocity);
    
    UFUNCTION()
    void OnGrabStart();
    
    UFUNCTION()
    void OnGrabEnd();
    
    UFUNCTION()
    void OnGrabChanged(UAtlasGrabHelper* GrabHelper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material);
    
    UFUNCTION()
    void HandleState_Landing(float DeltaTime);
    
    UFUNCTION()
    void HandleState_IdleStill(float DeltaTime);
    
    UFUNCTION()
    void HandleState_IdleRoam(float DeltaTime);
    
    UFUNCTION()
    void HandleState_FollowSix(float DeltaTime);
    
    UFUNCTION()
    void HandleState_Flying(float DeltaTime);
    
    UFUNCTION()
    void HandleState_Flee(float DeltaTime);
    
    UFUNCTION()
    void HandleState_Custom(float DeltaTime);
    
    UFUNCTION()
    void HandleState_Cower(float DeltaTime);
    
    UFUNCTION()
    void HandleState_Carried(float DeltaTime);
    
};

