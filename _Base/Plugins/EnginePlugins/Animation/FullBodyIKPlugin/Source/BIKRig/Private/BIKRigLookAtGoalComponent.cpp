#include "BIKRigLookAtGoalComponent.h"

UBIKRigLookAtGoalComponent::UBIKRigLookAtGoalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Stiffness = 10000.00f;
    this->TargetAlpha = 1.00f;
}


