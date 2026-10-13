#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "AtlasJanitorNavRecast.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasJanitorNavRecast : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AAtlasJanitorNavRecast(const FObjectInitializer& ObjectInitializer);

};

