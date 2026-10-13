#pragma once
#include "CoreMinimal.h"
#include "AtlasPlayerGrabSignatureDelegate.generated.h"

class UAtlasGrabbable;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerGrabSignature, UAtlasGrabbable*, grabbedComponent);

