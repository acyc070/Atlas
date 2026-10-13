#pragma once
#include "CoreMinimal.h"
#include "TarNamedAnimNotifySignatureDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTarNamedAnimNotifySignature, const FName&, NotifyName);

