#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlasPointOfInterestActor.generated.h"

class UAtlasPointOfInterestComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasPointOfInterestActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPointOfInterestComponent* POIComponent;
    
    AAtlasPointOfInterestActor(const FObjectInitializer& ObjectInitializer);

};

