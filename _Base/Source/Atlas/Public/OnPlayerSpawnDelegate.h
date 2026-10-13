#pragma once
#include "CoreMinimal.h"
#include "OnPlayerSpawnDelegate.generated.h"

class AAtlasPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerSpawn, AAtlasPlayer*, playerPawn);

