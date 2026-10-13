#pragma once
#include "CoreMinimal.h"
#include "CollectiblesVariables.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ATLAS_API FCollectiblesVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CollectiblesDataTable;
    
    FCollectiblesVariables();
};

