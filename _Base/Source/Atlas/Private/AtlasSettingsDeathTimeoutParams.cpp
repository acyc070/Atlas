#include "AtlasSettingsDeathTimeoutParams.h"

FAtlasSettingsDeathTimeoutParams::FAtlasSettingsDeathTimeoutParams() {
    this->deathType = ATLAS_PLAYER_DEATH_TYPE_None;
    this->SoundMixOnDeath = NULL;
    this->FadeDelay = 0.00f;
    this->FadeTime = 0.00f;
}

