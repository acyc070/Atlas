#pragma once
#include "CoreMinimal.h"
#include "AtlasSurvivingMesh.generated.h"

USTRUCT(BlueprintType)
struct FAtlasSurvivingMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldSimulatePhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshName;
    
    ATLAS_API FAtlasSurvivingMesh();
};

