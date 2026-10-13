#include "DOFPostProcessVolume.h"

ADOFPostProcessVolume::ADOFPostProcessVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DOFPPVolume = NULL;
    this->gaussianVertPass = NULL;
    this->gaussianHoriPass = NULL;
    this->reblendPass = NULL;
    this->FocalDistance = 1000.00f;
}


