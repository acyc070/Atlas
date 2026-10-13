#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "AtlasAISpawner.generated.h"

class AAtlasAI;
class AAtlasAIQuest;
class ACharacter;
class UCapsuleComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasAISpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAtlasAI> AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAIQuest* StartingQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableSpawnOnBeginPlay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* AIReference;
    
public:
    AAtlasAISpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    ACharacter* SpawnAI(bool bAssignStartingQuest, bool bCleanUp);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnSpawnedAI(const ACharacter* SpawnedAI);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSpawner();
    
};

