#include "AtlasAIJanitorAnimInstance.h"

UAtlasAIJanitorAnimInstance::UAtlasAIJanitorAnimInstance() {
    this->AnimationData.AddDefaulted(6);
    this->LeftOverlapWeight = 0.00f;
    this->RightOverlapWeight = 0.00f;
    this->BossFight = 0.00f;
    this->NormalGrabType = EAtlasAIJanitorNormalGrabType::None;
    this->Owner = NULL;
    this->bFailedGrab = false;
    this->QuestBlendAnimationWeight = 0.00f;
}

void UAtlasAIJanitorAnimInstance::StartQuestBlend(float Time, float BlendIn, float BlendOut) {
}

void UAtlasAIJanitorAnimInstance::SetTickParallelQuestAnimationEnabled(const bool Enabled) {
}

void UAtlasAIJanitorAnimInstance::ResetTouchGrabBlend(const FName& NotifyName) {
}

void UAtlasAIJanitorAnimInstance::Notify_FailedGrab(const FName& NotifyName) {
}

bool UAtlasAIJanitorAnimInstance::IsTouchGrabbing() const {
    return false;
}

void UAtlasAIJanitorAnimInstance::FinishedNormalGrabAnimation(const FName& NotifyName) {
}


