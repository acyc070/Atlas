#include "AtlasItemSlotComponent.h"

UAtlasItemSlotComponent::UAtlasItemSlotComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerTriggerRadius = 50.00f;
    this->bLocked = false;
    this->bCanGrabToRemoveItem = false;
    this->InitiallyInsertedActor = NULL;
    this->CurrentItem = NULL;
}

void UAtlasItemSlotComponent::SetUpInitiallyInsertedItem(UAtlasCarryable* Item) {
}

bool UAtlasItemSlotComponent::IsItemInSlot() const {
    return false;
}

FName UAtlasItemSlotComponent::GetCurrentItemName() const {
    return NAME_None;
}

UAtlasCarryable* UAtlasItemSlotComponent::GetCurrentItem() const {
    return NULL;
}

void UAtlasItemSlotComponent::EjectItem() {
}


