#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TarMath.generated.h"

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarMath : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTarMath();

    UFUNCTION(BlueprintPure)
    static float K2_GetSignedAngleBetweenVectors(FVector A, FVector B, FVector Plane);
    
    UFUNCTION(BlueprintPure)
    static float GetAngleBetweenVectors(const FVector& A, const FVector& B);
    
};

