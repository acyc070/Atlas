#include "AtlasGuestAnimInstance.h"

UAtlasGuestAnimInstance::UAtlasGuestAnimInstance() {
    this->SittingBlendTime = 1.00f;
    this->Owner = NULL;
    this->TypeBlendWeight = 1.00f;
}

bool UAtlasGuestAnimInstance::UseLeftTransition() const {
    return false;
}

bool UAtlasGuestAnimInstance::ShouldUseLookAt() const {
    return false;
}

FRotator UAtlasGuestAnimInstance::GetLookAtRotator() const {
    return FRotator{};
}


