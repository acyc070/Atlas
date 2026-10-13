#pragma once
#include "CoreMinimal.h"
#include "PlayerMaskDataTableVariable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct ATLAS_API FPlayerMaskDataTableVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerMasksDataTable;
    
    FPlayerMaskDataTableVariable();
};

