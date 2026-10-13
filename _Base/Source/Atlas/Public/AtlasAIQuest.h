#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EAtlasAIState.h"
#include "AtlasAIQuest.generated.h"

class AAtlasAICharacter;
class AAtlasAINode;
class AAtlasAIQuest;
class USceneComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasAIQuest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ReferencedQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAICharacter* QuestOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRepeatable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseStandardDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesEvaluateConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTryBackstepWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAINode* MainNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AudioState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName QuestReferenceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldChase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAIQuest* NextQuest;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AAtlasAIQuest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetShouldChase(bool ShouldChase);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuestResumed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuestInterrupted();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnQuestEnded();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnHeardSound(FVector Position, float Strength);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinishedRotating();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnFinishedMove();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDoneInvestigating();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnDetectSix();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnBeginQuest();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAnimNotify(const FName& NotifyName);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAIStateChange(EAtlasAIState NewState, EAtlasAIState PreviousState);
    
protected:
    UFUNCTION()
    void HandleAnimNotify(const FName& NotifyName);
    
public:
    UFUNCTION(BlueprintPure)
    AAtlasAINode* GetNode(const FString& NameOfTheNode) const;
    
    UFUNCTION(BlueprintCallable)
    static AAtlasAIQuest* GetNamedQuest(const FName& QuestName);
    
    UFUNCTION(BlueprintImplementableEvent)
    bool EvaluateConditions();
    
    UFUNCTION(BlueprintCallable)
    void End(bool bDestroy);
    
    UFUNCTION(BlueprintImplementableEvent)
    void AnimationFinishedPlaying();
    
    UFUNCTION(BlueprintCallable)
    void AddReferencedQuestToOwner(int32 IndexOfReference);
    
};

