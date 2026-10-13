#pragma once
#include "CoreMinimal.h"
#include "AtlasPhysicsRollingFilter.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPhysicsRollingFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Y;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Z;
    
    ATLAS_API FAtlasPhysicsRollingFilter();
};

