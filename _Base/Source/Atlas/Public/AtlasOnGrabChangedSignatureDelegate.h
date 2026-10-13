#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasGrabHelperMaterial.h"
#include "EAtlasLimb.h"
#include "AtlasOnGrabChangedSignatureDelegate.generated.h"

class UAtlasGrabHelper;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FAtlasOnGrabChangedSignature, UAtlasGrabHelper*, GrabHelper, TEnumAsByte<EAtlasLimb>, Limb, TEnumAsByte<EAtlasGrabChangeType>, ChangeType, EAtlasGrabHelperMaterial, Material);

