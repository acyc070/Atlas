#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "AtlasOptimizationVolume.generated.h"

class AActor;
class AAtlasOptimizationVolume;

UCLASS(Blueprintable)
class ATLAS_API AAtlasOptimizationVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAtlasOptimizationVolume*> NeighboringVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsInVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> UnreferencedActorsPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsToIgnoreForNextSetActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayerInside;
    
    AAtlasOptimizationVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void OnActorSpawned(AActor* SpawnedActor);
    
    UFUNCTION()
    void OnActorDestroyed(AActor* DestroyedActor);
    
};

