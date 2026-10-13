#include "AtlasAchievementHelper.h"

UAtlasAchievementHelper::UAtlasAchievementHelper() {
}

bool UAtlasAchievementHelper::UnlockAchievement(const UObject* WorldContextObject, EAtlasAchievement Achievement) {
    return false;
}

bool UAtlasAchievementHelper::IsAchievementUnlockedLocal(const UObject* WorldContextObject, EAtlasAchievement Achievement) {
    return false;
}

bool UAtlasAchievementHelper::IsAchievementUnlocked(const UObject* WorldContextObject, EAtlasAchievement Achievement) {
    return false;
}

bool UAtlasAchievementHelper::IncrementAchievementReferenceCountNoSave(const UObject* WorldContextObject, EAtlasAchievement Achievement, const FString& aReference) {
    return false;
}

bool UAtlasAchievementHelper::IncrementAchievementReferenceCount(const UObject* WorldContextObject, EAtlasAchievement Achievement, const FString& aReference) {
    return false;
}

bool UAtlasAchievementHelper::IncrementAchievement(const UObject* WorldContextObject, EAtlasAchievement Achievement) {
    return false;
}

void UAtlasAchievementHelper::GetAchievementProgress(const UObject* WorldContextObject, EAtlasAchievement Achievement, TArray<FString>& References, int32& Count, int32& Target) {
}


