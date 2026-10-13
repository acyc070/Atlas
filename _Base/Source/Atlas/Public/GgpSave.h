#pragma once
#include "CoreMinimal.h"
#include "GgpSave.generated.h"

class UAtlasState;

USTRUCT(BlueprintType)
struct FGgpSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasState* Save;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerStartTag;
    
    ATLAS_API FGgpSave();
};

