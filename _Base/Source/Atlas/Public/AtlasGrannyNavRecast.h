#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "AtlasGrannyNavRecast.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasGrannyNavRecast : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AAtlasGrannyNavRecast(const FObjectInitializer& ObjectInitializer);

};

