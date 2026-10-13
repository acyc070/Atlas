#pragma once
#include "CoreMinimal.h"
#include "ECultureEnum.h"
#include "AtlasTextureMappingLanguageOverride.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAtlasTextureMappingLanguageOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECultureEnum Language;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Texture;
    
    ATLAS_API FAtlasTextureMappingLanguageOverride();
};

