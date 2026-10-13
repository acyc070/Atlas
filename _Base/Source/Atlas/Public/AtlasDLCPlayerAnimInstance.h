#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlasPlayerAnimInstance.h"
#include "AtlasPlayerAnimLocomotionSet.h"
#include "AtlasPlayerAnimSwimData.h"
#include "AtlasPlayerAnimSwimLandData.h"
#include "AtlasDLCPlayerAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasDLCPlayerAnimInstance : public UAtlasPlayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimLocomotionSet WadingLocomotionSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrabLedgeSwimBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StrafeDirection;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSwimStopAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimSwimData SwimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimSwimLandData SwimLandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimQuickTurnAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimIdleSpeedTreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSubmersionDepthToClimbDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* StandCarryCylinderPickupAnimation;
    
public:
    UAtlasDLCPlayerAnimInstance();

    UFUNCTION(BlueprintPure)
    bool ShouldStrafeQuickTurn() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldExitSwimmingState() const;
    
protected:
    UFUNCTION()
    void OnSwimLandingComplete(const FName& NotifyName);
    
    UFUNCTION()
    void OnFinishedStopSwimming(const FName& NotifyName);
    
    UFUNCTION()
    void OnExitSwimming();
    
    UFUNCTION()
    void OnEnterSwimming();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsStrafing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCombat() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrafeQuickTurnAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetStrafeLookAtAngle() const;
    
};

