#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "AtlasDollhousePlayerController.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasDollhousePlayerController : public APlayerController {
    GENERATED_BODY()
public:
    AAtlasDollhousePlayerController(const FObjectInitializer& ObjectInitializer);

};

