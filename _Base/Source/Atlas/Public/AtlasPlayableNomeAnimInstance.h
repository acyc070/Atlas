#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "AtlasPlayableNomeAnimOverrideParams.h"
#include "AtlasPlayerAnimWallsData.h"
#include "AtlasPlayableNomeAnimInstance.generated.h"

class UAnimSequence;
class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasPlayableNomeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverrideAnimFinishedSignature, UAnimationAsset*, Animation);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* SleepAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* WakeUpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerAnimWallsData PressOnWallData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressOnWallsBlendInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PressOnWallsBlendOutSpeed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval PressOnWallsBlendOutInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAnimOverrideBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentOverrideDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasPlayableNomeAnimOverrideParams> OverrideAnimData;
    
    UAtlasPlayableNomeAnimInstance();

    UFUNCTION(BlueprintPure)
    bool ShouldWakeUp();
    
    UFUNCTION(BlueprintPure)
    bool ShouldLeanOut();
    
    UFUNCTION(BlueprintPure)
    bool ShouldExitAnimOverride();
    
private:
    UFUNCTION()
    void OnNotifyFinishedAnimOverride(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsSleeping();
    
    UFUNCTION(BlueprintPure)
    bool IsPressingAgainstWall();
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideAnimValid();
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideAnimPlaying();
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideAnimMontageFinished();
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideAnimMontage();
    
    UFUNCTION(BlueprintPure)
    bool IsOverrideAnimBlendSpace();
    
    UFUNCTION(BlueprintPure)
    bool IsMovementMode(TEnumAsByte<EMovementMode> Mode) const;
    
    UFUNCTION(BlueprintPure)
    bool IsIdle();
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching();
    
    UFUNCTION(BlueprintPure)
    float GetWallPressAngle();
    
    UFUNCTION(BlueprintPure)
    float GetLocomotionVelocity();
    
    UFUNCTION(BlueprintPure)
    float GetCrouchAmount();
    
};

