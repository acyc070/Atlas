#pragma once
#include "CoreMinimal.h"
#include "AtlasPhysicsInterfaceSourcePair.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPhysicsInterfaceSourcePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    ATLAS_API FAtlasPhysicsInterfaceSourcePair();
};

