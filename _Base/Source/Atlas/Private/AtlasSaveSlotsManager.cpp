#include "AtlasSaveSlotsManager.h"

UAtlasSaveSlotsManager::UAtlasSaveSlotsManager() {
    this->bDelayLoading = false;
    this->LoadedDlcState = NULL;
    this->ActiveDlcCheckpoint = NULL;
}

void UAtlasSaveSlotsManager::SetGameHasLaunchedForActiveUser() {
}

void UAtlasSaveSlotsManager::SetEULAAcceptedForActiveUser(bool accepted) {
}

void UAtlasSaveSlotsManager::SetCurrentPersistentLevel(FName LevelName, EAtlasSaveTarget SaveTarget) {
}

void UAtlasSaveSlotsManager::SaveUserMetaState() {
}

void UAtlasSaveSlotsManager::SaveInputSettings() {
}

void UAtlasSaveSlotsManager::ResetActiveSaveStateFileOnDisk(UObject* WorldContext) {
}

void UAtlasSaveSlotsManager::OnInputSettingsSaved(const FString& SlotName, const int32 UserIndex, bool bSuccess) {
}

FString UAtlasSaveSlotsManager::MakeSaveSlotName(int32 saveSlotIndex) const {
    return TEXT("");
}

FString UAtlasSaveSlotsManager::MakeSaveMetaName(const FString& saveSlotName) const {
    return TEXT("");
}

FString UAtlasSaveSlotsManager::MakeGgpSaveSlotName() const {
    return TEXT("");
}

void UAtlasSaveSlotsManager::LoadSaveSlotToMemory(const FString& saveSlotName) {
}

void UAtlasSaveSlotsManager::LoadInputSettings() {
}

void UAtlasSaveSlotsManager::LoadCurrentUserIndexToMemory() {
}

bool UAtlasSaveSlotsManager::IsMainUserSave() const {
    return false;
}

bool UAtlasSaveSlotsManager::IsFirstTimeLaunchForActiveUser() const {
    return false;
}

bool UAtlasSaveSlotsManager::IsAsyncSavingInProgress() const {
    return false;
}

bool UAtlasSaveSlotsManager::HasGgpSave() const {
    return false;
}

bool UAtlasSaveSlotsManager::HasEULABeenAcceptedForActiveUser() const {
    return false;
}

bool UAtlasSaveSlotsManager::HasAnyUsedSaveSlots() const {
    return false;
}

bool UAtlasSaveSlotsManager::HasActiveSaveSlot() const {
    return false;
}

FAtlasSaveSlot UAtlasSaveSlotsManager::GetSaveSlot(const FString& saveSlot) const {
    return FAtlasSaveSlot{};
}

int32 UAtlasSaveSlotsManager::GetNumberOfSaveSlots() const {
    return 0;
}

FString UAtlasSaveSlotsManager::GetLastSavedDateTimeAsString(const FString& saveSlot) const {
    return TEXT("");
}

void UAtlasSaveSlotsManager::DumpSaveData(int32 Type) {
}

void UAtlasSaveSlotsManager::DeleteSaveSlot(const FString& saveSlotName) {
}

void UAtlasSaveSlotsManager::ClearActiveSaveSlotFromDisk(EAtlasSaveTarget SaveTarget) {
}


