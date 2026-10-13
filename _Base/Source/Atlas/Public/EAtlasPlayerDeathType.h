#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerDeathType.generated.h"

UENUM(BlueprintType)
enum EAtlasPlayerDeathType {
    ATLAS_PLAYER_DEATH_TYPE_None,
    ATLAS_PLAYER_DEATH_TYPE_Default,
    ATLAS_PLAYER_DEATH_TYPE_Fall,
    ATLAS_PLAYER_DEATH_TYPE_Pit,
    ATLAS_PLAYER_DEATH_TYPE_GrabChef,
    ATLAS_PLAYER_DEATH_TYPE_GrabJanitor,
    ATLAS_PLAYER_DEATH_TYPE_GrabGuest,
    ATLAS_PLAYER_DEATH_TYPE_Petrification,
    ATLAS_PLAYER_DEATH_TYPE_Leech,
    ATLAS_PLAYER_DEATH_TYPE_ElectricGrab,
    ATLAS_PLAYER_DEATH_TYPE_ElectricFloor,
    ATLAS_PLAYER_DEATH_TYPE_ShoeMonster,
    ATLAS_PLAYER_DEATH_TYPE_DrownInSea,
    ATLAS_PLAYER_DEATH_TYPE_TelepathicRaise,
    ATLAS_PLAYER_DEATH_TYPE_Steam,
    ATLAS_PLAYER_DEATH_TYPE_Hunger,
    ATLAS_PLAYER_DEATH_TYPE_Crushed,
    ATLAS_PLAYER_DEATH_TYPE_ElectricWater,
    ATLAS_PLAYER_DEATH_TYPE_GrabGranny,
    ATLAS_PLAYER_DEATH_TYPE_GrabShadows,
};

