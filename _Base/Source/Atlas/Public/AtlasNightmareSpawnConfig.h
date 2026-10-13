#pragma once
#include "CoreMinimal.h"
#include "AtlasNightmareSpawnRules.h"
#include "EAtlasPlayerDeathType.h"
#include "AtlasNightmareSpawnConfig.generated.h"

USTRUCT(BlueprintType)
struct FAtlasNightmareSpawnConfig : public FAtlasNightmareSpawnRules {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerDeathType> deathType;
    
    ATLAS_API FAtlasNightmareSpawnConfig();
};

