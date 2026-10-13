#include "TarStageComponent.h"

UTarStageComponent::UTarStageComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Speed = 1.00f;
    this->AddCurrentPositionToStages = false;
    this->SetCurrentTransformToStage = 0;
    this->NextIndex = 0;
    this->MoveCurrentStageToNextIndex = false;
    this->ReplaceSelectedStage = false;
    this->bShouldLoop = false;
    this->SpeedModifier = NULL;
    this->bEnabled = true;
    this->bUseCurrentPositionAsFirstStage = false;
}

void UTarStageComponent::Stop(bool ReturnToPrevious) {
}

void UTarStageComponent::SetEnabled(bool Enabled) {
}

void UTarStageComponent::MoveToStage(int32 StageIndex, bool forceMove) {
}

void UTarStageComponent::MoveToNextStage(bool& Succeded, bool Forward, bool forceMove) {
}

void UTarStageComponent::GetTargetIndex(int32& aTargetIndex) {
}

void UTarStageComponent::GetStages(TArray<FTransform>& ListOfStages) {
}

void UTarStageComponent::GetCurrentStage(int32& StageIndex) {
}


