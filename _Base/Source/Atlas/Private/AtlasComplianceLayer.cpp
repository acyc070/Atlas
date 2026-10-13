#include "AtlasComplianceLayer.h"

UAtlasComplianceLayer::UAtlasComplianceLayer() {
}

void UAtlasComplianceLayer::UpdatePresenceString(EPresenceString PresenceString) {
}

void UAtlasComplianceLayer::StopAmiiboDetection() {
}

void UAtlasComplianceLayer::StartAmiiboDetection() {
}

bool UAtlasComplianceLayer::ShowLoginUI(int32 ControllerId) {
    return false;
}

void UAtlasComplianceLayer::SetupGameLanguage() {
}

bool UAtlasComplianceLayer::ResolveUserLoggedOut(EAtlasUserDiscoveryResolutionOption resolutionOption) {
    return false;
}

bool UAtlasComplianceLayer::ResolveDiscoveryFailure(EAtlasUserDiscoveryResolutionOption resolutionOption) {
    return false;
}

bool UAtlasComplianceLayer::ResetAtlasPlayerAchievements() {
    return false;
}

void UAtlasComplianceLayer::RequestMainControllerIdChange(int32 ControllerId) {
}

void UAtlasComplianceLayer::OnViewportStateChanged(EAtlasViewportState PreviousState, EAtlasViewportState NewState) {
}

void UAtlasComplianceLayer::OnViewportFocusChange(EAtlasGameViewportFocus NewFocus) {
}

void UAtlasComplianceLayer::OnUserLoginChanged(bool loggedIn, int32 userId, int32 ControllerId) {
}

void UAtlasComplianceLayer::OnTrialLifted() {
}

void UAtlasComplianceLayer::OnTrialActive() {
}

void UAtlasComplianceLayer::OnIngameStoreStarted() {
}

void UAtlasComplianceLayer::OnIngameStoreEnded() {
}

void UAtlasComplianceLayer::OnExternalStoreClosed(bool bSuccessful, bool bPurchased) {
}

void UAtlasComplianceLayer::OnControllerConnectionChanged(bool connected, int32 userId, int32 ControllerId) {
}

bool UAtlasComplianceLayer::IsVitaRemotePlay() const {
    return false;
}

bool UAtlasComplianceLayer::IsUserDiscovered() const {
    return false;
}

bool UAtlasComplianceLayer::IsTrialVersion() const {
    return false;
}

void UAtlasComplianceLayer::IsStateSharePending(bool& bIsPending, EAtlasSaveTarget& SaveTarget, FName& PlvlName) {
}

bool UAtlasComplianceLayer::HasUniqueNetId() const {
    return false;
}

bool UAtlasComplianceLayer::HasMainController() const {
    return false;
}

EAtlasUserDiscoveryState UAtlasComplianceLayer::GetUserDiscoveryState() const {
    return EAtlasUserDiscoveryState::NotDiscovered;
}

EAtlasMainControllerState UAtlasComplianceLayer::GetMainControllerState() const {
    return EAtlasMainControllerState::None;
}

int32 UAtlasComplianceLayer::GetMainControllerId() const {
    return 0;
}

int32 UAtlasComplianceLayer::GetAtlasPlayerUniquePlatformId() const {
    return 0;
}

FString UAtlasComplianceLayer::GetAtlasPlayerNickname() const {
    return TEXT("");
}

void UAtlasComplianceLayer::GameIsUnsuspending() {
}

void UAtlasComplianceLayer::GameIsSuspending() {
}

void UAtlasComplianceLayer::GameIsEnteringForeground() {
}

void UAtlasComplianceLayer::GameIsEnteringBackground() {
}

void UAtlasComplianceLayer::ClearStartupGameStateID() {
}

void UAtlasComplianceLayer::ClearGameStateID() {
}

void UAtlasComplianceLayer::CheckingForContentWidgetPopped() {
}


