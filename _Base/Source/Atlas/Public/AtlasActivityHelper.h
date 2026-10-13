#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActivityResumeRequest.h"
#include "EActivityAvailability.h"
#include "EActivityEndReason.h"
#include "AtlasActivityHelper.generated.h"

UCLASS(Blueprintable)
class ATLAS_API UAtlasActivityHelper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActivityResumeRequest> CurrentActivityRequests;
    
    UAtlasActivityHelper();

    UFUNCTION(BlueprintCallable)
    void UnBindActivityDelegates();
    
    UFUNCTION(BlueprintCallable)
    void StartActivity(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable)
    void SetActivityAvailability(const FString& ActivityID, EActivityAvailability InAvailability);
    
    UFUNCTION(BlueprintCallable)
    void ResumeActivity(const FString& ActivityID);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllActivities();
    
    UFUNCTION(BlueprintCallable)
    int32 NumCurrentActivityRequests();
    
    UFUNCTION(BlueprintCallable)
    void EndActivity(const FString& ActivityID, EActivityEndReason InReason);
    
    UFUNCTION(BlueprintCallable)
    void ClearCurrentActivityRequests();
    
    UFUNCTION(BlueprintCallable)
    void BindActivityDelegates();
    
};

