#pragma once
#include "CoreMinimal.h"
#include "AtlasAIBehavior.h"
#include "AtlasAIBeyondReachBehavior.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasAIBeyondReachBehavior : public UAtlasAIBehavior {
    GENERATED_BODY()
public:
    UAtlasAIBeyondReachBehavior();

    UFUNCTION()
    void OnHasReachedDestination();
    
private:
    UFUNCTION()
    void NotifyStoppedCoughAttack(const FName& NotifyName);
    
    UFUNCTION()
    void NotifyLeftHighReachAttempt(const FName& NotifyName);
    
};

