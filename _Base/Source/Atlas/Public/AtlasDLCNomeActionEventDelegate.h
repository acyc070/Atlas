#pragma once
#include "CoreMinimal.h"
#include "AtlasDLCNomeActionEventDelegate.generated.h"

class AAtlasDLCNomeAI;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasDLCNomeActionEvent, AAtlasDLCNomeAI*, Nome);

