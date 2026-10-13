#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "AtlasUIAction.h"
#include "UIInputConfigRow.generated.h"

USTRUCT(BlueprintType)
struct FUIInputConfigRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AtlasUIAction UIActionEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> ActionKeysArray;
    
    ATLAS_API FUIInputConfigRow();
};

