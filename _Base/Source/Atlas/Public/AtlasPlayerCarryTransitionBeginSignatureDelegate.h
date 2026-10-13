#pragma once
#include "CoreMinimal.h"
#include "EAtlasPlayerCarryTransitionType.h"
#include "AtlasPlayerCarryTransitionBeginSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasPlayerCarryTransitionBeginSignature, EAtlasPlayerCarryTransitionType, transitionType);

