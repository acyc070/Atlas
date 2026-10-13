#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerSpawnSignatureDelegate.generated.h"

class AAtlasPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerSpawnSignature, AAtlasPlayer*, Player);

