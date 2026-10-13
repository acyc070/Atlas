#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "TarSmoothFollowerParams.h"
#include "AtlasCrouchSignatureDelegate.h"
#include "EAtlasPlayerCrouchMode.h"
#include "ETarMovementMode.h"
#include "AtlasPlayerCrouchComponent.generated.h"

class AAtlasPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerCrouchComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrouchSignature OnSlideBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrouchSignature OnSlideEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrouchSignature OnWakeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverlappingCustomCrouchVolume;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchCeilingMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCeilingAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams CrouchInterpolationParams;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams OutOfBoundsInterpolationParams;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams SluggishInterpolationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SluggishTimeAfterHeavyFall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SluggishTimeAfterSleeping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBeforeAwake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlideInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSpeedToStartSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSlideTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSlideFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrawlCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrawlInputThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrawlCrouchAmountThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHungerLevelForCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
public:
    UAtlasPlayerCrouchComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementSubMode);
    
    UFUNCTION()
    void OnLanded(float fallHeight, FVector ImpactVelocity, const FHitResult& HitResult);
    
    UFUNCTION()
    void NotifyWakeUpAnimationCompleted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyLandingAnimationCompleted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyExitSlideAnimationCompleted(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyAnimationOverrideCompleted(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSliding() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSleeping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInDefaultMode() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCrawling() const;
    
    UFUNCTION(BlueprintPure)
    float GetDesiredCrouchAmount() const;
    
    UFUNCTION()
    FFloatInterval GetCrouchRange() const;
    
    UFUNCTION(BlueprintPure)
    EAtlasPlayerCrouchMode GetCrouchMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetCrouchAmount() const;
    
};

