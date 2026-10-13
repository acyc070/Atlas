#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AtlasAIBehavior.generated.h"

class AAIController;
class AAtlasAICharacter;
class UWorld;

UCLASS(Blueprintable)
class ATLAS_API UAtlasAIBehavior : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasAICharacter* AICharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
public:
    UAtlasAIBehavior();

};

