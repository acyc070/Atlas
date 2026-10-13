#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NewNameAndTitle.h"
#include "NewCreditsGroup.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FNewCreditsGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNewNameAndTitle> NewEmployeesInGroup;
    
    FNewCreditsGroup();
};

