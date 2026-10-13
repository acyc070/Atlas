#pragma once
#include "CoreMinimal.h"
#include "AtlasGameMode.h"
#include "AtlasDLCGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ATLAS_API AAtlasDLCGameMode : public AAtlasGameMode {
    GENERATED_BODY()
public:
    AAtlasDLCGameMode(const FObjectInitializer& ObjectInitializer);

};

