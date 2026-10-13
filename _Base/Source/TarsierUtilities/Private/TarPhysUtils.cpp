#include "TarPhysUtils.h"

UTarPhysUtils::UTarPhysUtils() {
}

bool UTarPhysUtils::TestHitResultForTags(const FHitResult& Hit, const TArray<FName>& tagNameList, int32& OutIndex) {
    return false;
}

bool UTarPhysUtils::TestHitResultForTag(const FHitResult& Hit, FName TagName) {
    return false;
}

void UTarPhysUtils::SetRigidBodyWorldTransform(const UPrimitiveComponent* Component, const FTransform& NewTransform, bool clearVelocities) {
}

FVector UTarPhysUtils::GetWorldGravity(UObject* WorldContextObject) {
    return FVector{};
}

FTransform UTarPhysUtils::GetRigidBodyWorldTransform(const UPrimitiveComponent* Component) {
    return FTransform{};
}

FVector UTarPhysUtils::GetPhysicsVelocityAtWorldLocation(UPrimitiveComponent* PrimitiveComponent, FVector WorldLocation) {
    return FVector{};
}

TEnumAsByte<ECollisionChannel> UTarPhysUtils::GetCollisionObjectType(const USceneComponent* Component) {
    return ECC_WorldStatic;
}

void UTarPhysUtils::FindConstrainedComponents(const UPhysicsConstraintComponent* Constraint, UPrimitiveComponent*& component1, UPrimitiveComponent*& component2) {
}

FName UTarPhysUtils::Conv_CollisionProfileNameToName(FCollisionProfileName InProfileName) {
    return NAME_None;
}

FVector UTarPhysUtils::ComputePenetration(UStaticMeshComponent* StaticMeshComponent, const UCapsuleComponent* CapsuleComponent) {
    return FVector{};
}

FVector UTarPhysUtils::ComputeCapsulePenetration(UStaticMeshComponent* StaticMeshComponent, float CapsuleRadius, float CapsuleHalfHeight, const FVector& CapsuleLocation, const FQuat& capsuleQuat) {
    return FVector{};
}

bool UTarPhysUtils::ComponentOrOwningActorHasTag(const UActorComponent* Component, FName TagName) {
    return false;
}

void UTarPhysUtils::ClearRigidBodyVelocities(UPrimitiveComponent* Component) {
}


