#include "AtlasCollectibleComponent.h"

UAtlasCollectibleComponent::UAtlasCollectibleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Prefix = TEXT("None");
    this->bRemoveAtSpawnIfCollected = true;
    this->bRemoveImmedietlyWhenCollected = false;
}

bool UAtlasCollectibleComponent::IsCollectedInSave() const {
    return false;
}

bool UAtlasCollectibleComponent::IsCollected() const {
    return false;
}

FName UAtlasCollectibleComponent::GetUniqueCollectibleName() const {
    return NAME_None;
}

void UAtlasCollectibleComponent::Collect() {
}


