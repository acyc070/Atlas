#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AtlasBasicAIAnimMovementParams.h"
#include "AtlasBasicAIAnimSnapshot.h"
#include "AtlasBasicAIInjectedAnimationData.h"
#include "OnInjectedAnimationDelegate.h"
#include "AtlasBasicAIAnimInstance.generated.h"

class AAtlasBasicAICharacter;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasBasicAIAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInjectedAnimation OnStartedInjectedAnimation;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInjectedAnimation OnFinishedInjectedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpeedPercentage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WantedDirectionInLocalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAbortInjectedAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothedSpeedPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBasicAIInjectedAnimationData InjectedAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBasicAIAnimSnapshot AnimSnapshotData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusedDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasBasicAICharacter* CharacterReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTowardsPlayer_Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTowardsPlayer_Pitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBasicAIAnimMovementParams StandMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBasicAIAnimMovementParams CrouchMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBasicAIAnimMovementParams PreviousMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBasicAIAnimMovementParams CurrentMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendMovementParams;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* OneShotAnimation;
    
public:
    UAtlasBasicAIAnimInstance();

    UFUNCTION(BlueprintCallable)
    void RotateTowardsLocation(const FVector& aFocusedLocation);
    
    UFUNCTION(BlueprintCallable)
    void RotateTowardsDirection(const FVector& aDirection);
    
private:
    UFUNCTION()
    void ResetOneShotAnimation();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayOneShot(UAnimSequence* AnimationToPlayOnce);
    
protected:
    UFUNCTION()
    void OnAnimNotify(const FName& aNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    void InjectAnimation(const FAtlasBasicAIInjectedAnimationData& InjectedAnimationData);
    
    UFUNCTION(BlueprintPure)
    bool GetOneShotAnimation(UAnimSequence*& AnimationToPlayOnce, float& PlaybackTime) const;
    
    UFUNCTION(BlueprintCallable)
    void AbortInjectedAnimation();
    
};

