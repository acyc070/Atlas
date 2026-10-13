#pragma once
#include "CoreMinimal.h"
#include "AtlasHangable.h"
#include "AtlasStateInterface.h"
#include "AtlasSwitchMoveSignatureDelegate.h"
#include "AtlasSwitchSignatureDelegate.h"
#include "ESwitchPlayDirection.h"
#include "AtlasWallSwitch.generated.h"

class UAtlasGrabHelper;
class UCurveFloat;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasWallSwitch : public UAtlasHangable, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReverseHeldCurveWhenReleased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AngleOverTimeDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AngleOverTimeUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartAsDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetAfterDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompleteAtFraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSwitchMoveSignature OnMoveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSwitchSignature OnDoneEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasSwitchSignature OnMovementStartedEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasGrabHelper* GrabHelper;
    
public:
    UAtlasWallSwitch(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Play(ESwitchPlayDirection PlayDirection, bool bRestart);
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentPlayTime() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrentAlpha() const;
    

    // Fix for true pure virtual functions not being implemented
};

