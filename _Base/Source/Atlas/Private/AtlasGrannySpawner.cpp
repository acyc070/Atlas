#include "AtlasGrannySpawner.h"
#include "Components/CapsuleComponent.h"

AAtlasGrannySpawner::AAtlasGrannySpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
    this->Class = NULL;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->GrannyReference = NULL;
}

AAtlasGrannyAI* AAtlasGrannySpawner::Spawn(bool bCleanUp) {
    return NULL;
}

void AAtlasGrannySpawner::ActivateSpawner() {
}


