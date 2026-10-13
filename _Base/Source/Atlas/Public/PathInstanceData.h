#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "PathInstanceData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FPathInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    FPathInstanceData();
};

