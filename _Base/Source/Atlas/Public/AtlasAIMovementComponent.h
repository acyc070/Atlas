#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "AtlasAIMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasAIMovementComponent : public UPawnMovementComponent {
    GENERATED_BODY()
public:
    UAtlasAIMovementComponent(const FObjectInitializer& ObjectInitializer);

};

