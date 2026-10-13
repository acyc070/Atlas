#include "BIKRigTargetTransformGoal.h"

FBIKRigTargetTransformGoal::FBIKRigTargetTransformGoal() {
    this->bTranslationIsOffsetFromEffector = false;
    this->bOrientationIsOffsetFromEffector = false;
    this->bUseActiveFadeOut = false;
    this->bConstrainTranslation = false;
    this->bConstrainOrientation = false;
    this->bIncreaseStability = false;
    this->TranslationStiffness = 0.00f;
    this->OrientationStiffness = 0.00f;
    this->TranslationMaxError = 0.00f;
    this->TranslationStiffnessFadeRatio = 0.00f;
    this->OrientationMaxError = 0.00f;
    this->OrientationStiffnessFadeRatio = 0.00f;
}

