#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasGrannyDebugComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasGrannyDebugComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasGrannyDebugComponent(const FObjectInitializer& ObjectInitializer);

};

