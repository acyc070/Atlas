#pragma once
#include "CoreMinimal.h"
#include "TarFakeSpringParams.h"
#include "TarFakeSpring.generated.h"

USTRUCT(BlueprintType)
struct TARSIERUTILITIES_API FTarFakeSpring : public FTarFakeSpringParams {
    GENERATED_BODY()
public:
    FTarFakeSpring();
};

