#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasLimb.h"
#include "AtlasOnGrabHelperGrabChangedSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAtlasOnGrabHelperGrabChangedSignature, TEnumAsByte<EAtlasLimb>, Limb, TEnumAsByte<EAtlasGrabChangeType>, ChangeType);

