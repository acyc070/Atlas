#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TarSmoothFollowerParams.h"
#include "AtlasCrankIdleBehaviour.h"
#include "AtlasCrankMoveSignatureDelegate.h"
#include "AtlasCrankSignatureDelegate.h"
#include "AtlasGrabbable.h"
#include "AtlasCrank.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasCrank : public UAtlasGrabbable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowClockwiseRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCounterClockwiseRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AtlasCrankIdleBehaviour IdleBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AngleBetweenClickEvents;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrankSignature OnCrankMovementStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrankSignature OnCrankMovementStopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrankMoveSignature OnCrankMoveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrankSignature OnCrankMoveClickEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrankSignature OnCrankReachedMinEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCrankSignature OnCrankReachedMaxEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLimited;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval AngleInterval;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams PlayerMovementParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTarSmoothFollowerParams UnwindingMovementParams;
    
public:
    UAtlasCrank(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUnwindingMovementParams(FTarSmoothFollowerParams newParams);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerMovementParams(FTarSmoothFollowerParams newParams);
    
    UFUNCTION(BlueprintPure)
    FTarSmoothFollowerParams GetUnwindingMovementParams() const;
    
    UFUNCTION(BlueprintPure)
    float GetTargetAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FTarSmoothFollowerParams GetPlayerMovementParams() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentAngle() const;
    
    UFUNCTION(BlueprintPure)
    float GetAngleFraction() const;
    
};

