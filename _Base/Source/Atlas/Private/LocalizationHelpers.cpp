#include "LocalizationHelpers.h"

ULocalizationHelpers::ULocalizationHelpers() {
}

FString ULocalizationHelpers::GetTotalPlaytimeAsNiceString(const FTotalPlayTime& Playtime) {
    return TEXT("");
}

UDataTable* ULocalizationHelpers::GetSaveFileInfoLocalizationTable() {
    return NULL;
}

FText ULocalizationHelpers::GetLocalizedSaveFileInfoByName(const FName& Name) {
    return FText::GetEmpty();
}

FText ULocalizationHelpers::GetLocalizedLevelName(const FName& Name) {
    return FText::GetEmpty();
}

UDataTable* ULocalizationHelpers::GetLocalizationConfigTable() {
    return NULL;
}

FLocConfigRow ULocalizationHelpers::GetCurrentLocaleConfig() {
    return FLocConfigRow{};
}

ECultureEnum ULocalizationHelpers::GetCultureAsEnum() {
    return ECultureEnum::ChineseSimplified;
}


