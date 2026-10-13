#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "AtlasGrannySpawner.generated.h"

class AAtlasGrannyAI;
class UCapsuleComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasGrannySpawner : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAtlasGrannyAI> Class;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasGrannyAI* GrannyReference;
    
public:
    AAtlasGrannySpawner(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AAtlasGrannyAI* Spawn(bool bCleanUp);
    
    UFUNCTION(BlueprintCallable)
    void ActivateSpawner();
    
};

