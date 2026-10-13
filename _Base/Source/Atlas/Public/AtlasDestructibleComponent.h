#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "AtlasSurvivingMesh.h"
#include "DestructibleFractureSignatureDelegate.h"
#include "AtlasDestructibleComponent.generated.h"

class AActor;
class UDestructibleComponent;
class UDestructibleMesh;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDestructibleComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDestructibleMesh* DestructibleMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactVelocityToFracture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasSurvivingMesh> SurvivingMeshes;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDestructibleFractureSignature OnFracture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDestructibleComponent* DestructibleComponent;
    
    UAtlasDestructibleComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnComponentHitCallback(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    UDestructibleComponent* Fracture(FVector hitVelocity);
    
};

