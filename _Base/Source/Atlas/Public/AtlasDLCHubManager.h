#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AtlasStateInterface.h"
#include "AtlasDLCHubManager.generated.h"

class AAtlasActionWaypoint;
class UBoxComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasDLCHubManager : public AActor, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasActionWaypoint* StartupAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> SpawnLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxCollision;
    
    AAtlasDLCHubManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    

    // Fix for true pure virtual functions not being implemented
};

