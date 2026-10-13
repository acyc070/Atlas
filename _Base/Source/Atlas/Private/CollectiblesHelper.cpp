#include "CollectiblesHelper.h"

UCollectiblesHelper::UCollectiblesHelper() {
}

void UCollectiblesHelper::ReleaseCollectibleTextures() {
}

void UCollectiblesHelper::PreloadCollectibleTextures() {
}

bool UCollectiblesHelper::IsCollectibleUnlocked(const FName& Name) {
    return false;
}

int32 UCollectiblesHelper::GetTotalNumberOfUnlockedCollectibles(ECollectibleType Type) {
    return 0;
}

int32 UCollectiblesHelper::GetNumberOfUnlockedCollectiblesByLevel(ELevel InLevel, ECollectibleType Type) {
    return 0;
}

int32 UCollectiblesHelper::GetNumberOfConceptArtCollectibles() {
    return 0;
}

int32 UCollectiblesHelper::GetNumberOfCollectiblesToUnlock(ECollectibleType Type) {
    return 0;
}

int32 UCollectiblesHelper::GetNumberOfCollectiblesByLevel(ELevel InLevel, ECollectibleType Type) {
    return 0;
}

int32 UCollectiblesHelper::GetNumberOfCollectiblesByGroup(ECollectibleType Type) {
    return 0;
}

UDataTable* UCollectiblesHelper::GetCollectiblesDataTable() {
    return NULL;
}

FCollectibleInfo UCollectiblesHelper::GetCollectibleByNameFromDataTable(const FName& Name) {
    return FCollectibleInfo{};
}

TArray<FCollectibleInfo> UCollectiblesHelper::GetAllUnlockedCollectiblesByLevel(ELevel InLevel, ECollectibleType Type) {
    return TArray<FCollectibleInfo>();
}

TArray<FCollectibleInfo> UCollectiblesHelper::GetAllUnlockedCollectiblesByGroup(ECollectibleType Type) {
    return TArray<FCollectibleInfo>();
}

TArray<FCollectibleInfo> UCollectiblesHelper::GetAllUnlockedCollectibles() {
    return TArray<FCollectibleInfo>();
}

TArray<FCollectibleInfo> UCollectiblesHelper::GetAllConceptArtCollectiblesFromDataTable() {
    return TArray<FCollectibleInfo>();
}

TArray<FCollectibleInfo> UCollectiblesHelper::GetAllCollectiblesByGroupFromDataTable(ECollectibleType Type) {
    return TArray<FCollectibleInfo>();
}


