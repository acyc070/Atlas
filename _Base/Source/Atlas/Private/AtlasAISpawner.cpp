#include "AtlasAISpawner.h"
#include "Components/CapsuleComponent.h"

AAtlasAISpawner::AAtlasAISpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->bForceSpawn = false;
    this->AI = NULL;
    this->StartingQuest = NULL;
    this->bDisableSpawnOnBeginPlay = false;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->AIReference = NULL;
}

ACharacter* AAtlasAISpawner::SpawnAI(bool bAssignStartingQuest, bool bCleanUp) {
    return NULL;
}


void AAtlasAISpawner::ActivateSpawner() {
}


