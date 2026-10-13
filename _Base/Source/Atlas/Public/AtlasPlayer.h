#pragma once
#include "CoreMinimal.h"
#include "AtlasMagnetismData.h"
#include "AtlasPlayerGrabChangedSignatureDelegate.h"
#include "AtlasPlayerGrabSignatureDelegate.h"
#include "EAtlasGrabbableType.h"
#include "EAtlasPlayerDeathType.h"
#include "EAtlasPlayerFallType.h"
#include "EAtlasPlayerJumpType.h"
#include "EAtlasPlayerWalkStartType.h"
#include "TarBaseKinematicCharacter.h"
#include "AtlasPlayer.generated.h"

class AActor;
class AAtlasPlayerController;
class AAtlasRoomVolumeBase;
class UAtlasLookAtComponent;
class UAtlasPhysicsInterfaceComponent;
class UAtlasPlayerAIAwarenessComponent;
class UAtlasPlayerAnimationOverrideComponent;
class UAtlasPlayerCarryInterface;
class UAtlasPlayerClimbInterface;
class UAtlasPlayerCrankInterface;
class UAtlasPlayerCrouchComponent;
class UAtlasPlayerCustomizationComponent;
class UAtlasPlayerDamageComponent;
class UAtlasPlayerDragInterface;
class UAtlasPlayerGrabInterface;
class UAtlasPlayerHideawayInterface;
class UAtlasPlayerJumpModifierComponent;
class UAtlasPlayerLedgeInterface;
class UAtlasPlayerLeverInterface;
class UAtlasPlayerLighterComponent;
class UAtlasPlayerMaterialOverrideComponent;
class UAtlasPlayerMovementModifierComponent;
class UAtlasPlayerSpawnHandlerComponent;
class UAtlasPlayerSqueezeGapComponent;
class UAtlasPlayerStaminaComponent;
class UAtlasPlayerSwingInterface;
class UAtlasPlayerWalkStartComponent;
class UBikRetargetingComponent;
class UBoxComponent;
class UTarAnimationListenerComponent;

UCLASS(Abstract, Blueprintable, CollapseCategories)
class ATLAS_API AAtlasPlayer : public ATarBaseKinematicCharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerClimbInterface* ClimbInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerDragInterface* DragInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerCarryInterface* CarryInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerCrankInterface* CrankInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerLeverInterface* LeverInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerLedgeInterface* LedgeInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerSwingInterface* SwingInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerHideawayInterface* HideawayInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerSpawnHandlerComponent* SpawnHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerCrouchComponent* CrouchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerLighterComponent* LighterComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerStaminaComponent* StaminaComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerMovementModifierComponent* MovementModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerJumpModifierComponent* JumpModifierComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBikRetargetingComponent* BikRetargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasLookAtComponent* LookAtComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerWalkStartComponent* WalkStartComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerSqueezeGapComponent* SqueezeGapComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerAIAwarenessComponent* AIAwarenessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerAnimationOverrideComponent* AnimationOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPhysicsInterfaceComponent* PhysicsInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPlayerMaterialOverrideComponent* MaterialOverrideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerGrabSignature OnGrabStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerGrabSignature OnGrabEndEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerGrabChangedSignature OnGrabChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveSamplePerPixelVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayerController* AtlasController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSubmersionDepth;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachBackOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachBackDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachBackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachBackHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachAboveHead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabReachBelowFeet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerFallType> MaxGrabFallType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallDistances[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirControlWhenStill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAirSpeed2DToOrientMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallBounceOffWallMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallBounceOffWallMaxNormalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallOrientationMaxControlAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallOrientationMinVeloctiyAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadColliderComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPlayerGrabInterface* CurrentGrabInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasRoomVolumeBase* CurrentActiveRoomVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCapsuleForJumpPrediction;
    
public:
    AAtlasPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WantsToGrab() const;
    
    UFUNCTION(BlueprintCallable)
    void SetGrabEnabled(bool Enabled);
    
protected:
    UFUNCTION()
    void RestoreHeadCollision();
    
    UFUNCTION(BlueprintCallable)
    void RemoveMagnetismParams(AActor* Volume);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveSamplePerPixelVolume(AActor* Volume);
    
    UFUNCTION()
    void OnWalkStartCompleted(EAtlasPlayerWalkStartType Type);
    
    UFUNCTION()
    void OnEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnDeath(TEnumAsByte<EAtlasPlayerDeathType> deathType);
    
    UFUNCTION()
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void Kill(TEnumAsByte<EAtlasPlayerDeathType> deathType);
    
    UFUNCTION(BlueprintPure)
    bool IsOverlappingWith(UBoxComponent* BoxCollision, float forwardOffset, float yRadius, bool bDrawDebug) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbingType(TEnumAsByte<EAtlasGrabbableType> Type) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrabbing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
protected:
    UFUNCTION(BlueprintPure)
    int32 GetNumActiveSamplePerPixelVolumes() const;
    
public:
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasPlayerJumpType> GetLastJumpType() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasPlayerFallType> GetLastFallType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetFootIkBlendInTime(float DeltaSeconds, float DefaultBlendTime);
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAtlasPlayerDeathType> GetDeathType() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasPlayerGrabInterface* GetCurrentGrabInterface() const;
    
    UFUNCTION(BlueprintPure)
    AAtlasPlayerController* GetAtlasPlayerController() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceReleaseGrab();
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddMagnetismParams(const FAtlasMagnetismData& Data);
    
    UFUNCTION(BlueprintCallable)
    void AddActiveSamplePerPixelVolume(AActor* Volume);
    
};

