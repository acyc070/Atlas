#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITensionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAITensionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAITensionComponent(const FObjectInitializer& ObjectInitializer);

};

