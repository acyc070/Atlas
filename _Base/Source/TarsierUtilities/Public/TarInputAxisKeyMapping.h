#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "TarInputAxisKeyMapping.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarInputAxisKeyMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AxisName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    FTarInputAxisKeyMapping();
};

