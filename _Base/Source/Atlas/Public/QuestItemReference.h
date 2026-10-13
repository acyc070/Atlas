#pragma once
#include "CoreMinimal.h"
#include "QuestItemReference.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FQuestItemReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Items;
    
    ATLAS_API FQuestItemReference();
};

