#pragma once
#include "CoreMinimal.h"
#include "AtlasAnimSelectionData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FAtlasAnimSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ATLAS_API FAtlasAnimSelectionData();
};

