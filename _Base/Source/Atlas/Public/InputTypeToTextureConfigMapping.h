#pragma once
#include "CoreMinimal.h"
#include "EAtlasInputType.h"
#include "InputTypeToTextureConfigMapping.generated.h"

class UAtlasPlatformTexturesConfig;

USTRUCT(BlueprintType)
struct ATLAS_API FInputTypeToTextureConfigMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasPlatformTexturesConfig* TextureConfig;
    
    FInputTypeToTextureConfigMapping();
};

