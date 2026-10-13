#include "AtlasDLCGameMode.h"
#include "AtlasDLCPlayerController.h"

AAtlasDLCGameMode::AAtlasDLCGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AAtlasDLCPlayerController::StaticClass();
}


