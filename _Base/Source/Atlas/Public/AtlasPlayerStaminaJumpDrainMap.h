#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerJumpType.h"
#include "AtlasPlayerStaminaJumpDrainMap.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerStaminaJumpDrainMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerJumpType> Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Drain;
    
    ATLAS_API FAtlasPlayerStaminaJumpDrainMap();
};

