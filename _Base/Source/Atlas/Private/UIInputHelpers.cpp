#include "UIInputHelpers.h"

UUIInputHelpers::UUIInputHelpers() {
}

void UUIInputHelpers::SwitchOnUIAction(FKey Key, AtlasUIAction& Action) {
}

void UUIInputHelpers::SetControllerInputProfile(FName nameOfNewProfile) {
}

void UUIInputHelpers::ResetKeybindingsToDefault() {
}

bool UUIInputHelpers::IsKeyForbiddenToBind(FKey Key) {
    return false;
}

bool UUIInputHelpers::IsKeyAction(AtlasUIAction Action, FKey Key) {
    return false;
}

UDataTable* UUIInputHelpers::GetUIInputDataTable() {
    return NULL;
}

UAtlasPlatformTexturesConfig* UUIInputHelpers::GetPlatformSpecificTexturesConfig(const UObject* WorldContextObject, bool overrideAutomaticInputType, EAtlasInputType InputType) {
    return NULL;
}

UTexture2D* UUIInputHelpers::GetPlatformAgnosticUIActionTexture(const UObject* WorldContextObject, AtlasUIAction Action, bool bForceGamepadInputType) {
    return NULL;
}

UTexture2D* UUIInputHelpers::GetPlatformAgnosticNamedTexture(const UObject* WorldContextObject, FName Name) {
    return NULL;
}

UTexture2D* UUIInputHelpers::GetPlatformAgnosticControlTexture(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl> Control) {
    return NULL;
}

UTexture2D* UUIInputHelpers::GetPlatformAgnosticControl2DTexture(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction) {
    return NULL;
}

FString UUIInputHelpers::GetMappedKeyForControlTexture2D(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl2D> Control, EAtlasInputDirections Direction) {
    return TEXT("");
}

FString UUIInputHelpers::GetMappedKeyForControlTexture(const UObject* WorldContextObject, TEnumAsByte<EAtlasPlayerControl> Control) {
    return TEXT("");
}

FName UUIInputHelpers::GetGroupName(const FName& rowNamebool, bool useDLCCredits) {
    return NAME_None;
}

FKey UUIInputHelpers::GetFirstUIActionKey(AtlasUIAction Action, bool prioritizeGamepadKey) {
    return FKey{};
}

UDataTable* UUIInputHelpers::GetCreditsScreenDataTable(bool useDLCCredits) {
    return NULL;
}

TArray<FName> UUIInputHelpers::GetAllCreditsScreenGroupNames(bool useDLCCredits) {
    return TArray<FName>();
}

TArray<FNewNameAndTitle> UUIInputHelpers::GetAllCreditsScreenGroupMembers(const FName& RowName, bool useDLCCredits) {
    return TArray<FNewNameAndTitle>();
}

TArray<FName> UUIInputHelpers::GetAllCreditsScreenGroupIDs(bool useDLCCredits) {
    return TArray<FName>();
}

AtlasUIAction UUIInputHelpers::GetAction(FKey Key) {
    return AtlasUIAction::None;
}


