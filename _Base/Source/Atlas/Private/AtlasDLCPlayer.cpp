#include "AtlasDLCPlayer.h"
#include "AtlasDLCPlayerCarryInterface.h"
#include "AtlasDLCPlayerLedgeInterface.h"
#include "AtlasDLCPlayerMovementModifierComponent.h"
#include "AtlasDLCPlayerStaminaComponent.h"
#include "AtlasDLCPlayerWaterInterface.h"
#include "AtlasFlashlightSensorComponent.h"

AAtlasDLCPlayer::AAtlasDLCPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAtlasDLCPlayerCarryInterface>(TEXT("CarryInterface")).SetDefaultSubobjectClass<UAtlasDLCPlayerLedgeInterface>(TEXT("LedgeInterface")).SetDefaultSubobjectClass<UAtlasDLCPlayerStaminaComponent>(TEXT("StaminaComponent")).SetDefaultSubobjectClass<UAtlasDLCPlayerMovementModifierComponent>(TEXT("MovementModifierComponent"))) {
    this->WaterInterface = CreateDefaultSubobject<UAtlasDLCPlayerWaterInterface>(TEXT("WaterInterface"));
    this->StrafeRotationSpeed = 10.00f;
    this->StrafeQuickTurnThreshold = 35.00f;
    this->StrafeQuickTurnMinExitEarlyAngle = 25.00f;
    this->StrafeMaxStepHeight = 35.00f;
    this->SwimDepthTolerance = 5.00f;
    this->LandingVelocityMultiplierHorizontal = 1.50f;
    this->LandingVelocityMultiplierVertical = 1.00f;
    this->FlashlightSensorComponent = CreateDefaultSubobject<UAtlasFlashlightSensorComponent>(TEXT("FlashlightSensorComponent"));
}

void AAtlasDLCPlayer::SetExplorationMode(bool bActive) {
}

void AAtlasDLCPlayer::SetCombatMode(bool bActive) {
}

void AAtlasDLCPlayer::OnFinishedStrafeQuickTurn(const FName& NotifyName) {
}


