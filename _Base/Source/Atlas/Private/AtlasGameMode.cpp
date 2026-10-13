#include "AtlasGameMode.h"
#include "AtlasHud.h"
#include "AtlasOptimizationVolumeManager.h"
#include "AtlasPlayerController.h"

AAtlasGameMode::AAtlasGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AAtlasPlayerController::StaticClass();
    this->HUDClass = AAtlasHud::StaticClass();
    this->bDelayedStart = true;
    this->DOFVolume = NULL;
    this->AchievementHelper = NULL;
    this->ActivityHelper = NULL;
    this->OptimizationVolumeManager = CreateDefaultSubobject<UAtlasOptimizationVolumeManager>(TEXT("OptimizationVolumeManager"));
    this->GlobalFog = NULL;
    this->GlobalData = NULL;
    this->SnapshotState = NULL;
    this->StreamingLevel = NULL;
    this->LastPlayerStart = NULL;
}

void AAtlasGameMode::StartBackgroundLoadingTask() {
}

void AAtlasGameMode::SetPlayerStartByTag(const FString& PlayerStartTag) {
}

void AAtlasGameMode::SetPlayerStart(const APlayerStart* PlayerStart) {
}

void AAtlasGameMode::SetCurrentCulture(const FString& CultureName) {
}

void AAtlasGameMode::SetActorStartTag(const FString& actorStartTag) {
}

void AAtlasGameMode::SaveLevelSnapshot(AActor* levelActor) {
}

void AAtlasGameMode::SaveGameAfterUserLogoutResolved(EAtlasUserDiscoveryState State) {
}

void AAtlasGameMode::SaveGame(bool addPlaytime) {
}

void AAtlasGameMode::SaveCheckpoint() {
}

void AAtlasGameMode::RestartGameWithFade(float FadeTime, float StartFadeDelay, EFadeState FadeMode, USoundMix* SoundMix) {
}

void AAtlasGameMode::ResetSaveGameValuesForGameCompletion() {
}

void AAtlasGameMode::ReloadGame(bool fromLastSaveStation) {
}

void AAtlasGameMode::OnHudFadeDone(EFadeState FadeMode) {
}

void AAtlasGameMode::LoadLevelSnapshot(AActor* levelActor) {
}

void AAtlasGameMode::LoadGame(const FString& defaultLevel, const FString& defaultStart, bool isPersistant) {
}

void AAtlasGameMode::LoadCheckpoint() {
}

FString AAtlasGameMode::GetPlayerStartTag() const {
    return TEXT("");
}

FString AAtlasGameMode::GetPlayerStartLevelPath() const {
    return TEXT("");
}

APlayerStart* AAtlasGameMode::GetPlayerStart() const {
    return NULL;
}

FString AAtlasGameMode::GetActorStartTag() const {
    return TEXT("");
}

void AAtlasGameMode::EraseGameSave() {
}

void AAtlasGameMode::ClearActiveSpawnerTag() {
}


