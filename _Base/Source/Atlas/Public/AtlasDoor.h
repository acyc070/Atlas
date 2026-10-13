#pragma once
#include "CoreMinimal.h"
#include "EBikTaskIdentifier.h"
#include "AtlasDoorMoveSignatureDelegate.h"
#include "AtlasDoorNoParamsSignatureDelegate.h"
#include "AtlasDraggable.h"
#include "AtlasStateInterface.h"
#include "EDoorInteractionType.h"
#include "AtlasDoor.generated.h"

class UPhysicsConstraintComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDoor : public UAtlasDraggable, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorMovementStartEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorMovementStopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorMoveSignature OnDoorMoveEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorOpenedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorClosedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorFullyOpenedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorLockedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDoorNoParamsSignature OnDoorUnlockedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldLockWhenClosed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseWhenOpenTowards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCloseWhenOpenAway;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoredByAI;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClosedAngle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullyOpenAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInitiallyUnLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomHandleGrabHand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsConstraintComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticState;
    
public:
    UAtlasDoor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlockDoor();
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoredByAI(bool ignored);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorSimulatePhysics(bool bNewSimulate);
    
    UFUNCTION(BlueprintCallable)
    void SetDoorAngle(float newAngle);
    
    UFUNCTION(BlueprintCallable)
    bool LockDoor();
    
    UFUNCTION(BlueprintPure)
    bool IsDoorSimulatingPhysics() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDoorLocked() const;
    
    UFUNCTION(BlueprintPure)
    EBikTaskIdentifier GetHandleGrabHand(EDoorInteractionType Interaction) const;
    
    UFUNCTION(BlueprintPure)
    float GetDoorAngle() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearDoorPhysicsVelocities();
    

    // Fix for true pure virtual functions not being implemented
};

