#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasPlayerSqueezeGapComponent.generated.h"

class AAtlasPlayer;
class UAnimSequence;
class UAtlasSqueezeGapComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerSqueezeGapComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumSidewaysError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumMovementInputAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SidewaysAdjustmentStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultCrouchAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* DefaultStandAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtlasSqueezeGapComponent* SqueezeGap;
    
public:
    UAtlasPlayerSqueezeGapComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnTransitionComplete(const FName& notifiyName);
    
};

