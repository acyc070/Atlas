#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TarCharacterWallBounceSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTarCharacterWallBounceSignature, FVector, BounceVector);

