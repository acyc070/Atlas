#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerController.h"
#include "AtlasDLCPlayerController.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasDLCPlayerController : public AAtlasPlayerController {
    GENERATED_BODY()
public:
    AAtlasDLCPlayerController(const FObjectInitializer& ObjectInitializer);

};

