#pragma once
#include "CoreMinimal.h"
#include "EAtlasAILimb.h"
#include "AttachBoneData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAttachBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasAILimb Hand;
    
    FAttachBoneData();
};

