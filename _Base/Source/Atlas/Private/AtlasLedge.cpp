#include "AtlasLedge.h"

UAtlasLedge::UAtlasLedge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReparamStepsPerSegment = 1;
    this->bCanClimbUp = true;
    this->bAutoClimbUp = false;
    this->bTeleportToSegmentCenter = false;
    this->bIgnoreBlockingCheck = false;
    this->bCanAIUseOnTop = true;
    this->bCanAIUseBelow = true;
}

void UAtlasLedge::SetWorldLocationAtSplinePoint(int32 PointIndex, const FVector& InLocation) {
}

FVector UAtlasLedge::GetWorldLocationAtSplinePoint(int32 PointIndex) const {
    return FVector{};
}

FVector UAtlasLedge::GetWorldLocationAtDistanceAlongSpline(float Distance) const {
    return FVector{};
}

int32 UAtlasLedge::GetNumSplinePoints() const {
    return 0;
}

void UAtlasLedge::ClearSplinePoints() {
}

void UAtlasLedge::AddSplineWorldPoint(const FVector& Position) {
}

void UAtlasLedge::AddSplineLocalPoint(const FVector& Position) {
}


