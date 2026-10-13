#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlasOnGrabSwingVelocitySignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasOnGrabSwingVelocitySignature, const FVector&, VelocityApplied);

