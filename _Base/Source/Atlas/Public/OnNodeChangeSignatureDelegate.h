#pragma once
#include "CoreMinimal.h"
#include "OnNodeChangeSignatureDelegate.generated.h"

class AAtlasBasicAICharacter;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNodeChangeSignature, AAtlasBasicAICharacter*, CharacterReference);

