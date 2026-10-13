#pragma once
#include "CoreMinimal.h"
#include "AtlasAnimSelectionData.h"
#include "AtlasPlayerAnimIdleData.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerAnimIdleData : public FAtlasAnimSelectionData {
    GENERATED_BODY()
public:
    ATLAS_API FAtlasPlayerAnimIdleData();
};

