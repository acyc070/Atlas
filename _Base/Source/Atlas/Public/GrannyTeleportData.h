#pragma once
#include "CoreMinimal.h"
#include "GrannyTeleportData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannyTeleportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTeleportDistance;
    
    FGrannyTeleportData();
};

