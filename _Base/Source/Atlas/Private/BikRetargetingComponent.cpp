#include "BikRetargetingComponent.h"

UBikRetargetingComponent::UBikRetargetingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DrawDebug = false;
    this->BIKRig = NULL;
    this->SkeletalMesh = NULL;
    this->AnimInstance = NULL;
    this->AnimBpClass = NULL;
    this->LeftHandGoal = NULL;
    this->RightHandGoal = NULL;
    this->LeftFootGoal = NULL;
    this->RightFootGoal = NULL;
    this->LeftAnkleGoal = NULL;
    this->RightAnkleGoal = NULL;
    this->LeftToeGoal = NULL;
    this->RightToeGoal = NULL;
    this->HipsGoal = NULL;
}

FBikSolverTask UBikRetargetingComponent::SetupTask(EBikTaskIdentifier TaskId, bool DebugDraw) {
    return FBikSolverTask{};
}

FBikTaskProperties UBikRetargetingComponent::GetTaskProperties(EBikTaskIdentifier TaskId) const {
    return FBikTaskProperties{};
}

FBikSolverTask UBikRetargetingComponent::GetPoleVectorTaskSetup() const {
    return FBikSolverTask{};
}

FBikSolverTask UBikRetargetingComponent::GetDisabledTaskSetup() const {
    return FBikSolverTask{};
}


