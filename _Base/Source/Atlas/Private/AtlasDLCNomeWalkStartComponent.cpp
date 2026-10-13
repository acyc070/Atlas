#include "AtlasDLCNomeWalkStartComponent.h"

UAtlasDLCNomeWalkStartComponent::UAtlasDLCNomeWalkStartComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WalkStartAngleThreshold = 60.00f;
}

void UAtlasDLCNomeWalkStartComponent::OnStartMovement(AAtlasDLCNomeAI* Nome) {
}

void UAtlasDLCNomeWalkStartComponent::NotifyWalkStartCompleted(const FName& NotifyName) {
}


