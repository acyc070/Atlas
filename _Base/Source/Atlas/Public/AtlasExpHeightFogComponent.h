#pragma once
#include "CoreMinimal.h"
#include "Components/ExponentialHeightFogComponent.h"
#include "AtlasExpHeightFogComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasExpHeightFogComponent : public UExponentialHeightFogComponent {
    GENERATED_BODY()
public:
    UAtlasExpHeightFogComponent(const FObjectInitializer& ObjectInitializer);

};

