#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "AtlasPlayableNome.generated.h"

class AAtlasActionWaypoint;
class UAnimationAsset;
class UTarAnimationListenerComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasPlayableNome : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandStillThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallPressThresholdAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TeleportTime;
    
    AAtlasPlayableNome(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(bool bFinishAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StartAction(AAtlasActionWaypoint* Action);
    
    UFUNCTION(BlueprintCallable)
    void Sleep();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(UAnimationAsset* Animation, bool bLoop, FVector2D BlendSpaceInput);
    
private:
    UFUNCTION()
    void OnAnimationFinished(UAnimationAsset* Animation);
    
    UFUNCTION()
    void NotifyFinishedWakeUp(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedJumping(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    float GetLocomotionVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAction(bool bFinishAnimation);
    
};

