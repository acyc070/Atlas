#pragma once
#include "CoreMinimal.h"
#include "DoorPositionData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FDoorPositionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceAlongDoorframe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromDoorframe;
    
    FDoorPositionData();
};

