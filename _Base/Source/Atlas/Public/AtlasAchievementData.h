#pragma once
#include "CoreMinimal.h"
#include "EAtlasAchievement.h"
#include "AtlasAchievementData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasAchievementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasAchievement AchievementEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ExpectsReferenceWhenIncrementing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetCount;
    
    FAtlasAchievementData();
};

