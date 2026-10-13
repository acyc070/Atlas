#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerAnimSwimLandData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimSwimLandData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fallHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputSize;
    
    ATLAS_API FAtlasPlayerAnimSwimLandData();
};

