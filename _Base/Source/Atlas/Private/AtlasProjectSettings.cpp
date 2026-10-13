#include "AtlasProjectSettings.h"

UAtlasProjectSettings::UAtlasProjectSettings() {
    this->IsFocusTestBuild = false;
    this->IsGamescomBuild = false;
    this->IsArvidsjaurBuild = false;
    this->DisableScreenMessages = false;
    this->DeathTimeoutOverrides.AddDefaulted(12);
    this->NumberOfSaveSlotsPC = 3;
    this->NumberOfSaveSlotsXBoxOne = 1;
    this->NumberOfSaveSlotsPS4 = 1;
    this->NumberOfSaveSlotsSwitch = 1;
    this->NumberOfSaveSlotsQuail = 2;
    this->Achievements.AddDefaulted(22);
    this->EnableGamescomIdleGameTimer = false;
    this->GamescomIdleGameTimerInterval = 0.00f;
    this->BenchmarkLoad = 10;
    this->FadeInTimeDelayDefault = 1.00f;
    this->FadeInTimeDelayXBoxOne = 0.00f;
    this->FadeInTimeDelayPS4 = 0.00f;
    this->FadeInTimeDelaySwitch = 0.00f;
}

float UAtlasProjectSettings::GetFadeInTimeDelay() {
    return 0.0f;
}


