#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "AtlasDLCNomeAnimOverrideParams.h"
#include "EAtlasDLCNomeState.h"
#include "AtlasDLCNomeAnimInstance.generated.h"

class UAnimSequence;
class UAnimationAsset;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasDLCNomeAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOverrideAnimFinishedSignature, UAnimationAsset*, Animation);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumAnimOverrideBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentOverrideDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasDLCNomeAnimOverrideParams> OverrideAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* JumpAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWalkStartActive;
    
    UAtlasDLCNomeAnimInstance();

    UFUNCTION(BlueprintPure)
    bool WasThrown();
    
    UFUNCTION(BlueprintPure)
    bool ShouldExitWalking();
    
    UFUNCTION(BlueprintPure)
    bool ShouldExitAnimOverride();
    
private:
    UFUNCTION()
    void OnWalkStartCompleted();
    
    UFUNCTION()
    void OnWalkStartBegin();
    
    UFUNCTION()
    void OnNotifyFinishedAnimOverride(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    bool MovementModeIs(TEnumAsByte<EMovementMode> Mode);
    
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
    bool IsMoving();
    
    UFUNCTION(BlueprintPure)
    bool IsJumping();
    
    UFUNCTION(BlueprintPure)
    bool IsCrouching();
    
    UFUNCTION(BlueprintPure)
    bool IsCarrying();
    
    UFUNCTION(BlueprintPure)
    float GetWalkStartAngle();
    
    UFUNCTION(BlueprintPure)
    float GetTargetAngle();
    
    UFUNCTION(BlueprintPure)
    float GetMaxSpeed();
    
    UFUNCTION(BlueprintPure)
    float GetLocomotionVelocity();
    
    UFUNCTION(BlueprintPure)
    bool CurrentStateIs(EAtlasDLCNomeState State);
    
};

