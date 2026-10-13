#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerDebugMenuStatusParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasPlayerDebugMenuStatusParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintPlayerLastDeathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintPlayerStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DrawPlayerStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintPlayerDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PrintPlayerAIAwareness;
    
    ATLAS_API FAtlasPlayerDebugMenuStatusParams();
};

