#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "TarCharacterLandedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTarCharacterLandedSignature, float, fallHeight, FVector, ImpactVelocity, const FHitResult&, HitResult);

