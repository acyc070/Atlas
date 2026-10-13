#pragma once
#include "CoreMinimal.h"
#include "EAtlasAILimb.h"
#include "AINotifyAnimationData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct ATLAS_API FAINotifyAnimationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GrabbedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasAILimb LimbToAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSocket;
    
    FAINotifyAnimationData();
};

