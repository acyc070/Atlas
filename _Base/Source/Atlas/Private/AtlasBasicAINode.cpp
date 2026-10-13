#include "AtlasBasicAINode.h"
#include "Components/SceneComponent.h"

AAtlasBasicAINode::AAtlasBasicAINode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComponent"));
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->bRotateCharacterInSameDirectionAsNode = true;
    this->bSmoothlyMoveCharacterIntoPosition = true;
    this->EnterAnimation = NULL;
    this->LoopingAnimation = NULL;
    this->ExitAnimation = NULL;
}

void AAtlasBasicAINode::OnInteract_Implementation(AAtlasBasicAICharacter* interacter) {
}

void AAtlasBasicAINode::OnCharacterLeftNode(AAtlasBasicAICharacter* LeavingCharacter) {
}

bool AAtlasBasicAINode::Interact(AAtlasBasicAICharacter* interacter) {
    return false;
}

TArray<AAtlasBasicAICharacter*> AAtlasBasicAINode::GetInteractingCharacter() {
    return TArray<AAtlasBasicAICharacter*>();
}


