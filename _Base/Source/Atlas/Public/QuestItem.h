#pragma once
#include "CoreMinimal.h"
#include "QuestItem.generated.h"

USTRUCT(BlueprintType)
struct FQuestItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Amount;
    
    ATLAS_API FQuestItem();
};

