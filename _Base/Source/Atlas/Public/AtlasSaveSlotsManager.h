#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlasOnSaveSlotsManagerStateChangedDelegate.h"
#include "AtlasSaveSlot.h"
#include "CachedSave.h"
#include "EAtlasSaveTarget.h"
#include "GgpSave.h"
#include "StateProcessingEventDelegate.h"
#include "AtlasSaveSlotsManager.generated.h"

class UAtlasMetaState;
class UAtlasState;
class UAtlasUserMetaState;

UCLASS(Blueprintable)
class ATLAS_API UAtlasSaveSlotsManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnSaveSlotsManagerStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateProcessingEvent OnStateProcessingEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDelayLoading;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasState* LoadedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasState* LoadedDlcState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasMetaState* LoadedMeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasUserMetaState* UserMetaState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasState* ActiveCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAtlasState* ActiveDlcCheckpoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGgpSave> GgpSaves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCachedSave CachedSaveState;
    
public:
    UAtlasSaveSlotsManager();

    UFUNCTION(BlueprintCallable)
    void SetGameHasLaunchedForActiveUser();
    
    UFUNCTION(BlueprintCallable)
    void SetEULAAcceptedForActiveUser(bool accepted);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentPersistentLevel(FName LevelName, EAtlasSaveTarget SaveTarget);
    
    UFUNCTION(BlueprintCallable)
    void SaveUserMetaState();
    
    UFUNCTION(BlueprintCallable)
    void SaveInputSettings();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void ResetActiveSaveStateFileOnDisk(UObject* WorldContext);
    
    UFUNCTION()
    void OnInputSettingsSaved(const FString& SlotName, const int32 UserIndex, bool bSuccess);
    
    UFUNCTION(BlueprintPure)
    FString MakeSaveSlotName(int32 saveSlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    FString MakeSaveMetaName(const FString& saveSlotName) const;
    
    UFUNCTION(BlueprintPure)
    FString MakeGgpSaveSlotName() const;
    
    UFUNCTION(BlueprintCallable)
    void LoadSaveSlotToMemory(const FString& saveSlotName);
    
    UFUNCTION(BlueprintCallable)
    void LoadInputSettings();
    
    UFUNCTION(BlueprintCallable)
    void LoadCurrentUserIndexToMemory();
    
    UFUNCTION(BlueprintPure)
    bool IsMainUserSave() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFirstTimeLaunchForActiveUser() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAsyncSavingInProgress() const;
    
    UFUNCTION(BlueprintPure)
    bool HasGgpSave() const;
    
    UFUNCTION(BlueprintPure)
    bool HasEULABeenAcceptedForActiveUser() const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyUsedSaveSlots() const;
    
    UFUNCTION(BlueprintPure)
    bool HasActiveSaveSlot() const;
    
    UFUNCTION(BlueprintPure)
    FAtlasSaveSlot GetSaveSlot(const FString& saveSlot) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfSaveSlots() const;
    
    UFUNCTION(BlueprintPure)
    FString GetLastSavedDateTimeAsString(const FString& saveSlot) const;
    
    UFUNCTION()
    void DumpSaveData(int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void DeleteSaveSlot(const FString& saveSlotName);
    
    UFUNCTION(BlueprintCallable)
    void ClearActiveSaveSlotFromDisk(EAtlasSaveTarget SaveTarget);
    
};

