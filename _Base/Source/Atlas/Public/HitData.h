#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HitData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FHitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D HitNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasHit;
    
    FHitData();
};

