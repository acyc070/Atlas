#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "AtlasLookAtComponent.generated.h"

class AActor;
class UAtlasPointOfInterestComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasLookAtComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugDraw;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FieldOfView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasPointOfInterestComponent* CurrentPOI;
    
public:
    UAtlasLookAtComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetOverride();
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideToWorldLocation(FVector worldSpaceLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideToSkeletalMesh(USkeletalMeshComponent* SkeletalMesh, FName BoneName, FVector RelativeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideToComponent(USceneComponent* Component, FVector RelativeOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideToActor(AActor* Actor, FVector RelativeOffset);
    
    UFUNCTION(BlueprintPure)
    bool HasValidLookAtTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLookAtWorldLocation() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookAtTargetRotation() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasPointOfInterestComponent* GetCurrentPointOfInterest() const;
    
};

