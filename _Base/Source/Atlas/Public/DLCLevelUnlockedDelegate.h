#pragma once
#include "CoreMinimal.h"
#include "DLCLevelUnlockedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDLCLevelUnlocked, const FName&, Name);

