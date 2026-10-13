#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayer.h"
#include "EAtlasGrabbableType.h"
#include "PlayerOnExitWaterSignatureDelegate.h"
#include "PlayerOnLandedInWaterSignatureDelegate.h"
#include "AtlasDLCPlayer.generated.h"

class UAtlasDLCPlayerWaterInterface;
class UAtlasFlashlightSensorComponent;

UCLASS(Blueprintable, CollapseCategories)
class ATLAS_API AAtlasDLCPlayer : public AAtlasPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasDLCPlayerWaterInterface* WaterInterface;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerOnExitWaterSignature OnExitWaterEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerOnLandedInWaterSignature OnLandedInWaterEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeQuickTurnThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeQuickTurnMinExitEarlyAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrafeMaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwimDepthTolerance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EAtlasGrabbableType>> GrabTypesAllowedSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingVelocityMultiplierHorizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingVelocityMultiplierVertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasFlashlightSensorComponent* FlashlightSensorComponent;
    
public:
    AAtlasDLCPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExplorationMode(bool bActive);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatMode(bool bActive);
    
protected:
    UFUNCTION()
    void OnFinishedStrafeQuickTurn(const FName& NotifyName);
    
};

