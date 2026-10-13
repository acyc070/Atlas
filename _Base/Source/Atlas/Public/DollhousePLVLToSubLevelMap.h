#pragma once
#include "CoreMinimal.h"
#include "DollhousePLVLToSubLevelMap.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FDollhousePLVLToSubLevelMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PersistentLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
    FDollhousePLVLToSubLevelMap();
};

