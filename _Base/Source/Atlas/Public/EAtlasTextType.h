#pragma once
#include "CoreMinimal.h"
#include "EAtlasTextType.generated.h"

UENUM(BlueprintType)
enum class EAtlasTextType : uint8 {
    Normal,
    Headline,
    Hint,
    Credit,
    CreditTitle,
    Copyright,
    ThankYou,
    EULA,
};

