#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AtlasPlayerGrabInterface.generated.h"

class AActor;
class AAtlasPlayer;
class UAtlasGrabbable;
class UAtlasSeawaveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerGrabInterface : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxInitializationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRegrabTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalMinRegrabTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasGrabbable* grabbedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasGrabbable* PreviousGrabbedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtlasSeawaveComponent* SeawaveComponent;
    
public:
    UAtlasPlayerGrabInterface(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsPassiveGrab() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGrabVelocity() const;
    
    UFUNCTION(BlueprintPure)
    UAtlasGrabbable* GetGrabbedComponent() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetGrabbedActor() const;
    
};

