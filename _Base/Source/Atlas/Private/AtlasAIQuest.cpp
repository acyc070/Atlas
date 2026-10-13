#include "AtlasAIQuest.h"
#include "Components/SceneComponent.h"

AAtlasAIQuest::AAtlasAIQuest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->QuestOwner = NULL;
    this->bRepeatable = false;
    this->bUseStandardDetection = true;
    this->bUsesEvaluateConditions = false;
    this->bTryBackstepWhenFinished = true;
    this->MainNode = NULL;
    this->bShouldChase = false;
    this->NextQuest = NULL;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}

void AAtlasAIQuest::SetShouldChase(bool ShouldChase) {
}












void AAtlasAIQuest::HandleAnimNotify(const FName& NotifyName) {
}

AAtlasAINode* AAtlasAIQuest::GetNode(const FString& NameOfTheNode) const {
    return NULL;
}

AAtlasAIQuest* AAtlasAIQuest::GetNamedQuest(const FName& QuestName) {
    return NULL;
}


void AAtlasAIQuest::End(bool bDestroy) {
}


void AAtlasAIQuest::AddReferencedQuestToOwner(int32 IndexOfReference) {
}


