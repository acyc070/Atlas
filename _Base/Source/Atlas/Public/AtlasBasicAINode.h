#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnNodeChangeSignatureDelegate.h"
#include "AtlasBasicAINode.generated.h"

class AAtlasBasicAICharacter;
class UAnimSequence;
class USceneComponent;

UCLASS(Blueprintable)
class ATLAS_API AAtlasBasicAINode : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNodeChangeSignature OnCharacterLeftNodeEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNodeChangeSignature OnInteractNodeEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AAtlasBasicAICharacter*> InteractingCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRotateCharacterInSameDirectionAsNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSmoothlyMoveCharacterIntoPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EnterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* LoopingAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExitAnimation;
    
public:
    AAtlasBasicAINode(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void OnInteract(AAtlasBasicAICharacter* interacter);
    
    UFUNCTION()
    void OnCharacterLeftNode(AAtlasBasicAICharacter* LeavingCharacter);
    
    UFUNCTION(BlueprintCallable)
    bool Interact(AAtlasBasicAICharacter* interacter);
    
    UFUNCTION(BlueprintCallable)
    TArray<AAtlasBasicAICharacter*> GetInteractingCharacter();
    
};

