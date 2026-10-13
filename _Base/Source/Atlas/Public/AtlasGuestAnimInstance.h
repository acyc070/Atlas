#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AnimationData.h"
#include "GuestMovementData.h"
#include "AtlasGuestAnimInstance.generated.h"

class AAtlasGuestAI;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasGuestAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimationData AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SittingBlendTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuestMovementData MovementData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasGuestAI* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TypeBlendWeight;
    
public:
    UAtlasGuestAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    bool UseLeftTransition() const;
    
    UFUNCTION(BlueprintPure)
    bool ShouldUseLookAt() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtRotator() const;
    
};

