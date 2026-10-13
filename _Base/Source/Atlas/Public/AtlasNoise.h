#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AtlasNoise.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATLAS_API UAtlasNoise : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NoiseOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NoiseInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector NoiseLocation;
    
    UAtlasNoise();

    UFUNCTION(BlueprintPure)
    float GetNoiseLevelAtLocation(const FVector& Location) const;
    
};

