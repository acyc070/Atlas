#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "AtlasChefNavRecast.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasChefNavRecast : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AAtlasChefNavRecast(const FObjectInitializer& ObjectInitializer);

};

