#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasAudioOcclusionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasAudioOcclusionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasAudioOcclusionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateAmbientZoneSettings(float desiredInteriorVolume, float desiredInteriorLPF);
    
};

