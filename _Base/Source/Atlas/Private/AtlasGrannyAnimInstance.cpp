#include "AtlasGrannyAnimInstance.h"

UAtlasGrannyAnimInstance::UAtlasGrannyAnimInstance() {
    this->State = EAtlasGrannyAIState::Lurk;
    this->bPerformingBump = false;
    this->CurrentBumpLevel = EAtlasGrannyBumpLevel::Low;
    this->bPerformingAttack = false;
    this->AttackHeight = 0.00f;
    this->AttackDistance = 0.00f;
    this->bDiving = false;
    this->RemainingDive = 0.00f;
    this->bDivingDownwards = false;
    this->CurrentTurnRate = 0.00f;
    this->bIsKillingPlayer = false;
}

void UAtlasGrannyAnimInstance::NotifyLeftCustomAnimation(const FName& NotifyName) {
}

void UAtlasGrannyAnimInstance::NotifyEnteredCustomAnimation(const FName& NotifyName) {
}


