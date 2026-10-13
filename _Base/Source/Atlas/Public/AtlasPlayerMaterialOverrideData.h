#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerMaterialOverrideData.generated.h"

class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FAtlasPlayerMaterialOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* DynamicMaterial;
    
    ATLAS_API FAtlasPlayerMaterialOverrideData();
};

