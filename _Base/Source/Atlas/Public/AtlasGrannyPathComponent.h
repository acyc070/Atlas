#pragma once
#include "CoreMinimal.h"
#include "AtlasAIMovementComponent.h"
#include "AtlasGrannyPathComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasGrannyPathComponent : public UAtlasAIMovementComponent {
    GENERATED_BODY()
public:
    UAtlasGrannyPathComponent(const FObjectInitializer& ObjectInitializer);

};

