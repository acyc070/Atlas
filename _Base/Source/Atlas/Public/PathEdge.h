#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PathEdge.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FPathEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor MyColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MyNodeIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MyIndex;
    
    FPathEdge();
};

