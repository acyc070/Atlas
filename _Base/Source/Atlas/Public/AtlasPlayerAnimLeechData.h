#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimLeechData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimLeechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeechAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLeechFullyAttached;
    
    ATLAS_API FAtlasPlayerAnimLeechData();
};

