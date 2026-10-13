#pragma once
#include "CoreMinimal.h"
#include "AtlasPhysicsImpactSound.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FAtlasPhysicsImpactSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    ATLAS_API FAtlasPhysicsImpactSound();
};

