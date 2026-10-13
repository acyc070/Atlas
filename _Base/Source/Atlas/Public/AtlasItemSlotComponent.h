#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "AtlasItemSlotPlayerParams.h"
#include "AtlasItemSlotSignatureDelegate.h"
#include "AtlasStateInterface.h"
#include "AtlasItemSlotComponent.generated.h"

class AActor;
class UAtlasCarryable;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasItemSlotComponent : public USceneComponent, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasItemSlotPlayerParams> PlayerItemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerTriggerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EjectVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGrabToRemoveItem;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InitiallyInsertedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InitiallyInsertedComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasCarryable* CurrentItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasItemSlotSignature OnItemInsertionEnterSlotEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasItemSlotSignature OnItemInsertionCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasItemSlotSignature OnItemRemovedEvent;
    
public:
    UAtlasItemSlotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUpInitiallyInsertedItem(UAtlasCarryable* Item);
    
    UFUNCTION(BlueprintPure)
    bool IsItemInSlot() const;
    
    UFUNCTION(BlueprintPure)
    FName GetCurrentItemName() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasCarryable* GetCurrentItem() const;
    
    UFUNCTION(BlueprintCallable)
    void EjectItem();
    

    // Fix for true pure virtual functions not being implemented
};

