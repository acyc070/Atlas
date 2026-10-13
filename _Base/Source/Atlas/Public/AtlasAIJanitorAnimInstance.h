#pragma once
#include "CoreMinimal.h"
#include "AtlasAIAnimInstance.h"
#include "EAtlasAIJanitorNormalGrabType.h"
#include "AtlasAIJanitorAnimInstance.generated.h"

class AAtlasJanitorAI;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasAIJanitorAnimInstance : public UAtlasAIAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftOverlapWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightOverlapWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossFight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasAIJanitorNormalGrabType NormalGrabType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasJanitorAI* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFailedGrab;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuestBlendAnimationWeight;
    
public:
    UAtlasAIJanitorAnimInstance();

    UFUNCTION(BlueprintCallable)
    void StartQuestBlend(float Time, float BlendIn, float BlendOut);
    
    UFUNCTION(BlueprintCallable)
    void SetTickParallelQuestAnimationEnabled(const bool Enabled);
    
    UFUNCTION()
    void ResetTouchGrabBlend(const FName& NotifyName);
    
    UFUNCTION()
    void Notify_FailedGrab(const FName& NotifyName);
    
    UFUNCTION(BlueprintPure)
    bool IsTouchGrabbing() const;
    
    UFUNCTION()
    void FinishedNormalGrabAnimation(const FName& NotifyName);
    
};

