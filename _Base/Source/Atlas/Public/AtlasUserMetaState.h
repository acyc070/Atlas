#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AtlasUserMetaState.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasUserMetaState : public USaveGame {
    GENERATED_BODY()
public:
    UAtlasUserMetaState();

    UFUNCTION(BlueprintCallable)
    void SetActivityProgress(const FString& ActivityID, float Progress);
    
    UFUNCTION(BlueprintCallable)
    void RemoveActiveActivity(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable)
    float GetActivityProgress(const FString& ActivityID);
    
};

