#pragma once
#include "CoreMinimal.h"
#include "EAtlasInputType.generated.h"

UENUM(BlueprintType)
enum class EAtlasInputType : uint8 {
    KeyboardAndMouse,
    PS4Controller,
    XboxOneLikeController,
    VitaRemote,
    SwitchController,
    StadiaController,
    SageControllerMouse,
};

