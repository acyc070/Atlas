#pragma once
#include "CoreMinimal.h"
#include "AtlasBasicAIAnimInstance.h"
#include "AtlasNomeRandomIdleAnimData.h"
#include "AtlasNomeAnimInstance.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasNomeAnimInstance : public UAtlasBasicAIAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasNomeRandomIdleAnimData> RandomIdleAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayRandomIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* CurrentRandomIdleAnim;
    
    UAtlasNomeAnimInstance();

    UFUNCTION()
    void OnNomeAnimNotify(const FName& Notify);
    
};

