#include "TarAnimUtils.h"

UTarAnimUtils::UTarAnimUtils() {
}

float UTarAnimUtils::GetScaledAnimationLength(const UAnimSequenceBase* animationSequence) {
    return 0.0f;
}

UAnimationAsset* UTarAnimUtils::GetCurrentAnimFromStateMachine(UAnimInstance* AnimInstance, FName MachineName) {
    return NULL;
}

FTransform UTarAnimUtils::GetBoneLocalSpaceTransform(USkeletalMeshComponent* Mesh, FName BoneName) {
    return FTransform{};
}

float UTarAnimUtils::GetAnimationLength(const UAnimSequenceBase* animationSequence) {
    return 0.0f;
}


