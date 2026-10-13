#include "AtlasNomeAnimInstance.h"

UAtlasNomeAnimInstance::UAtlasNomeAnimInstance() {
    this->bPlayRandomIdle = false;
    this->CurrentRandomIdleAnim = NULL;
}

void UAtlasNomeAnimInstance::OnNomeAnimNotify(const FName& Notify) {
}


