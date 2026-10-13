#include "AtlasFlashlightSensorComponent.h"

UAtlasFlashlightSensorComponent::UAtlasFlashlightSensorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FlashlightMeshName = TEXT("SM_Zippo");
    this->TraceDistance = 500.00f;
    this->TraceCloseDistance = 100.00f;
    this->TraceWidth = 300.00f;
    this->TraceAngle = 30.00f;
    this->TraceInterval = 0.10f;
}

void UAtlasFlashlightSensorComponent::OnFlashlightTurnedOff(TEnumAsByte<ELighterExtinguishType> ExtinguishType) {
}

TArray<AActor*> UAtlasFlashlightSensorComponent::GetLitActors() const {
    return TArray<AActor*>();
}


