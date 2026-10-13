#pragma once
#include "CoreMinimal.h"
#include "TarCharacterWallSlideParameters.h"
#include "AtlasPlayerWallSlideParametersTagged.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerWallSlideParametersTagged : public FTarCharacterWallSlideParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    ATLAS_API FAtlasPlayerWallSlideParametersTagged();
};

