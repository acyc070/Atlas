#pragma once
#include "CoreMinimal.h"
#include "GuestMovementData.generated.h"

USTRUCT(BlueprintType)
struct ATLAS_API FGuestMovementData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QuickTurnAngle;
    
    FGuestMovementData();
};

