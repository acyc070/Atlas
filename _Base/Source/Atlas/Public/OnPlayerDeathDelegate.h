#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerDeathType.h"
#include "OnPlayerDeathDelegate.generated.h"

class AAtlasPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerDeath, AAtlasPlayer*, playerPawn, TEnumAsByte<EAtlasPlayerDeathType>, deathType);

