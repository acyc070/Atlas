#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAtlasAchievement.h"
#include "AtlasAchievementHelper.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasAchievementHelper : public UObject {
    GENERATED_BODY()
public:
    UAtlasAchievementHelper();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool UnlockAchievement(const UObject* WorldContextObject, EAtlasAchievement Achievement);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsAchievementUnlockedLocal(const UObject* WorldContextObject, EAtlasAchievement Achievement);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    bool IsAchievementUnlocked(const UObject* WorldContextObject, EAtlasAchievement Achievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IncrementAchievementReferenceCountNoSave(const UObject* WorldContextObject, EAtlasAchievement Achievement, const FString& aReference);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IncrementAchievementReferenceCount(const UObject* WorldContextObject, EAtlasAchievement Achievement, const FString& aReference);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool IncrementAchievement(const UObject* WorldContextObject, EAtlasAchievement Achievement);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void GetAchievementProgress(const UObject* WorldContextObject, EAtlasAchievement Achievement, TArray<FString>& References, int32& Count, int32& Target);
    
};

