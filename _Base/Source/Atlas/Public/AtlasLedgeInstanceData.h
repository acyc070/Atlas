#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "AtlasLedgeInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasLedgeInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    ATLAS_API FAtlasLedgeInstanceData();
};

