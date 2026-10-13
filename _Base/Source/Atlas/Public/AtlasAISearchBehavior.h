#pragma once
#include "CoreMinimal.h"
#include "AtlasAIBehavior.h"
#include "AtlasAISearchBehavior.generated.h"

class AAtlasAINode;

UCLASS(Blueprintable)
class ATLAS_API UAtlasAISearchBehavior : public UAtlasAIBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAtlasAINode* CurrentActiveNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlasAINode* NextNode;
    
public:
    UAtlasAISearchBehavior();

};

