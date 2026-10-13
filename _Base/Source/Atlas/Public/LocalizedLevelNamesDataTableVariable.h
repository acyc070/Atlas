#pragma once
#include "CoreMinimal.h"
#include "LocalizedLevelNamesDataTableVariable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ATLAS_API FLocalizedLevelNamesDataTableVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LocalizedLevelNamesDataTable;
    
    FLocalizedLevelNamesDataTableVariable();
};

