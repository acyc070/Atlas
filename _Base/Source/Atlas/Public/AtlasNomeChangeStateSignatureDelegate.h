#pragma once
#include "CoreMinimal.h"
#include "EAtlasNomeState.h"
#include "AtlasNomeChangeStateSignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasNomeChangeStateSignature, EAtlasNomeState, NewState);

