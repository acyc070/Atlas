#pragma once
#include "CoreMinimal.h"
#include "NewNameAndTitle.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FNewNameAndTitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewEmployeeName;
    
    FNewNameAndTitle();
};

