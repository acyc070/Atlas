#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasPositionBlendRoomVolumeDummyComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPositionBlendRoomVolumeDummyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UAtlasPositionBlendRoomVolumeDummyComponent(const FObjectInitializer& ObjectInitializer);

};

