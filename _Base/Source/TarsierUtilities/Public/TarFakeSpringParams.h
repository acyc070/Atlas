#pragma once
#include "CoreMinimal.h"
#include "TarFakeSpringParams.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarFakeSpringParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LinearDamping;
    
    FTarFakeSpringParams();
};

