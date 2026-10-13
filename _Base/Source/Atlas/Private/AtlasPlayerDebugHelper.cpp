#include "AtlasPlayerDebugHelper.h"

UAtlasPlayerDebugHelper::UAtlasPlayerDebugHelper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UAtlasPlayerDebugHelper::OnMovementModeChanged(TEnumAsByte<ETarMovementMode> previousMovementMode, TEnumAsByte<ETarMovementMode> movementMode) {
}

void UAtlasPlayerDebugHelper::OnLedgeClimbStarted(UAnimSequenceBase* Animation) {
}

void UAtlasPlayerDebugHelper::OnGrabStart(UAtlasGrabbable* grabbedComponent) {
}

void UAtlasPlayerDebugHelper::OnGrabEnd(UAtlasGrabbable* grabbedComponent) {
}

void UAtlasPlayerDebugHelper::OnGrabChanged(UAtlasGrabbable* grabbedComponent, UAtlasGrabHelper* helper, TEnumAsByte<EAtlasLimb> Limb, TEnumAsByte<EAtlasGrabChangeType> ChangeType, EAtlasGrabHelperMaterial Material) {
}


