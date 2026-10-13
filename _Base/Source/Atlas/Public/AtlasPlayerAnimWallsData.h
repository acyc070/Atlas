#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimWallsData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimWallsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContactAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightBlendWeight;
    
    ATLAS_API FAtlasPlayerAnimWallsData();
};

