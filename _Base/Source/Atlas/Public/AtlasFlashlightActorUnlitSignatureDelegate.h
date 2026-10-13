#pragma once
#include "CoreMinimal.h"
#include "AtlasFlashlightActorUnlitSignatureDelegate.generated.h"

class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasFlashlightActorUnlitSignature, AActor*, Actor);

