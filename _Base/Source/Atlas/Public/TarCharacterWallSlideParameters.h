#pragma once
#include "CoreMinimal.h"
#include "TarCharacterWallSlideParameters.generated.h"

USTRUCT(BlueprintType)
struct FTarCharacterWallSlideParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HysteresisAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtensionLerp;
    
    ATLAS_API FTarCharacterWallSlideParameters();
};

