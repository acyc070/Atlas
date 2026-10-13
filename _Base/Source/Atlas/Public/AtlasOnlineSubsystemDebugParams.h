#pragma once
#include "CoreMinimal.h"
#include "AtlasOnlineSubsystemDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasOnlineSubsystemDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowLoadedSubsystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAtlasPlayerNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowAtlasPlayerNickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulateNoUserDiscovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SimulateTrialLicense;
    
    ATLAS_API FAtlasOnlineSubsystemDebugParams();
};

