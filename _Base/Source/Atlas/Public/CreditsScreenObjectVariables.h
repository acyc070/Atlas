#pragma once
#include "CoreMinimal.h"
#include "CreditsScreenObjectVariables.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ATLAS_API FCreditsScreenObjectVariables {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CreditsScreenSpreadSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* JapaneseCreditsSpreadSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DLCCreditsScreenVariables;
    
    FCreditsScreenObjectVariables();
};

