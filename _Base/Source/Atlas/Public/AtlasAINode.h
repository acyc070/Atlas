#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtlasStateInterface.h"
#include "QuestItem.h"
#include "QuestItemReference.h"
#include "AtlasAINode.generated.h"

class AAtlasAINodeGroup;
class AAtlasAIQuest;
class USceneComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasAINode : public AActor, public IAtlasStateInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAIQuest* MainQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAIQuest* HostileSearchQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAtlasAIQuest*> SecondaryQuests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasAINodeGroup* NodeGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestItem> ListOfItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuestItemReference> ListOfItemReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateToFaceNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCouldBeSwitchedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NodePriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedInHostileSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedInNormalSearch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
public:
    AAtlasAINode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetNodePriority(const float Priority);
    
    UFUNCTION(BlueprintCallable)
    void SetAmountOfItem(FName ItemName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItems(FName ItemName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void RemoveItemReference(FName ItemName, AActor* Item);
    
    UFUNCTION(BlueprintPure)
    float GetNodePriority() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetItemReferences(FName ItemName);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAmountOfItem(FName ItemName);
    
    UFUNCTION(BlueprintCallable)
    void EnableNode();
    
    UFUNCTION(BlueprintCallable)
    bool Enabled();
    
    UFUNCTION(BlueprintCallable)
    void DisableNode();
    
    UFUNCTION(BlueprintCallable)
    void AddItems(FName ItemName, int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void AddItemReference(FName ItemName, AActor* Item);
    

    // Fix for true pure virtual functions not being implemented
};

