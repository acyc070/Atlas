#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasCollectibleCollectedDelegate.h"
#include "AtlasCollectibleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasCollectibleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasCollectibleCollected OnCollectibleCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Prefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UniqueCollectibleName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveAtSpawnIfCollected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRemoveImmedietlyWhenCollected;
    
public:
    UAtlasCollectibleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsCollectedInSave() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCollected() const;
    
    UFUNCTION(BlueprintPure)
    FName GetUniqueCollectibleName() const;
    
    UFUNCTION(BlueprintCallable)
    void Collect();
    
};

