#pragma once
#include "CoreMinimal.h"
#include "AtlasLedgeClimbParamsBase.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FAtlasLedgeClimbParamsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExitToLedgeHang;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExitCrouchAmount;
    
    ATLAS_API FAtlasLedgeClimbParamsBase();
};

