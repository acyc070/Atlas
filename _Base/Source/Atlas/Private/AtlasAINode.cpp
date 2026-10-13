#include "AtlasAINode.h"
#include "Components/SceneComponent.h"

AAtlasAINode::AAtlasAINode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->MainQuest = NULL;
    this->HostileSearchQuest = NULL;
    this->NodeGroup = NULL;
    this->bRotateToFaceNode = false;
    this->bCouldBeSwitchedOn = true;
    this->bEnabled = true;
    this->NodePriority = 1.00f;
    this->bUsedInHostileSearch = true;
    this->bUsedInNormalSearch = true;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
}

void AAtlasAINode::SetNodePriority(const float Priority) {
}

void AAtlasAINode::SetAmountOfItem(FName ItemName, int32 Amount) {
}

void AAtlasAINode::RemoveItems(FName ItemName, int32 Amount) {
}

void AAtlasAINode::RemoveItemReference(FName ItemName, AActor* Item) {
}

float AAtlasAINode::GetNodePriority() const {
    return 0.0f;
}

TArray<AActor*> AAtlasAINode::GetItemReferences(FName ItemName) {
    return TArray<AActor*>();
}

int32 AAtlasAINode::GetAmountOfItem(FName ItemName) {
    return 0;
}

void AAtlasAINode::EnableNode() {
}

bool AAtlasAINode::Enabled() {
    return false;
}

void AAtlasAINode::DisableNode() {
}

void AAtlasAINode::AddItems(FName ItemName, int32 Amount) {
}

void AAtlasAINode::AddItemReference(FName ItemName, AActor* Item) {
}


