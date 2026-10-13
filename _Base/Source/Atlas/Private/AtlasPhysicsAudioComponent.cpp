#include "AtlasPhysicsAudioComponent.h"

UAtlasPhysicsAudioComponent::UAtlasPhysicsAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ImpactSound = NULL;
    this->MaterialParameterName = TEXT("Material");
    this->PlaybackActor = NULL;
    this->bReportNoiseEventOnImpact = false;
    this->bReportNoiseEventOnRoll = false;
    this->RollEventReportInterval = 1.00f;
    this->ReportEventRange = 800.00f;
    this->ImpactParameterName = TEXT("Force");
    this->ImpactBaseVolume = 1.00f;
    this->ImpactBasePitch = 1.00f;
    this->SlideParameterName = TEXT("Speed");
    this->SlideFadeInTime = 0.10f;
    this->SlideFadeOutTime = 0.10f;
    this->SlideSound = NULL;
    this->SlideBaseVolume = 1.00f;
    this->SlideBasePitch = 1.00f;
    this->RollParameterName = TEXT("RollVelocity");
    this->RollFadeInTime = 0.10f;
    this->RollFadeOutTime = 0.10f;
    this->RollSound = NULL;
    this->RollBaseVolume = 1.00f;
    this->RollBasePitch = 1.00f;
    this->SlideAudioComponent = NULL;
    this->RollAudioComponent = NULL;
}

void UAtlasPhysicsAudioComponent::ToggleMute(bool bToggleFlag) {
}

void UAtlasPhysicsAudioComponent::OnImpact(AActor* OtherActor, UPrimitiveComponent* OtherComponent, float forceNorm, float ForceRaw, FName Material) {
}

void UAtlasPhysicsAudioComponent::OnEndSlide() {
}

void UAtlasPhysicsAudioComponent::OnEndRoll() {
}

void UAtlasPhysicsAudioComponent::OnBeginSlide() {
}

void UAtlasPhysicsAudioComponent::OnBeginRoll() {
}


