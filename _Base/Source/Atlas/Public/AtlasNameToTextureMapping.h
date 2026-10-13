#pragma once
#include "CoreMinimal.h"
#include "AtlasTextureMappingLanguageOverride.h"
#include "AtlasNameToTextureMapping.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAtlasNameToTextureMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasTextureMappingLanguageOverride> LanguageOverrides;
    
    ATLAS_API FAtlasNameToTextureMapping();
};

