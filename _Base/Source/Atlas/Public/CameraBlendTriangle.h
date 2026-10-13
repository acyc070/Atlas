#pragma once
#include "CoreMinimal.h"
#include "CameraBlendTriangle.generated.h"

USTRUCT(BlueprintType)
struct FCameraBlendTriangle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 P0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 P1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 P2;
    
    ATLAS_API FCameraBlendTriangle();
};

