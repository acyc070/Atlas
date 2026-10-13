#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "AtlasPlayerAnimOverrideParams.h"
#include "ETarMovementMode.h"
#include "AtlasPlayerAnimationOverrideComponent.generated.h"

class AAtlasPlayer;
class UAnimSequence;
class UAtlasPlayerIdleAnimations;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerAnimationOverrideComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SprintIntoWallLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SprintIntoWallRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SprintIntoWallLowLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SprintIntoWallLowRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DizzyAnimationDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PetrifyInitialAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ElectricityGrabKnockBackAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoePitJumpFailControlAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ShoePitJumpFailAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ShoePitJumpFailStandAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* MakeNoiseAnimationStand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* MakeNoiseAnimationCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MakeNoiseCrouchAmountThreshold;
    
public:
    UAtlasPlayerAnimationOverrideComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool WantsToPlayAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveIdleAnimationSetOverride(UObject* Owner);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(FAtlasPlayerAnimOverrideParams OverrideParams);
    
    UFUNCTION(BlueprintCallable)
    void OverrideIdleAnimationSet(UObject* Owner, UAtlasPlayerIdleAnimations* Animations);
    
private:
    UFUNCTION()
    void OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode);
    
    UFUNCTION()
    void OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult);
    
    UFUNCTION()
    void OnExitState(const FName& NotifyName);
    
    UFUNCTION()
    void OnEnterState(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelAnimation();
    
};

