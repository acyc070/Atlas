#pragma once
#include "CoreMinimal.h"
#include "AtlasBurnableSignatureDelegate.h"
#include "AtlasPointOfInterestComponent.h"
#include "AtlasStateInterface.h"
#include "AtlasBurnableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasBurnableComponent : public UAtlasPointOfInterestComponent, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLight;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBurnableSignature OnLightingStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBurnableSignature OnLightingEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBurnableSignature OnBurnableSwitchOn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasBurnableSignature OnBurnableSwitchOff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticState;
    
public:
    UAtlasBurnableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetState(bool NewIsLit, bool broadcastEvent);
    
    UFUNCTION(BlueprintPure)
    bool IsLit() const;
    
    UFUNCTION(BlueprintPure)
    bool IsBeingLit() const;
    
    UFUNCTION(BlueprintPure)
    float GetLightingProgress() const;
    

    // Fix for true pure virtual functions not being implemented
};

