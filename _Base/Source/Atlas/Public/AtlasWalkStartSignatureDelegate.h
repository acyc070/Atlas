#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerWalkStartType.h"
#include "AtlasWalkStartSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasWalkStartSignature, EAtlasPlayerWalkStartType, Type);

