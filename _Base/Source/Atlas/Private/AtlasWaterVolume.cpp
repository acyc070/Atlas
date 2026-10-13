#include "AtlasWaterVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "AtlasSeawaveComponent.h"
#include "AtlasWaterRippleComponent.h"

AAtlasWaterVolume::AAtlasWaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MinSwimDepth = 70.00f;
    this->WaterRippleComponent = CreateDefaultSubobject<UAtlasWaterRippleComponent>(TEXT("WaterRippleComponent"));
    this->ExcludeWaterSplashTag = TEXT("NoSplash");
    this->GrannyUsesVolume = true;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
    this->SeawaveComponent = CreateDefaultSubobject<UAtlasSeawaveComponent>(TEXT("AtlasSeawaveComponent"));
    this->Volume = CreateDefaultSubobject<UBoxComponent>(TEXT("VolumeBox"));
    this->GrannyExitVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("GrannyExitVolume"));
    this->PlayerFloor = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerFloor"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->GrannyExitVolume->SetupAttachment(Volume);
    this->MeshComponent->SetupAttachment(RootComponent);
    this->PlayerFloor->SetupAttachment(Volume);
    this->Volume->SetupAttachment(RootComponent);
}

FVector AAtlasWaterVolume::ProjectLocationToWaterSurface(const FVector& Location) const {
    return FVector{};
}

void AAtlasWaterVolume::OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAtlasWaterVolume::OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}



void AAtlasWaterVolume::OnExitVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

float AAtlasWaterVolume::GetWaterSurfaceLevelFromLocation(const FVector& Location) const {
    return 0.0f;
}

float AAtlasWaterVolume::GetWaterSurfaceLevel() const {
    return 0.0f;
}

UBoxComponent* AAtlasWaterVolume::GetVolume() const {
    return NULL;
}

UParticleSystem* AAtlasWaterVolume::GetImpactParticle(const FVector& Velocity) const {
    return NULL;
}

TArray<UAtlasFloatableComponent*> AAtlasWaterVolume::GetFloatableComponents() const {
    return TArray<UAtlasFloatableComponent*>();
}

TArray<AActor*> AAtlasWaterVolume::GetFloatableActors() const {
    return TArray<AActor*>();
}


