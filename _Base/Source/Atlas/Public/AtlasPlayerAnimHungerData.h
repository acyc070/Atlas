#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimHungerData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimHungerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CrouchAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpineLayeredBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayeredBlendWeight;
    
    ATLAS_API FAtlasPlayerAnimHungerData();
};

