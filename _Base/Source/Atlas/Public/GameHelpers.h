#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EAtlasConsoleGraphicsMode.h"
#include "EAtlasDLC.h"
#include "EAtlasSaveTarget.h"
#include "ESKU.h"
#include "PlayerMaskInfoTableRow.h"
#include "Templates/SubclassOf.h"
#include "TotalPlayTime.h"
#include "GameHelpers.generated.h"

class AActor;
class AAtlasAI;
class AAtlasBaseGameMode;
class AAtlasDLCGameMode;
class AAtlasDLCNomeAI;
class AAtlasDLCPlayer;
class AAtlasDollhouseGameMode;
class AAtlasGameMode;
class AAtlasGrannyAI;
class AAtlasHud;
class AAtlasPlayer;
class AAtlasPlayerCameraManager;
class AAtlasPlayerController;
class AAtlasPlayerStart;
class APlayerController;
class UActorComponent;
class UAtlasAchievementHelper;
class UAtlasActivityHelper;
class UAtlasComplianceLayer;
class UAtlasDataSingleton;
class UAtlasGameViewportClient;
class UAtlasGrabbable;
class UAtlasPauseMenuWidget;
class UAtlasSaveSlotsManager;
class UAtlasUISystem;
class UObject;

UCLASS(Blueprintable)
class ATLAS_API UGameHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGameHelpers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void VerifyMasksSeenState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockLevel(UObject* WorldContextObject, FName LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void UnlockAllLevelsUntil(UObject* WorldContextObject, EAtlasSaveTarget SaveTarget, FName LevelName);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UObject* TryLoadFromStringAssetReference(UObject* WorldContextObject, const FSoftObjectPath& AssetRef);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleDLCsDebug(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ToggleAchievementProgressVisibility(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SortActorsOnHeight(const TArray<AActor*>& ActorsIn, TArray<AActor*>& ActorsOut);
    
    UFUNCTION(BlueprintCallable)
    static void SetTenguMaskSeen();
    
    UFUNCTION(BlueprintCallable)
    static void SetTeapotMaskSeen();
    
    UFUNCTION(BlueprintCallable)
    static void SetSplashScreenPerformanceSettings(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    static void SetScareCrowMaskSeen();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNextAvailableCulture(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetNewMasksSeen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetMasterAudioVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void SetLadyMaskSeen();
    
    UFUNCTION(BlueprintCallable)
    static void SetGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable)
    static void SetFramerateLimit(float framerateLimit);
    
    UFUNCTION(BlueprintCallable)
    static void SetFoxMaskSeen();
    
    UFUNCTION(BlueprintCallable)
    static void SetDLCRecommendedToPlay(bool bRecommended);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetDelayControllerDisconnectWidget(UObject* WorldContextObject, bool bDelay);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentCulture(const FString& CultureName);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentControllerProfileName(const FName& Name);
    
    UFUNCTION(BlueprintCallable)
    static void SetConsoleGraphicsMode(EAtlasConsoleGraphicsMode graphicsMode);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetCollectiblesSeen(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SetActivityProgress(const FString& ActivityID, float Progress);
    
    UFUNCTION(BlueprintCallable)
    static void SetActiveSaveGameName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSinglePlaythrough(FName LevelName);
    
    UFUNCTION(BlueprintCallable)
    static void ReportFailure(const FString& Reason);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RegisterCollectible(UObject* WorldContextObject, FName Name, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void PerformBenchmarkIfSupported();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenStorePage(UObject* WorldContextObject, EAtlasDLC storePage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void OpenLevel(UObject* WorldContextObject, FName LevelName);
    
    UFUNCTION(BlueprintPure)
    static FName MakeUniqueCollectibleName(const FString& Name, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FTotalPlayTime MakeTotalPlaytime(float TotalPlayTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LockAllLevels(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsWithStateShare();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsWithEditor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsWithDLCSaveTarget();
    
    UFUNCTION(BlueprintPure)
    static bool IsWinGDKBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTenguMaskUnlocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsTenguMaskSeen();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsTeapotMaskUnlocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsTeapotMaskSeen();
    
    UFUNCTION(BlueprintPure)
    static bool IsSinglePlaythrough();
    
    UFUNCTION(BlueprintPure)
    static bool IsShippingBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsScareCrowMaskUnlocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsScareCrowMaskSeen();
    
    UFUNCTION(BlueprintPure)
    static bool IsPacmanMaskUnlocked();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewMaskAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewExtrasAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsNewConceptArtAvailable(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsLevelUnlocked(FName LevelName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsLadyMaskUnlocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsLadyMaskSeen();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInsideBox2D(UObject* WorldContextObject, FVector Min, FVector Max, const FVector& Point);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInsideBox(UObject* WorldContextObject, FVector Min, FVector Max, const FVector& Point);
    
    UFUNCTION(BlueprintPure)
    static bool IsGamescomBuild();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsFoxMaskUnlocked(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsFoxMaskSeen();
    
    UFUNCTION(BlueprintPure)
    static bool IsFocusTestBuild();
    
    UFUNCTION(BlueprintCallable)
    static bool IsEnumPlayerMask(EAtlasDLC dlcEnum);
    
    UFUNCTION(BlueprintPure)
    static bool IsDLCSelectionAvailable();
    
    UFUNCTION(BlueprintCallable)
    static bool IsDLCRecommendedToPlay();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsDLCEnabled(UObject* WorldContextObject, EAtlasDLC dlc);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsCurrentPersistentLevel(UObject* WorldContextObject, FSoftObjectPath levelStringAssetRef);
    
    UFUNCTION(BlueprintPure)
    static bool IsArvidsjaurBuild();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsAnyMaskDLCEnabled(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void IgnoreNextDeath(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static bool HasCollectible(FName Name);
    
    UFUNCTION(BlueprintPure)
    static void GetUnlockedMainLevels(TArray<FName>& UnlockedLevels);
    
    UFUNCTION(BlueprintPure)
    static void GetUnlockedLevels(TArray<FName>& UnlockedLevels);
    
    UFUNCTION(BlueprintPure)
    static void GetUnlockedDlcLevels(TArray<FName>& UnlockedLevels);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor GetUnfocusedButtonColor();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAtlasUISystem* GetUISystem(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static int32 GetTotalTimesDied();
    
    UFUNCTION(BlueprintPure)
    static FTotalPlayTime GetTotalPlayTime();
    
    UFUNCTION(BlueprintPure)
    static ESKU GetSKURegion();
    
    UFUNCTION(BlueprintCallable)
    static FPlayerMaskInfoTableRow GetSelectedPlayerMask();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetRelevantPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FPlayerMaskInfoTableRow GetPlayerMaskByName(FName Name);
    
    UFUNCTION(BlueprintCallable)
    static FPlayerMaskInfoTableRow GetPlayerMaskByEnum(EAtlasDLC dlcEnum);
    
    UFUNCTION(BlueprintPure)
    static void GetPauseMenuLevels(TArray<FName>& ReturnLevelsNames);
    
    UFUNCTION(BlueprintPure)
    static TSubclassOf<UAtlasPauseMenuWidget> GetPauseMenuClass();
    
    UFUNCTION(BlueprintCallable)
    static void GetMasterAudioVolume(float& Volume);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor GetHighlightedButtonColor();
    
    UFUNCTION(BlueprintCallable)
    static void GetGamma(float& Gamma);
    
    UFUNCTION(BlueprintCallable)
    static float GetFramerateLimit();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasDLCNomeAI* GetDLCNomeAI(UObject* WorldContextObject, FName UniqueId);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAtlasGrabbable* GetCurrentPlayerGrabbedComponent(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* GetCurrentPlayerGrabbedActor(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetCurrentPersistentLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrentCultureNiceName();
    
    UFUNCTION(BlueprintPure)
    static FString GetCurrentCulture();
    
    UFUNCTION(BlueprintCallable)
    static FName GetCurrentControllerProfileName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetCultureNiceName(const FString& Culture);
    
    UFUNCTION(BlueprintPure)
    static void GetCookedLevels(TArray<FName>& ReturnLevelsNames);
    
    UFUNCTION(BlueprintCallable)
    static void GetConsoleGraphicsMode(EAtlasConsoleGraphicsMode& graphicsMode);
    
    UFUNCTION(BlueprintPure)
    static FName GetComponentAudioMaterial(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void GetAvailableCultures(TArray<FString>& Cultures);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAtlasGameViewportClient* GetAtlasViewport(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UAtlasSaveSlotsManager* GetAtlasSaveSlotsManager();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasPlayerStart* GetAtlasPlayerStart(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasPlayer* GetAtlasPlayerPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasPlayerController* GetAtlasPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasPlayerCameraManager* GetAtlasPlayerCameraManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FName GetAtlasPlayerAudioMaterial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasHud* GetAtlasHUD(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasGrannyAI* GetAtlasGrannyAI(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UAtlasDataSingleton* GetAtlasGlobalData();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasGameMode* GetAtlasGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasDollhouseGameMode* GetAtlasDollhouseGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasDLCPlayer* GetAtlasDLCPlayerPawn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasDLCGameMode* GetAtlasDLCGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UAtlasComplianceLayer* GetAtlasComplianceLayer();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasBaseGameMode* GetAtlasBaseGameMode(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AAtlasAI* GetAtlasAI(UObject* WorldContextObject, TSubclassOf<AAtlasAI> Class);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FPlayerMaskInfoTableRow> GetAllAvailablePlayerMasks();
    
    UFUNCTION(BlueprintPure)
    static FName GetActorAudioMaterial(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float GetActivityProgress(const FString& ActivityID);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAtlasActivityHelper* GetActivityHelper(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString GetActiveSaveGameName();
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UAtlasAchievementHelper* GetAchievementHelper(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void FactureDestructiblesInRange(FVector WorldPosition, float Radius, int32 MaxNumberOfDestructibles, float MinRandomForceRange, float MaxRandomForceRange);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CompleteGame(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckForEnabledDLCs(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyTextureStreamingHack();
    
    UFUNCTION(BlueprintPure)
    static FString ActorSubLevel(AActor* Actor);
    
};

