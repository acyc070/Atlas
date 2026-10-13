#include "GameHelpers.h"
#include "Templates/SubclassOf.h"

UGameHelpers::UGameHelpers() {
}

void UGameHelpers::VerifyMasksSeenState(UObject* WorldContextObject) {
}

void UGameHelpers::UnlockLevel(UObject* WorldContextObject, FName LevelName) {
}

void UGameHelpers::UnlockAllLevelsUntil(UObject* WorldContextObject, EAtlasSaveTarget SaveTarget, FName LevelName) {
}

UObject* UGameHelpers::TryLoadFromStringAssetReference(UObject* WorldContextObject, const FSoftObjectPath& AssetRef) {
    return NULL;
}

void UGameHelpers::ToggleDLCsDebug(UObject* WorldContextObject) {
}

void UGameHelpers::ToggleAchievementProgressVisibility(UObject* WorldContextObject) {
}

void UGameHelpers::SortActorsOnHeight(const TArray<AActor*>& ActorsIn, TArray<AActor*>& ActorsOut) {
}

void UGameHelpers::SetTenguMaskSeen() {
}

void UGameHelpers::SetTeapotMaskSeen() {
}

void UGameHelpers::SetSplashScreenPerformanceSettings(bool Enable) {
}

void UGameHelpers::SetScareCrowMaskSeen() {
}

void UGameHelpers::SetNextAvailableCulture(UObject* WorldContextObject) {
}

void UGameHelpers::SetNewMasksSeen(UObject* WorldContextObject) {
}

void UGameHelpers::SetMasterAudioVolume(float Volume) {
}

void UGameHelpers::SetLadyMaskSeen() {
}

void UGameHelpers::SetGamma(float Gamma) {
}

void UGameHelpers::SetFramerateLimit(float framerateLimit) {
}

void UGameHelpers::SetFoxMaskSeen() {
}

void UGameHelpers::SetDLCRecommendedToPlay(bool bRecommended) {
}

void UGameHelpers::SetDelayControllerDisconnectWidget(UObject* WorldContextObject, bool bDelay) {
}

void UGameHelpers::SetCurrentCulture(const FString& CultureName) {
}

void UGameHelpers::SetCurrentControllerProfileName(const FName& Name) {
}

void UGameHelpers::SetConsoleGraphicsMode(EAtlasConsoleGraphicsMode graphicsMode) {
}

void UGameHelpers::SetCollectiblesSeen(UObject* WorldContextObject) {
}

void UGameHelpers::SetActivityProgress(const FString& ActivityID, float Progress) {
}

void UGameHelpers::SetActiveSaveGameName(const FString& Name) {
}

void UGameHelpers::ResetSinglePlaythrough(FName LevelName) {
}

void UGameHelpers::ReportFailure(const FString& Reason) {
}

void UGameHelpers::RegisterCollectible(UObject* WorldContextObject, FName Name, AActor* Actor) {
}

void UGameHelpers::PerformBenchmarkIfSupported() {
}

void UGameHelpers::OpenStorePage(UObject* WorldContextObject, EAtlasDLC storePage) {
}

void UGameHelpers::OpenLevel(UObject* WorldContextObject, FName LevelName) {
}

FName UGameHelpers::MakeUniqueCollectibleName(const FString& Name, AActor* Actor) {
    return NAME_None;
}

FTotalPlayTime UGameHelpers::MakeTotalPlaytime(float TotalPlayTime) {
    return FTotalPlayTime{};
}

void UGameHelpers::LockAllLevels(UObject* WorldContextObject) {
}

bool UGameHelpers::IsWithStateShare() {
    return false;
}

