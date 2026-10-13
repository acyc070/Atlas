#pragma once
#include "CoreMinimal.h"
#include "ECultureEnum.generated.h"

UENUM(BlueprintType)
enum class ECultureEnum : uint8 {
    ChineseSimplified,
    ChineseTraditional,
    Swedish,
    Russian,
    BrazilianPortuguese,
    Polish,
    Korean,
    Japanese,
    Italian,
    French,
    Spanish,
    LatinAmericaSpanish,
    enUSPOSIX,
    English,
    German,
    Arabic,
};

