#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TarSmoothFollowerParams.h"
#include "CameraLerpSettings.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FCameraLerpSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval FallingVelocityMinMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingVelocityLerpMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams CameraRotationParams;
    
    FCameraLerpSettings();
};

