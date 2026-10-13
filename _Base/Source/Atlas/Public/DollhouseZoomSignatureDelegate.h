#pragma once
#include "CoreMinimal.h"
#include "DollhouseZoomSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDollhouseZoomSignature, bool, Zooming);

