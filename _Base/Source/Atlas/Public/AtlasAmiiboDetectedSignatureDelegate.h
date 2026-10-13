#pragma once
#include "CoreMinimal.h"
#include "EAtlasAmiiboType.h"
#include "AtlasAmiiboDetectedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasAmiiboDetectedSignature, EAtlasAmiiboType, amiiboType);

