#pragma once
#include "CoreMinimal.h"
#include "AtlasBaseGameMode.h"
#include "AtlasOnWorldIntializationEndedDelegate.h"
#include "AtlasRoomAddedToWorldSignatureDelegate.h"
#include "EAtlasUserDiscoveryState.h"
#include "EFadeState.h"
#include "OnPlayerDeathDelegate.h"
#include "OnPlayerSpawnDelegate.h"
#include "AtlasGameMode.generated.h"

class AActor;
class ADOFPostProcessVolume;
class AExponentialHeightFog;
class APlayerStart;
class UAtlasAchievementHelper;
class UAtlasActivityHelper;
class UAtlasDataSingleton;
class UAtlasOptimizationVolumeManager;
class UAtlasState;
class UAtlasUICalloutComponent;
class ULevelStreaming;
class USoundMix;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API AAtlasGameMode : public AAtlasBaseGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADOFPostProcessVolume* DOFVolume;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnWorldIntializationEnded OnWorldInitializationEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAtlasUICalloutComponent*> WorldCallouts;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerSpawn OnPlayerSpawnEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDeath OnPlayerDeathEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomAddedToWorldSignature OnRoomAddedToWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasAchievementHelper* AchievementHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasActivityHelper* ActivityHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasOptimizationVolumeManager* OptimizationVolumeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AExponentialHeightFog* GlobalFog;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasDataSingleton* GlobalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasState* SnapshotState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelStreaming* StreamingLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* LastPlayerStart;
    
public:
    AAtlasGameMode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartBackgroundLoadingTask();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStartByTag(const FString& PlayerStartTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerStart(const APlayerStart* PlayerStart);
    
    UFUNCTION(Exec)
    void SetCurrentCulture(const FString& CultureName);
    
    UFUNCTION(BlueprintCallable)
    void SetActorStartTag(const FString& actorStartTag);
    
    UFUNCTION(BlueprintCallable)
    void SaveLevelSnapshot(AActor* levelActor);
    
private:
    UFUNCTION()
    void SaveGameAfterUserLogoutResolved(EAtlasUserDiscoveryState State);
    
public:
    UFUNCTION(BlueprintCallable)
    void SaveGame(bool addPlaytime);
    
    UFUNCTION(BlueprintCallable)
    void SaveCheckpoint();
    
    UFUNCTION(BlueprintCallable)
    void RestartGameWithFade(float FadeTime, float StartFadeDelay, EFadeState FadeMode, USoundMix* SoundMix);
    
    UFUNCTION(BlueprintCallable)
    void ResetSaveGameValuesForGameCompletion();
    
    UFUNCTION(BlueprintCallable)
    void ReloadGame(bool fromLastSaveStation);
    
    UFUNCTION()
    void OnHudFadeDone(EFadeState FadeMode);
    
    UFUNCTION(BlueprintCallable)
    void LoadLevelSnapshot(AActor* levelActor);
    
    UFUNCTION(BlueprintCallable)
    void LoadGame(const FString& defaultLevel, const FString& defaultStart, bool isPersistant);
    
    UFUNCTION(BlueprintCallable)
    void LoadCheckpoint();
    
    UFUNCTION(BlueprintPure)
    FString GetPlayerStartTag() const;
    
    UFUNCTION(BlueprintPure)
    FString GetPlayerStartLevelPath() const;
    
    UFUNCTION(BlueprintPure)
    APlayerStart* GetPlayerStart() const;
    
    UFUNCTION(BlueprintPure)
    FString GetActorStartTag() const;
    
    UFUNCTION(BlueprintCallable)
    void EraseGameSave();
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveSpawnerTag();
    
};

