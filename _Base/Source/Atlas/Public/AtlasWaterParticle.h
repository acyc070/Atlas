#pragma once
#include "CoreMinimal.h"
#include "AtlasWaterParticle.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct ATLAS_API FAtlasWaterParticle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinZVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    FAtlasWaterParticle();
};

