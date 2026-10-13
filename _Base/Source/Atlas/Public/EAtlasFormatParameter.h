#pragma once
#include "CoreMinimal.h"
#include "EAtlasFormatParameter.generated.h"

UENUM(BlueprintType)
enum class EAtlasFormatParameter : uint8 {
    ControlTexture,
    Control2DTexture,
    UIActionTexture,
    NamedTexture,
    KeyCodeTexture,
};

