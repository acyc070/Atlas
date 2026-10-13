#include "AtlasPlayerDeathTypeHandler.h"
#include "Components/SkeletalMeshComponent.h"
#include "AtlasPointOfInterestComponent.h"
#include "AtlasPostProcessComponent.h"

AAtlasPlayerDeathTypeHandler::AAtlasPlayerDeathTypeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->playerPawn = NULL;
    this->SkeletalMesh = NULL;
    this->AtlasPostProcessComponent = CreateDefaultSubobject<UAtlasPostProcessComponent>(TEXT("AtlasPostProcess"));
    this->PostProcessBlendCurve = NULL;
    this->CameraBlendCurve = NULL;
    this->CameraZoomStrength = 1.00f;
    this->deathType = ATLAS_PLAYER_DEATH_TYPE_None;
    this->TimeDead = 0.00f;
    this->PreviewMesh = (USkeletalMeshComponent*)RootComponent;
    this->PointOfInterest = CreateDefaultSubobject<UAtlasPointOfInterestComponent>(TEXT("PointOfInterest"));
    this->PointOfInterest->SetupAttachment(RootComponent);
}

void AAtlasPlayerDeathTypeHandler::OnScreenFadeDone(EFadeState fadeState) {
}



FVector AAtlasPlayerDeathTypeHandler::GetModifierVector() const {
    return FVector{};
}


