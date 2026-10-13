#include "MovementSnapshotData.h"

FMovementSnapshotData::FMovementSnapshotData() {
    this->Angle = 0.00f;
    this->Speed = 0.00f;
    this->SnapshotAIState = EAtlasAIState::None;
    this->DistanceToPlayer = 0.00f;
    this->HeightDifferenceToPlayer = 0.00f;
    this->HeightToLedge = 0.00f;
    this->AngleToLastHeardLocation = 0.00f;
    this->LastSnapshotAIState = EAtlasAIState::None;
}

