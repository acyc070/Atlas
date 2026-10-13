#include "AtlasFrustumBlockerVolume.h"

AAtlasFrustumBlockerVolume::AAtlasFrustumBlockerVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->BlockAxis = EAtlasFrustumBlockerAxis::Y;
    this->Softness = 0.00f;
    this->Enabled = true;
}


