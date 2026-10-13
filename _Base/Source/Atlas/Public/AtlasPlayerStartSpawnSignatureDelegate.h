#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerStartSpawnSignatureDelegate.generated.h"

class AAtlasPlayer;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerStartSpawnSignature, AAtlasPlayer*, Player);

