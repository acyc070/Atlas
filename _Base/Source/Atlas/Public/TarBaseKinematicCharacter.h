#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ETarMovementMode.h"
#include "TarBounceOffWallsParams.h"
#include "TarCharacterLandedSignatureDelegate.h"
#include "TarCharacterLocationTargetParams.h"
#include "TarCharacterMovementModeChangedSignatureDelegate.h"
#include "TarCharacterNoParamSignatureDelegate.h"
#include "TarCharacterWallBounceSignatureDelegate.h"
#include "TarCharacterWallSlideParameters.h"
#include "TarJumpParams.h"
#include "TarMovementParams.h"
#include "TarPlatformEdgeParameters.h"
#include "TarBaseKinematicCharacter.generated.h"

class AActor;
class APhysicsVolume;
class UCapsuleComponent;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATLAS_API ATarBaseKinematicCharacter : public APawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterMovementModeChangedSignature OnMovementModeChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterLandedSignature OnLandedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterNoParamSignature OnEnteredWaterEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterNoParamSignature OnJumpBeginEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterNoParamSignature OnJumpLaunchEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterWallBounceSignature OnBounceOffWallEvent;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimulationIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulationTimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushForceScaledToMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalePushForceToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialPushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForcePointZOffsetFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepulsionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandStillThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysCheckFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumFloorDepenetrationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMaintainHorizontalGroundVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkableFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams WalkMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams CrouchMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarMovementParams FallMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAngleForTurningBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchedHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterWallSlideParameters WallSlideParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyGravityToDynamicBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarCharacterLocationTargetParams LocationTargetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarBounceOffWallsParams WallBounceParamsOnGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarBounceOffWallsParams WallBounceParamsInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarPlatformEdgeParameters PlatformEdgeParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideGravityZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarJumpParams DefaultJumpParams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval JumpPowerApplyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpAfterFallingMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpBeforeLandingMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcedMinForwardJumpWalkFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TerminalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImplementFallingVelocityLimits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpwardsFallingVelocityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SidewaysFallingVelocityLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PureBrakingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MeshFloatLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitchMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitchMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DitchTeleportRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D DitchRecoveryTestCapsuleExtents;
    
public:
    ATarBaseKinematicCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool TestMovementMode(TEnumAsByte<ETarMovementMode> Mode) const;
    
    UFUNCTION(BlueprintCallable)
    void StopMovementImmediately();
    
    UFUNCTION(BlueprintCallable)
    bool SnapToFloor(float maxTravelDistance);
    
    UFUNCTION(BlueprintCallable)
    void SmoothTeleportToComponent(float Duration, USceneComponent* TargetComponent, const FName& BoneName, const FTransform& targetTransform, TEnumAsByte<ETarMovementMode> exitMode, TEnumAsByte<ETarMovementMode> fakeMode, bool bShouldAttach);
    
    UFUNCTION(BlueprintCallable)
    void SmoothTeleportTo(float Duration, const FTransform& targetTransform, TEnumAsByte<ETarMovementMode> exitMode, TEnumAsByte<ETarMovementMode> fakeMode);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<ETarMovementMode> NewMovementMode, uint8 NewCustomMode);
    
protected:
    UFUNCTION()
    void PhysicsVolumeChanged(APhysicsVolume* NewVolume);
    
    UFUNCTION()
    void OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTeleporting() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintPure)
    bool IsJumping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInWater() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCombatMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroundedNotMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGroundedMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFalling() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching() const;
    
    UFUNCTION(BlueprintPure)
    bool HasOverlapTag(FName TagName) const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterSubmersionDepth() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeed2D() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintPure)
    float GetMovementModeTimer() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETarMovementMode> GetMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastFallLandLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetLastFallHeightZ() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFloorAdjustedCapsuleBaseLocation() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetCustomMovementSubMode() const;
    
    UFUNCTION(BlueprintPure)
    UPrimitiveComponent* GetCurrentFloorComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetCurrentFloorActor() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceMoveToLocation(FVector WorldLocation, float Speed);
    
    UFUNCTION(BlueprintCallable)
    void CancelForceMoveToLocation();
    
    UFUNCTION(BlueprintCallable)
    void AddRadialImpulse(const FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
    
    UFUNCTION(BlueprintCallable)
    void AddRadialForce(const FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff);
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector Force);
    
};

