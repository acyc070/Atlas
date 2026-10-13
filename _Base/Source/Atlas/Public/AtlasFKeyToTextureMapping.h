#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "AtlasTextureMappingLanguageOverride.h"
#include "AtlasFKeyToTextureMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAtlasFKeyToTextureMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKey Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasTextureMappingLanguageOverride> LanguageOverrides;
    
    ATLAS_API FAtlasFKeyToTextureMapping();
};

