#include "AtlasDLCHubManager.h"
#include "Components/BoxComponent.h"

AAtlasDLCHubManager::AAtlasDLCHubManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->StartupAction = NULL;
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
}

void AAtlasDLCHubManager::OnBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
}


