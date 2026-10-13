#pragma once
#include "CoreMinimal.h"
#include "AtlasSeawaveComponentReference.generated.h"

class USceneComponent;

USTRUCT(BlueprintType)
struct FAtlasSeawaveComponentReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CachedSimulatingPhysicsFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ReferencedComponent;
    
    ATLAS_API FAtlasSeawaveComponentReference();
};

