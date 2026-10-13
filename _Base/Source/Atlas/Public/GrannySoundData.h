#pragma once
#include "CoreMinimal.h"
#include "GrannySoundData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannySoundData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HandBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistanceToHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceToPlayer;
    
    FGrannySoundData();
};

