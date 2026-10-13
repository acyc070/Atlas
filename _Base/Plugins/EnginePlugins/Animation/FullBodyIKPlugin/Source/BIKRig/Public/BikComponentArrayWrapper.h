#pragma once
#include "CoreMinimal.h"
#include "BikComponentArrayWrapper.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FBikComponentArrayWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> Data;
    
    BIKRIG_API FBikComponentArrayWrapper();
};

