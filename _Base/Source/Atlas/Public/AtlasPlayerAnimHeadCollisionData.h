#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimHeadCollisionData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimHeadCollisionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    ATLAS_API FAtlasPlayerAnimHeadCollisionData();
};

