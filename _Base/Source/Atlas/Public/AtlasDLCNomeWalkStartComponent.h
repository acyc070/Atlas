#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AtlasDLCNomeWalkStartSignatureDelegate.h"
#include "AtlasDLCNomeWalkStartComponent.generated.h"

class AAtlasDLCNomeAI;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ATLAS_API UAtlasDLCNomeWalkStartComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkStartAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeWalkStartSignature OnWalkStartBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAtlasDLCNomeWalkStartSignature OnWalkStartCompleted;
    
    UAtlasDLCNomeWalkStartComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnStartMovement(AAtlasDLCNomeAI* Nome);
    
    UFUNCTION()
    void NotifyWalkStartCompleted(const FName& NotifyName);
    
};

