#pragma once
#include "CoreMinimal.h"
#include "EAtlasGrabChangeType.h"
#include "EAtlasGrabHelperMaterial.h"
#include "EAtlasLimb.h"
#include "AtlasPlayerGrabChangedSignatureDelegate.generated.h"

class UAtlasGrabHelper;
class UAtlasGrabbable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FAtlasPlayerGrabChangedSignature, UAtlasGrabbable*, grabbedComponent, UAtlasGrabHelper*, GrabHelper, TEnumAsByte<EAtlasLimb>, Limb, TEnumAsByte<EAtlasGrabChangeType>, ChangeType, EAtlasGrabHelperMaterial, Material);

