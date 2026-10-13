#include "AtlasFancyRoomVolume.h"
#include "Components/PostProcessComponent.h"

AAtlasFancyRoomVolume::AAtlasFancyRoomVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableFog = true;
    this->PPComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcess"));
    this->PPComponent->SetupAttachment(RootComponent);
}

void AAtlasFancyRoomVolume::OverrideAutoExposureBias(float NewBias) {
}


