#include "AtlasJumpAlignmentActor.h"
#include "AtlasJumpAlignmentComponent.h"

AAtlasJumpAlignmentActor::AAtlasJumpAlignmentActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UAtlasJumpAlignmentComponent>(TEXT("JumpAlignmentComponent"));
    this->JumpAlignmentComponent = (UAtlasJumpAlignmentComponent*)RootComponent;
}


