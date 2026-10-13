#pragma once
#include "CoreMinimal.h"
#include "LookAtLocationOverride.generated.h"

class USceneComponent;
class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct FLookAtLocationOverride {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    ATLAS_API FLookAtLocationOverride();
};

