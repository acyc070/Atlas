#include "AtlasPlayerController.h"
#include "AtlasPlayerCameraManager.h"
#include "AtlasPlayerControllerState.h"

AAtlasPlayerController::AAtlasPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AAtlasPlayerCameraManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->AtlasPlayerPawn = NULL;
    this->AtlasPlayerAnimInstance = NULL;
    this->AtlasPlayerCameraManager = NULL;
    this->ControllerState = CreateDefaultSubobject<UAtlasPlayerControllerState>(TEXT("ControlState"));
}

void AAtlasPlayerController::RestartCheckpoint() {
}

void AAtlasPlayerController::KillPlayer(int32 deathType) {
}

bool AAtlasPlayerController::IsHdRumbleSupported(EAtlasHDRumbleType rumble) const {
    return false;
}

FVector2D AAtlasPlayerController::GetLookAroundInputVector() const {
    return FVector2D{};
}

void AAtlasPlayerController::DumpSaveData(int32 Type) {
}

void AAtlasPlayerController::ChangeAnimationDebugTarget(const FString& NameOfObject) {
}

void AAtlasPlayerController::AddVibrationEvent_Old(uint8 SmallMotor, uint8 LargeMotor, float Duration, TEnumAsByte<ETarVibrationEventCurve> Curve) {
}

void AAtlasPlayerController::AddHdRumbleEvent(EAtlasHDRumbleType rumble, float Left, float Right) {
}


