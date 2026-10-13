#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrannyBumpLevel.h"
#include "GrannyBumpLevelSettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGrannyBumpLevelSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasGrannyBumpLevel Level;
    
    FGrannyBumpLevelSettings();
};

