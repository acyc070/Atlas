#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SaveFileInfoConfigRow.generated.h"

USTRUCT(BlueprintType)
struct FSaveFileInfoConfigRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText LocalizedText;
    
    ATLAS_API FSaveFileInfoConfigRow();
};

