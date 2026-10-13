#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AI/Navigation/NavigationTypes.h"
#include "OnPathChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "AtlasPathFollowingComponent.generated.h"

class AActor;
class UNavigationQueryFilter;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasPathFollowingComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> NavigationQueryFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAgentProperties NavigationAgentProperties;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathAborted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPathChanged OnPathRebuilt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRebuildInvalidPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRebuildInvalidPathsInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRebuildInvalidPathsDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoRebuildPathToActorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float goalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutOfBoundsThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponentToMoveTo;
    
public:
    UAtlasPathFollowingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResumePath();
    
    UFUNCTION(BlueprintCallable)
    void PausePath();
    
    UFUNCTION(BlueprintCallable)
    bool MoveToLocation(FVector Goal, float NewGoalRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToComponent(USceneComponent* ComponentGoal, float NewGoalRadius);
    
    UFUNCTION(BlueprintCallable)
    bool MoveToActor(AActor* ActorGoal, bool bObserveActor, float NewGoalRadius);
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAtGoal(FVector Location, bool b2D) const;
    
    UFUNCTION(BlueprintPure)
    bool HasPath() const;
    
    UFUNCTION(BlueprintPure)
    bool GetNearestPointOnPath(FVector From, float ForwardOffsetAlongPath, FVector& OutLocation, bool b2D) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetGoalLocation() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurrentPathLength();
    
protected:
    UFUNCTION()
    bool GenerateAndStorePath(FVector From, FVector To);
    
public:
    UFUNCTION(BlueprintCallable)
    void CompletePath();
    
    UFUNCTION(BlueprintCallable)
    void AbortPath();
    
};

