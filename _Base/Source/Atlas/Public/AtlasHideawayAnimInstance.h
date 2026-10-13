#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AtlasHideawayAnimationData.h"
#include "AtlasHideawayAnimationSet.h"
#include "AtlasHideawayAnimInstance.generated.h"

class UAtlasHideaway;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasHideawayAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasHideawayAnimationData CurrentAnimationData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasHideawayAnimationSet DefaultAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasHideawayAnimationSet DefaultPlayerAnimationSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasHideaway* AtlasHideawayComponent;
    
public:
    UAtlasHideawayAnimInstance();

};

