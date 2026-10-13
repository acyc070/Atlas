#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CollectibleInfo.h"
#include "ECollectibleType.h"
#include "CollectibleTableRow.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FCollectibleTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollectibleType CollectibleGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectibleInfo> CollectiblesInGroup;
    
    FCollectibleTableRow();
};

