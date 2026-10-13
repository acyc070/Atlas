#pragma once
#include "CoreMinimal.h"
#include "EGuestId.h"
#include "Templates/SubclassOf.h"
#include "GuestAnimationBlueprint.generated.h"

class UAnimInstance;

USTRUCT(BlueprintType)
struct ATLAS_API FGuestAnimationBlueprint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGuestId AnimSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> StationaryAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> MobileAnimClass;
    
    FGuestAnimationBlueprint();
};

