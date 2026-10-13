#pragma once
#include "CoreMinimal.h"
#include "EAtlasAIInterest.generated.h"

UENUM(BlueprintType)
enum class EAtlasAIInterest : uint8 {
    Neutral,
    Searching,
    Pursuing,
    Max,
};

