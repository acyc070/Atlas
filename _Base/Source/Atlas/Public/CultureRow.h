#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ECultureEnum.h"
#include "CultureRow.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FCultureRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CultureString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECultureEnum CultureEnum;
    
    FCultureRow();
};

