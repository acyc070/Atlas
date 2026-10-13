#pragma once
#include "CoreMinimal.h"
#include "DestructibleActor.h"
#include "AtlasDestructibleProxyActor.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATLAS_API AAtlasDestructibleProxyActor : public ADestructibleActor {
    GENERATED_BODY()
public:
    AAtlasDestructibleProxyActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnOwnerDestroyed(AActor* ownerActor);
    
};

