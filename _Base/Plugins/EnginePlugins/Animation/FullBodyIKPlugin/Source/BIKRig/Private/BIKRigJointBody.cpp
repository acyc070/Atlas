#include "BIKRigJointBody.h"

UBIKRigJointBody::UBIKRigJointBody() {
    this->Density = 0.00f;
    this->TargetPoseRotationStiffness = 4.00f;
    this->TargetPoseTranslationStiffness = 12.00f;
    this->RotationStiffnessScale = 1.00f;
    this->TranslationStiffnessScale = 1.00f;
    this->JointIndex = 0;
}

FName UBIKRigJointBody::GetBoneName() const {
    return NAME_None;
}

FTransform UBIKRigJointBody::GetBodyLocalTransform() const {
    return FTransform{};
}


