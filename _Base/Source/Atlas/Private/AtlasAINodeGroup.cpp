#include "AtlasAINodeGroup.h"
#include "Components/BillboardComponent.h"

AAtlasAINodeGroup::AAtlasAINodeGroup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->NodeGroupBillboard = (UBillboardComponent*)RootComponent;
}

void AAtlasAINodeGroup::SetPriority(const float Priority) {
}


