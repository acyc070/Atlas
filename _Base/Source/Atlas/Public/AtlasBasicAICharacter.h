#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlasAI.h"
#include "AtlasBasicAIAvoidanceData.h"
#include "OnMoveCompletedSignatureDelegate.h"
#include "AtlasBasicAICharacter.generated.h"

class AActor;
class AAtlasBasicAICharacter;
class AAtlasBasicAINode;
class UAtlasBasicAIAnimInstance;
class UTarAnimationListenerComponent;

UCLASS(Abstract, Blueprintable)
class ATLAS_API AAtlasBasicAICharacter : public AAtlasAI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveCompletedSignature OnMoveCompleted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlasBasicAIAvoidanceData> AvoidanceDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAvoidanceStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAvoidanceFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PathNodeAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAvoidanceEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlasBasicAIAnimInstance* CharacterAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTarAnimationListenerComponent* AnimationListenerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasThrown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasBasicAINode* NodeToInteractWith;
    
public:
    AAtlasBasicAICharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAIMovement();
    
    UFUNCTION(BlueprintCallable)
    void StartAIMovement();
    
    UFUNCTION(BlueprintCallable)
    void SetMoveSpeed(float aNewMoveSpeed);
    
    UFUNCTION()
    void OnStartedInjectedAnim(AAtlasBasicAICharacter* CharOwner, UAtlasBasicAIAnimInstance* AnimInstance);
    
    UFUNCTION()
    void OnFinishedInjectedAnim(AAtlasBasicAICharacter* CharOwner, UAtlasBasicAIAnimInstance* AnimInstance);
    
protected:
    UFUNCTION()
    void OnAnimNotify(const FName& aNotify);
    
public:
    UFUNCTION(BlueprintCallable)
    bool MoveToNode(AAtlasBasicAINode* NodeToMoveTo, float InteractRadius, float Speed, bool bCanInterrupt);
    
    UFUNCTION(BlueprintCallable)
    void Move(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    bool LeaveActiveNode();
    
    UFUNCTION(BlueprintPure)
    bool HasPath() const;
    
    UFUNCTION(BlueprintPure)
    float GetMoveSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    void AddAvoidanceLocation(FName AvoidanceName, FVector aLocationToAvoid, float aTimeout);
    
    UFUNCTION(BlueprintCallable)
    void AddAvoidanceActor(AActor* anActorToAvoid, float aTimeout);
    
};

