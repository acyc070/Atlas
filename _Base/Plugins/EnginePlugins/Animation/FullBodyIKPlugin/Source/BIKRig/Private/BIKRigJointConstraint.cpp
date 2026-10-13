#include "BIKRigJointConstraint.h"

UBIKRigJointConstraint::UBIKRigJointConstraint() {
    this->JointIndex = 0;
}

FName UBIKRigJointConstraint::GetBoneName() const {
    return NAME_None;
}


