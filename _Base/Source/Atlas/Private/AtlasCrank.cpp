#include "AtlasCrank.h"

UAtlasCrank::UAtlasCrank(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAllowClockwiseRotation = true;
    this->bAllowCounterClockwiseRotation = true;
    this->IdleBehaviour = AtlasCrankIdleBehaviour::StayInPosition;
    this->AngleBetweenClickEvents = 15;
    this->bIsLimited = true;
    this->InitialAngle = 0.00f;
}

void UAtlasCrank::SetUnwindingMovementParams(FTarSmoothFollowerParams newParams) {
}

void UAtlasCrank::SetPlayerMovementParams(FTarSmoothFollowerParams newParams) {
}

FTarSmoothFollowerParams UAtlasCrank::GetUnwindingMovementParams() const {
    return FTarSmoothFollowerParams{};
}

float UAtlasCrank::GetTargetAngle() const {
    return 0.0f;
}

float UAtlasCrank::GetSpeed() const {
    return 0.0f;
}

FTarSmoothFollowerParams UAtlasCrank::GetPlayerMovementParams() const {
    return FTarSmoothFollowerParams{};
}

float UAtlasCrank::GetCurrentAngle() const {
    return 0.0f;
}

float UAtlasCrank::GetAngleFraction() const {
    return 0.0f;
}


