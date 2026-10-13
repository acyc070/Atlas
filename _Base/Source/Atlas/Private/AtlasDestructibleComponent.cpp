#include "AtlasDestructibleComponent.h"

UAtlasDestructibleComponent::UAtlasDestructibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReceivesDecals = false;
    this->DestructibleMesh = NULL;
    this->ImpactVelocityToFracture = 350.00f;
    this->DestructibleComponent = NULL;
}

void UAtlasDestructibleComponent::OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

bool UAtlasDestructibleComponent::IsBroken() const {
    return false;
}

UDestructibleComponent* UAtlasDestructibleComponent::Fracture(FVector hitVelocity) {
    return NULL;
}


