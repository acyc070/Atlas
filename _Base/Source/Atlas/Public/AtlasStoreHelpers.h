#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AtlasStoreHelpers.generated.h"

class UObject;

UCLASS(Blueprintable)
class ATLAS_API UAtlasStoreHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAtlasStoreHelpers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UpsellTrial(UObject* WorldContextObject);
    
};

