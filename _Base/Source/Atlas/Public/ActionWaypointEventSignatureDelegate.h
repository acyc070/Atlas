#pragma once
#include "CoreMinimal.h"
#include "ActionWaypointEventSignatureDelegate.generated.h"

class AAtlasDLCNomeAI;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FActionWaypointEventSignature, AAtlasDLCNomeAI*, Nome);

