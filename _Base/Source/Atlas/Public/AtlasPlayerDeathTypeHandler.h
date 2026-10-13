#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AtlasSettingsDeathTimeoutParams.h"
#include "EAtlasPlayerDeathType.h"
#include "EFadeState.h"
#include "AtlasPlayerDeathTypeHandler.generated.h"

class AAtlasPlayer;
class UAtlasPointOfInterestComponent;
class UAtlasPostProcessComponent;
class UCurveFloat;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasPlayerDeathTypeHandler : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPostProcessComponent* AtlasPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PostProcessBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraBlendCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraZoomStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerDeathType> deathType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDead;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasPointOfInterestComponent* PointOfInterest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSettingsDeathTimeoutParams CachedDelayParams;
    
public:
    AAtlasPlayerDeathTypeHandler(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnScreenFadeDone(EFadeState fadeState);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnRagdollFullyEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotify(const FName& NotifyName);
    
    UFUNCTION(BlueprintPure)
    FVector GetModifierVector() const;
    
};

