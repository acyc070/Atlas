#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasStaticCameraVolumeDummyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasStaticCameraVolumeDummyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasStaticCameraVolumeDummyComponent(const FObjectInitializer& ObjectInitializer);

};

