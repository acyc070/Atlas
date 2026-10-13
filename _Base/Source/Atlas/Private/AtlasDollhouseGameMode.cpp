#include "AtlasDollhouseGameMode.h"
#include "AtlasDollhousePlayerController.h"

AAtlasDollhouseGameMode::AAtlasDollhouseGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerControllerClass = AAtlasDollhousePlayerController::StaticClass();
    this->DefaultPawnClass = NULL;
    this->bDelayedStart = true;
    this->GlobalData = NULL;
}


