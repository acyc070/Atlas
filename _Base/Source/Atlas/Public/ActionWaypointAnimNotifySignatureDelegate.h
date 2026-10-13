#pragma once
#include "CoreMinimal.h"
#include "ActionWaypointAnimNotifySignatureDelegate.generated.h"

class AAtlasDLCNomeAI;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FActionWaypointAnimNotifySignature, const FName&, NotifyName, AAtlasDLCNomeAI*, Nome);

