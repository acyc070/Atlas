#pragma once
#include "CoreMinimal.h"
#include "ELevel.h"
#include "DollhouseNewRoomInFocusDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDollhouseNewRoomInFocus, ELevel, Level, const FName&, LevelToOpen, bool, IsEntitled);

