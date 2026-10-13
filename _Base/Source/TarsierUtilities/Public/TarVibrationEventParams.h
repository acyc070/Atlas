#pragma once
#include "CoreMinimal.h"
#include "EAtlasHDRumbleType.h"
#include "ETarVibrationEventCurve.h"
#include "TarVibrationEventParams.generated.h"

USTRUCT(BlueprintType)
struct FTarVibrationEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LargeMotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SmallMotor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETarVibrationEventCurve> Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasHDRumbleType HdRumbleType;
    
    TARSIERUTILITIES_API FTarVibrationEventParams();
};

