#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FloatableShapeProperties.generated.h"

USTRUCT(BlueprintType)
struct FFloatableShapeProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Extent;
    
    ATLAS_API FFloatableShapeProperties();
};

