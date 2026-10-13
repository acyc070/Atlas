#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/CollisionProfile.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "TarPhysUtils.generated.h"

class UActorComponent;
class UCapsuleComponent;
class UObject;
class UPhysicsConstraintComponent;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class TARSIERUTILITIES_API UTarPhysUtils : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTarPhysUtils();

    UFUNCTION(BlueprintPure)
    static bool TestHitResultForTags(const FHitResult& Hit, const TArray<FName>& tagNameList, int32& OutIndex);
    
    UFUNCTION(BlueprintPure)
    static bool TestHitResultForTag(const FHitResult& Hit, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static void SetRigidBodyWorldTransform(const UPrimitiveComponent* Component, const FTransform& NewTransform, bool clearVelocities);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FVector GetWorldGravity(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetRigidBodyWorldTransform(const UPrimitiveComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static FVector GetPhysicsVelocityAtWorldLocation(UPrimitiveComponent* PrimitiveComponent, FVector WorldLocation);
    
    UFUNCTION(BlueprintPure)
    static TEnumAsByte<ECollisionChannel> GetCollisionObjectType(const USceneComponent* Component);
    
    UFUNCTION(BlueprintPure)
    static void FindConstrainedComponents(const UPhysicsConstraintComponent* Constraint, UPrimitiveComponent*& component1, UPrimitiveComponent*& component2);
    
    UFUNCTION(BlueprintPure)
    static FName Conv_CollisionProfileNameToName(FCollisionProfileName InProfileName);
    
    UFUNCTION(BlueprintPure)
    static FVector ComputePenetration(UStaticMeshComponent* StaticMeshComponent, const UCapsuleComponent* CapsuleComponent);
    
    UFUNCTION(BlueprintPure)
    static FVector ComputeCapsulePenetration(UStaticMeshComponent* StaticMeshComponent, float CapsuleRadius, float CapsuleHalfHeight, const FVector& CapsuleLocation, const FQuat& capsuleQuat);
    
    UFUNCTION(BlueprintPure)
    static bool ComponentOrOwningActorHasTag(const UActorComponent* Component, FName TagName);
    
    UFUNCTION(BlueprintCallable)
    static void ClearRigidBodyVelocities(UPrimitiveComponent* Component);
    
};

