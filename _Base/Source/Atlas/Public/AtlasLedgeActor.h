#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlasLedgeActor.generated.h"

class UAtlasLedge;

UCLASS(Blueprintable)
class ATLAS_API AAtlasLedgeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasLedge* LedgeComponent;
    
    AAtlasLedgeActor(const FObjectInitializer& ObjectInitializer);

};

