#include "AtlasChefAI.h"

AAtlasChefAI::AAtlasChefAI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TwinCaughtSixAnimation = NULL;
    this->AIPartner = NULL;
    this->ForceAlertedCooldown = 5.00f;
    this->ForceHostileSearchCooldown = 2.00f;
    this->bBackstep = false;
    this->GrabsBeforeCantReach = 2;
}

void AAtlasChefAI::SetAIPartner(AAtlasChefAI* Partner) {
}

void AAtlasChefAI::NotifySnapshotOnSurface(const FName& NotifyName) {
}

void AAtlasChefAI::NotifyFinishedOnSurfaceEnter(const FName& NotifyName) {
}

void AAtlasChefAI::NotifyFinishedBackStep(const FName& NotifyName) {
}

void AAtlasChefAI::LosePlayer() {
}


