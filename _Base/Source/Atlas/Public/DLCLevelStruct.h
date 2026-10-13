#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EAtlasDLC.h"
#include "DLCLevelStruct.generated.h"

USTRUCT(BlueprintType)
struct FDLCLevelStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasDLC LevelEnum;
    
    ATLAS_API FDLCLevelStruct();
};