bool UGameHelpers::IsWithEditor(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsWithDLCSaveTarget() {
    return false;
}

bool UGameHelpers::IsWinGDKBuild() {
    return false;
}

bool UGameHelpers::IsTenguMaskUnlocked(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsTenguMaskSeen() {
    return false;
}

bool UGameHelpers::IsTeapotMaskUnlocked(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsTeapotMaskSeen() {
    return false;
}

bool UGameHelpers::IsSinglePlaythrough() {
    return false;
}

bool UGameHelpers::IsShippingBuild() {
    return false;
}

bool UGameHelpers::IsScareCrowMaskUnlocked(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsScareCrowMaskSeen() {
    return false;
}

bool UGameHelpers::IsPacmanMaskUnlocked() {
    return false;
}

bool UGameHelpers::IsNewMaskAvailable(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsNewExtrasAvailable(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsNewConceptArtAvailable(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsLevelUnlocked(FName LevelName) {
    return false;
}

bool UGameHelpers::IsLadyMaskUnlocked(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsLadyMaskSeen() {
    return false;
}

bool UGameHelpers::IsInsideBox2D(UObject* WorldContextObject, FVector Min, FVector Max, const FVector& Point) {
    return false;
}

bool UGameHelpers::IsInsideBox(UObject* WorldContextObject, FVector Min, FVector Max, const FVector& Point) {
    return false;
}

bool UGameHelpers::IsGamescomBuild() {
    return false;
}

bool UGameHelpers::IsFoxMaskUnlocked(UObject* WorldContextObject) {
    return false;
}

bool UGameHelpers::IsFoxMaskSeen() {
    return false;
}

bool UGameHelpers::IsFocusTestBuild() {
    return false;
}

bool UGameHelpers::IsEnumPlayerMask(EAtlasDLC dlcEnum) {
    return false;
}

bool UGameHelpers::IsDLCSelectionAvailable() {
    return false;
}

bool UGameHelpers::IsDLCRecommendedToPlay() {
    return false;
}

bool UGameHelpers::IsDLCEnabled(UObject* WorldContextObject, EAtlasDLC dlc) {
    return false;
}

bool UGameHelpers::IsCurrentPersistentLevel(UObject* WorldContextObject, FSoftObjectPath levelStringAssetRef) {
    return false;
}

bool UGameHelpers::IsArvidsjaurBuild() {
    return false;
}

bool UGameHelpers::IsAnyMaskDLCEnabled(UObject* WorldContextObject) {
    return false;
}

void UGameHelpers::IgnoreNextDeath(UObject* WorldContextObject) {
}

bool UGameHelpers::HasCollectible(FName Name) {
    return false;
}

void UGameHelpers::GetUnlockedMainLevels(TArray<FName>& UnlockedLevels) {
}

void UGameHelpers::GetUnlockedLevels(TArray<FName>& UnlockedLevels) {
}

void UGameHelpers::GetUnlockedDlcLevels(TArray<FName>& UnlockedLevels) {
}

FLinearColor UGameHelpers::GetUnfocusedButtonColor() {
    return FLinearColor{};
}

UAtlasUISystem* UGameHelpers::GetUISystem(const UObject* WorldContextObject) {
    return NULL;
}

int32 UGameHelpers::GetTotalTimesDied() {
    return 0;
}

FTotalPlayTime UGameHelpers::GetTotalPlayTime() {
    return FTotalPlayTime{};
}

ESKU UGameHelpers::GetSKURegion() {
    return ESKU::Europe;
}

FPlayerMaskInfoTableRow UGameHelpers::GetSelectedPlayerMask() {
    return FPlayerMaskInfoTableRow{};
}

APlayerController* UGameHelpers::GetRelevantPlayerController(UObject* WorldContextObject) {
    return NULL;
}

FPlayerMaskInfoTableRow UGameHelpers::GetPlayerMaskByName(FName Name) {
    return FPlayerMaskInfoTableRow{};
}

FPlayerMaskInfoTableRow UGameHelpers::GetPlayerMaskByEnum(EAtlasDLC dlcEnum) {
    return FPlayerMaskInfoTableRow{};
}

void UGameHelpers::GetPauseMenuLevels(TArray<FName>& ReturnLevelsNames) {
}

TSubclassOf<UAtlasPauseMenuWidget> UGameHelpers::GetPauseMenuClass() {
    return NULL;
}

void UGameHelpers::GetMasterAudioVolume(float& Volume) {
}

FLinearColor UGameHelpers::GetHighlightedButtonColor() {
    return FLinearColor{};
}

void UGameHelpers::GetGamma(float& Gamma) {
}

float UGameHelpers::GetFramerateLimit() {
    return 0.0f;
}

AAtlasDLCNomeAI* UGameHelpers::GetDLCNomeAI(UObject* WorldContextObject, FName UniqueId) {
    return NULL;
}

UAtlasGrabbable* UGameHelpers::GetCurrentPlayerGrabbedComponent(UObject* WorldContextObject) {
    return NULL;
}

AActor* UGameHelpers::GetCurrentPlayerGrabbedActor(UObject* WorldContextObject) {
    return NULL;
}

FName UGameHelpers::GetCurrentPersistentLevel(UObject* WorldContextObject) {
    return NAME_None;
}

FString UGameHelpers::GetCurrentCultureNiceName() {
    return TEXT("");
}

FString UGameHelpers::GetCurrentCulture() {
    return TEXT("");
}

FName UGameHelpers::GetCurrentControllerProfileName() {
    return NAME_None;
}

FString UGameHelpers::GetCultureNiceName(const FString& Culture) {
    return TEXT("");
}

void UGameHelpers::GetCookedLevels(TArray<FName>& ReturnLevelsNames) {
}

void UGameHelpers::GetConsoleGraphicsMode(EAtlasConsoleGraphicsMode& graphicsMode) {
}

FName UGameHelpers::GetComponentAudioMaterial(UActorComponent* Component) {
    return NAME_None;
}

void UGameHelpers::GetAvailableCultures(TArray<FString>& Cultures) {
}

UAtlasGameViewportClient* UGameHelpers::GetAtlasViewport(const UObject* WorldContextObject) {
    return NULL;
}

UAtlasSaveSlotsManager* UGameHelpers::GetAtlasSaveSlotsManager() {
    return NULL;
}

AAtlasPlayerStart* UGameHelpers::GetAtlasPlayerStart(UObject* WorldContextObject) {
    return NULL;
}

AAtlasPlayer* UGameHelpers::GetAtlasPlayerPawn(UObject* WorldContextObject) {
    return NULL;
}

AAtlasPlayerController* UGameHelpers::GetAtlasPlayerController(UObject* WorldContextObject) {
    return NULL;
}

AAtlasPlayerCameraManager* UGameHelpers::GetAtlasPlayerCameraManager(UObject* WorldContextObject) {
    return NULL;
}

FName UGameHelpers::GetAtlasPlayerAudioMaterial(UObject* WorldContextObject) {
    return NAME_None;
}

AAtlasHud* UGameHelpers::GetAtlasHUD(UObject* WorldContextObject) {
    return NULL;
}

AAtlasGrannyAI* UGameHelpers::GetAtlasGrannyAI(UObject* WorldContextObject) {
    return NULL;
}

UAtlasDataSingleton* UGameHelpers::GetAtlasGlobalData() {
    return NULL;
}

AAtlasGameMode* UGameHelpers::GetAtlasGameMode(const UObject* WorldContextObject) {
    return NULL;
}

AAtlasDollhouseGameMode* UGameHelpers::GetAtlasDollhouseGameMode(const UObject* WorldContextObject) {
    return NULL;
}

AAtlasDLCPlayer* UGameHelpers::GetAtlasDLCPlayerPawn(UObject* WorldContextObject) {
    return NULL;
}

AAtlasDLCGameMode* UGameHelpers::GetAtlasDLCGameMode(const UObject* WorldContextObject) {
    return NULL;
}

UAtlasComplianceLayer* UGameHelpers::GetAtlasComplianceLayer() {
    return NULL;
}

AAtlasBaseGameMode* UGameHelpers::GetAtlasBaseGameMode(const UObject* WorldContextObject) {
    return NULL;
}

AAtlasAI* UGameHelpers::GetAtlasAI(UObject* WorldContextObject, TSubclassOf<AAtlasAI> Class) {
    return NULL;
}

TArray<FPlayerMaskInfoTableRow> UGameHelpers::GetAllAvailablePlayerMasks() {
    return TArray<FPlayerMaskInfoTableRow>();
}

FName UGameHelpers::GetActorAudioMaterial(AActor* Actor) {
    return NAME_None;
}

float UGameHelpers::GetActivityProgress(const FString& ActivityID) {
    return 0.0f;
}

UAtlasActivityHelper* UGameHelpers::GetActivityHelper(const UObject* WorldContextObject) {
    return NULL;
}

FString UGameHelpers::GetActiveSaveGameName() {
    return TEXT("");
}

UAtlasAchievementHelper* UGameHelpers::GetAchievementHelper(const UObject* WorldContextObject) {
    return NULL;
}

void UGameHelpers::FactureDestructiblesInRange(FVector WorldPosition, float Radius, int32 MaxNumberOfDestructibles, float MinRandomForceRange, float MaxRandomForceRange) {
}

void UGameHelpers::CompleteGame(UObject* WorldContextObject) {
}

void UGameHelpers::CheckForEnabledDLCs(UObject* WorldContextObject) {
}

void UGameHelpers::ApplyTextureStreamingHack() {
}

FString UGameHelpers::ActorSubLevel(AActor* Actor) {
    return TEXT("");
}


