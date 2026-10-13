#pragma once
#include "CoreMinimal.h"
#include "AtlasNomeTickStateSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasNomeTickStateSignature, float, DeltaTime);

