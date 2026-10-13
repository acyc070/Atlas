#include "AtlasRoomVolume.h"
#include "Components/BoxComponent.h"
#include "AtlasPostProcessComponent.h"

AAtlasRoomVolume::AAtlasRoomVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("RoomVolume"));
    this->Priority = 0;
    this->RoomVolume = (UBoxComponent*)RootComponent;
    this->PostProcessComponent = CreateDefaultSubobject<UAtlasPostProcessComponent>(TEXT("PostProcess"));
    this->ExponentialHeightFogComponent = NULL;
    this->RealFogComponent = NULL;
    this->bEnabled = true;
    this->PostProcessComponent->SetupAttachment(RootComponent);
}



void AAtlasRoomVolume::OnComponentEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAtlasRoomVolume::OnComponentBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

bool AAtlasRoomVolume::IsEnabled() const {
    return false;
}

void AAtlasRoomVolume::Enable() {
}

void AAtlasRoomVolume::Disable() {
}

void AAtlasRoomVolume::ActorLeave(AActor* Actor) {
}

void AAtlasRoomVolume::ActorEnter(AActor* Actor) {
}


