#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerGrabInterface.h"
#include "AtlasPlayerHideawayInterface.generated.h"

class UAtlasHideaway;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerHideawayInterface : public UAtlasPlayerGrabInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTeleportTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTeleportDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTeleportRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocityAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasHideaway* HideawayComponent;
    
public:
    UAtlasPlayerHideawayInterface(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void NotifyExitComplete(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyEnterComplete(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFallingFromExit() const;
    
};

