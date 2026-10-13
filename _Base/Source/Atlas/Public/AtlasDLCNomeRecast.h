#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "AtlasDLCNomeRecast.generated.h"

UCLASS(Blueprintable)
class ATLAS_API AAtlasDLCNomeRecast : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AAtlasDLCNomeRecast(const FObjectInitializer& ObjectInitializer);

};

