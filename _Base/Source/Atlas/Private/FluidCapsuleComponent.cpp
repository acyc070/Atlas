#include "FluidCapsuleComponent.h"

UFluidCapsuleComponent::UFluidCapsuleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UFluidCapsuleComponent::StartVelocityCalcDuringTick() {
}

FVector UFluidCapsuleComponent::GetCalculatedVelocity() {
    return FVector{};
}

void UFluidCapsuleComponent::EndVelocityCalcDuringTick() {
}


