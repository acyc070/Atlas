#pragma once
#include "CoreMinimal.h"
#include "AtlasFlowDebugParams.generated.h"

USTRUCT(BlueprintType)
struct FAtlasFlowDebugParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideSplashScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideCutscenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HideHUDFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceConsoleMenus;
    
    ATLAS_API FAtlasFlowDebugParams();
};

