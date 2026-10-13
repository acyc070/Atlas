#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "AtlasPlayerLighterSettings.h"
#include "AtlasRoomVolumeInterface.h"
#include "AtlasRoomVolumeRenderSettings.h"
#include "AtlasRoomVolumeSettings.h"
#include "AtlasSeawaveSettings.h"
#include "AtlasRoomVolume.generated.h"

class UAtlasExpHeightFogComponent;
class UAtlasPostProcessComponent;
class UBoxComponent;
class UExponentialHeightFogComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasRoomVolume : public AActor, public IAtlasRoomVolumeInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* RoomVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasExpHeightFogComponent* ExponentialHeightFogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UExponentialHeightFogComponent* RealFogComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumeSettings RoomVolumeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerLighterSettings PlayerLighterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasRoomVolumeRenderSettings RenderSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSeawaveSettings SeawaveSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
public:
    AAtlasRoomVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerExitVolume();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPlayerEnterVolume();
    
    UFUNCTION()
    void OnComponentEndOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnComponentBeginOverlap(AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void Enable();
    
    UFUNCTION(BlueprintCallable)
    void Disable();
    
private:
    UFUNCTION()
    void ActorLeave(AActor* Actor);
    
    UFUNCTION()
    void ActorEnter(AActor* Actor);
    

    // Fix for true pure virtual functions not being implemented
};

