#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EAtlasPlayerCarryTransitionType.h"
#include "EAtlasPlayerGrabPhase.h"
#include "AtlasCollectibleAnimInstance.generated.h"

class AAtlasPlayer;
class UAnimSequence;
class UAtlasCarryable;

UCLASS(Blueprintable, NonTransient)
class ATLAS_API UAtlasCollectibleAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAtlasPlayerGrabPhase> PlayerGrabPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlasPlayerCarryTransitionType PlayerCarryTransitionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* PlayerPickUpEatAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasCarryable* CarryableComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
public:
    UAtlasCollectibleAnimInstance();

private:
    UFUNCTION()
    void OnGrabStart();
    
    UFUNCTION()
    void OnGrabEnd();
    
};

