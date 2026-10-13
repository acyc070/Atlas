#pragma once
#include "CoreMinimal.h"
#include "AtlasAICharacter.h"
#include "AtlasChefAI.generated.h"

class AAtlasChefAI;
class UAnimSequence;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasChefAI : public AAtlasAICharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TwinCaughtSixAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasChefAI* AIPartner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceAlertedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForceHostileSearchCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBackstep;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GrabsBeforeCantReach;
    
public:
    AAtlasChefAI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAIPartner(AAtlasChefAI* Partner);
    
private:
    UFUNCTION()
    void NotifySnapshotOnSurface(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedOnSurfaceEnter(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyFinishedBackStep(const FName& NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void LosePlayer();
    
};

