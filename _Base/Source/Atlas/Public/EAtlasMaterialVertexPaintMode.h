#pragma once
#include "CoreMinimal.h"
#include "EAtlasMaterialVertexPaintMode.generated.h"

UENUM(BlueprintType)
enum class EAtlasMaterialVertexPaintMode : uint8 {
    Add,
    Subtract,
    Replace,
};

