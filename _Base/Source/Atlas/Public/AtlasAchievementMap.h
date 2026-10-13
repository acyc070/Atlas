#pragma once
#include "CoreMinimal.h"
#include "AtlasAchievementMap.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasAchievementMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Refs;
    
    FAtlasAchievementMap();
};

