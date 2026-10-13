#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAtlasAIInterest.h"
#include "AtlasPlayerAIAwarenessComponent.generated.h"

class AAtlasPlayer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPlayerAIAwarenessComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasPlayer* playerPawn;
    
public:
    UAtlasPlayerAIAwarenessComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    EAtlasAIInterest GetMaximumHostileAIInterest() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToClosestHostileAI() const;
    
};

