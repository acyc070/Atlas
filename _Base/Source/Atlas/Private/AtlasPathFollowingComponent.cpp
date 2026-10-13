#include "AtlasPathFollowingComponent.h"

UAtlasPathFollowingComponent::UAtlasPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->NavigationQueryFilter = NULL;
    this->bAutoRebuildInvalidPaths = true;
    this->AutoRebuildInvalidPathsInterval = 0.50f;
    this->AutoRebuildInvalidPathsDistance = 100.00f;
    this->AutoRebuildPathToActorDistance = 5.00f;
    this->goalRadius = 50.00f;
    this->OutOfBoundsThreshold = 300.00f;
    this->SceneComponentToMoveTo = NULL;
}

void UAtlasPathFollowingComponent::ResumePath() {
}

void UAtlasPathFollowingComponent::PausePath() {
}

bool UAtlasPathFollowingComponent::MoveToLocation(FVector Goal, float NewGoalRadius) {
    return false;
}

bool UAtlasPathFollowingComponent::MoveToComponent(USceneComponent* ComponentGoal, float NewGoalRadius) {
    return false;
}

bool UAtlasPathFollowingComponent::MoveToActor(AActor* ActorGoal, bool bObserveActor, float NewGoalRadius) {
    return false;
}

bool UAtlasPathFollowingComponent::IsPaused() const {
    return false;
}

bool UAtlasPathFollowingComponent::IsAtGoal(FVector Location, bool b2D) const {
    return false;
}

bool UAtlasPathFollowingComponent::HasPath() const {
    return false;
}

bool UAtlasPathFollowingComponent::GetNearestPointOnPath(FVector From, float ForwardOffsetAlongPath, FVector& OutLocation, bool b2D) const {
    return false;
}

FVector UAtlasPathFollowingComponent::GetGoalLocation() const {
    return FVector{};
}

float UAtlasPathFollowingComponent::GetCurrentPathLength() {
    return 0.0f;
}

bool UAtlasPathFollowingComponent::GenerateAndStorePath(FVector From, FVector To) {
    return false;
}

void UAtlasPathFollowingComponent::CompletePath() {
}

void UAtlasPathFollowingComponent::AbortPath() {
}


