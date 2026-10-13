#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasFlashlightActorLitSignatureDelegate.h"
#include "AtlasFlashlightActorUnlitSignatureDelegate.h"
#include "ELighterExtinguishType.h"
#include "AtlasFlashlightSensorComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasFlashlightSensorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FlashlightMeshName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceCloseDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceInterval;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasFlashlightActorLitSignature OnActorLit;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasFlashlightActorUnlitSignature OnActorUnlit;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> LitActors;
    
public:
    UAtlasFlashlightSensorComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnFlashlightTurnedOff(TEnumAsByte<ELighterExtinguishType> ExtinguishType);
    
public:
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetLitActors() const;
    
};

