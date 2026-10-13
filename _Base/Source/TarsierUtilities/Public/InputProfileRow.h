#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TarInputActionKeyMapping.h"
#include "TarInputAxisKeyMapping.h"
#include "InputProfileRow.generated.h"

USTRUCT(BlueprintType)
struct FInputProfileRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTarInputActionKeyMapping> ActionMappingsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTarInputAxisKeyMapping> AxisMappingsArray;
    
    TARSIERUTILITIES_API FInputProfileRow();
};

