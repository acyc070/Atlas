#pragma once
#include "CoreMinimal.h"
#include "Fonts/SlateFontInfo.h"
#include "EAtlasTextType.h"
#include "AtlasTextTypeToFontMapping.generated.h"

USTRUCT(BlueprintType)
struct FAtlasTextTypeToFontMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasTextType TextType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FontSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchFontSizeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FontVerticalOffset;
    
    ATLAS_API FAtlasTextTypeToFontMapping();
};

