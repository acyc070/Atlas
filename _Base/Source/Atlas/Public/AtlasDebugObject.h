#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlasAIDebugParams.h"
#include "AtlasCameraSystemDebugMenuParams.h"
#include "AtlasDLCDebugParams.h"
#include "AtlasDollhouseDebugParams.h"
#include "AtlasFlashlightSensorDebugParams.h"
#include "AtlasFlowDebugParams.h"
#include "AtlasGrannyDebugParams.h"
#include "AtlasLevelEditorDebugParams.h"
#include "AtlasOnlineSubsystemDebugParams.h"
#include "AtlasOptimizationDebugParams.h"
#include "AtlasPlayerDebugMenuAnimationParams.h"
#include "AtlasPlayerDebugMenuGameplayModifiers.h"
#include "AtlasPlayerDebugMenuGeneralParams.h"
#include "AtlasPlayerDebugMenuGrabParams.h"
#include "AtlasPlayerDebugMenuMovementParams.h"
#include "AtlasPlayerDebugMenuStatusParams.h"
#include "AtlasSeaWaveDebugParams.h"
#include "AtlasStateDebugMenu.h"
#include "AtlasDebugObject.generated.h"

class AAtlasPlayer;

UCLASS(Blueprintable)
class ATLAS_API UAtlasDebugObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDebugMenuGameplayModifiers PlayerGameplayModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDebugMenuGeneralParams PlayerGeneralParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOptimizationDebugParams OptimizationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDebugMenuAnimationParams PlayerAnimationParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDebugMenuMovementParams PlayerMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDebugMenuGrabParams PlayerGrabParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasPlayerDebugMenuStatusParams PlayerStatusParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCameraSystemDebugMenuParams CameraSystemDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasStateDebugMenu StateParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasLevelEditorDebugParams LevelEditorDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSeaWaveDebugParams SeaWaveParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasAIDebugParams AIDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasGrannyDebugParams GrannyDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasFlowDebugParams FlowDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasOnlineSubsystemDebugParams OnlineSubsystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCDebugParams DLCDebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDollhouseDebugParams DollhouseParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasFlashlightSensorDebugParams FlashlightSensorParams;
    
    UAtlasDebugObject();

private:
    UFUNCTION()
    void OnPlayerSpawned(AAtlasPlayer* playerPawn);
    
};

