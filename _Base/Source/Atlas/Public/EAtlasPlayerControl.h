#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerControl.generated.h"

UENUM(BlueprintType)
enum EAtlasPlayerControl {
    PCTRL_RUN,
    PCTRL_JUMP,
    PCTRL_CROUCH,
    PCTRL_GRAB,
    PCTRL_LIGHTER,
    PCTRL_NOISE,
    PCTRL_PAUSE,
    PCTRL_NUM,
};

