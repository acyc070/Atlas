#pragma once
#include "CoreMinimal.h"
#include "PathEdge.h"
#include "PathNode.h"
#include "PathData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathNode> MyNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPathEdge> MyEdges;
    
    FPathData();
};

