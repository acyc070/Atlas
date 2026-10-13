#pragma once
#include "CoreMinimal.h"
#include "AtlasMenuManagerDelegateSignatureDelegate.generated.h"

class UAtlasMenuWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAtlasMenuManagerDelegateSignature, UAtlasMenuWidget*, Widget);

