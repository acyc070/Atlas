#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AtlasWaterParticle.h"
#include "AtlasWaterVolume.generated.h"

class AAtlasWaterVolume;
class UAtlasFloatableComponent;
class UAtlasSeawaveComponent;
class UAtlasWaterRippleComponent;
class UBoxComponent;
class UParticleSystem;
class UPrimitiveComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasWaterVolume : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWaterVolumeOverlap, AActor*, OverlappedActor, AAtlasWaterVolume*, WaterVolume);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinSwimDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasWaterRippleComponent* WaterRippleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasWaterParticle> WaterSplashParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExcludeWaterSplashTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GrannyUsesVolume;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasSeawaveComponent* SeawaveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* GrannyExitVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* PlayerFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AAtlasWaterVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector ProjectLocationToWaterSurface(const FVector& Location) const;
    
private:
    UFUNCTION()
    void OnVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnVolumeBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectExitWater(float Mass, float Speed, const FVector& Location, bool IsPlayer);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnObjectEnterWater(float Mass, float Speed, const FVector& Location, bool IsPlayer);
    
private:
    UFUNCTION()
    void OnExitVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
public:
    UFUNCTION(BlueprintPure)
    float GetWaterSurfaceLevelFromLocation(const FVector& Location) const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterSurfaceLevel() const;
    
    UFUNCTION(BlueprintPure)
    UBoxComponent* GetVolume() const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystem* GetImpactParticle(const FVector& Velocity) const;
    
    UFUNCTION(BlueprintPure)
    TArray<UAtlasFloatableComponent*> GetFloatableComponents() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetFloatableActors() const;
    
};

